/***********************************************************************
* Program:
*    Project 1, chess          (e.g. Assignment 01, Hello World)  
*    Brother Comeau, CS165
* Author:
*    Jordan Kaze
* Summary: 
*    This programs plays chess according to the guidelines provided.
*    It doesn't follow all fo the rules though.
*
*    Estimated:  6.0 hrs   
*    Actual:     9.0 hrs
*      not knowing what testBed wants. and getting my pieces to not 
*      disappear
************************************************************************/

#include <iostream>
#include <cassert>
#include <string>
#include <fstream>
using namespace std;

#define NO_PIECE ' '   // There is no piece on this location of the board
#define INVALID 127    // invalid row or column value
#define WHITE_WP "\E[31;47m"
#define WHITE_BP "\E[30;47m"
#define BLACK_WP "\E[37;41m"
#define BLACK_BP "\E[30;41m"
#define CLEAR "\E[0m"
struct Coord
{
   char r;   // row, from 0..7
   char c;   // col, from 0..7
};

/*********************************************
 * MOVE
 * A single move, including the textual description
 * and what it breaks down to
 * Written by Br. Helfrich
 ********************************************/
struct Move
{
   string text;           // textual description of the move
   char   piece;          // unknown piece
   bool   capture;        // did a capture happen this move?
   Coord  source;         // where the move originated from
   Coord  dest;           // where the move finished
   bool   enpassant;      // Enpassant pawn capture
   bool   castleK;        // kingside castle
   bool   castleQ;        // queenside castle
   bool   promote;        // promote to move.piece
};

int playChess(char board[][8], char fileName[]);
void moveParse(Move & move, char board[][8]) throw(string);
void makeMove(Move & move, char board[][8],int turn);
void displayTest( char board[][8]);
void displayBoard(char board[][8]);
int displayMenu();
/**********************************************************************
 * main holds the board and clears the screen.
  ***********************************************************************/
int main()
{
   cout << "\E[H\E[2j";
   cout <<endl;
   char board[8][8] =
      {
         { 'r', 'n', 'b', 'q', 'k', 'b', 'n', 'r' },
         { 'p', 'p', 'p', 'p', 'p', 'p', 'p', 'p' },
         { NO_PIECE, NO_PIECE, NO_PIECE, NO_PIECE,
           NO_PIECE, NO_PIECE, NO_PIECE, NO_PIECE },
         { NO_PIECE, NO_PIECE, NO_PIECE, NO_PIECE,
           NO_PIECE, NO_PIECE, NO_PIECE, NO_PIECE },
         { NO_PIECE, NO_PIECE, NO_PIECE, NO_PIECE,
           NO_PIECE, NO_PIECE, NO_PIECE, NO_PIECE },
         { NO_PIECE, NO_PIECE, NO_PIECE, NO_PIECE,
           NO_PIECE, NO_PIECE, NO_PIECE, NO_PIECE },
         { 'P', 'P', 'P', 'P', 'P', 'P', 'P', 'P' },
         { 'R', 'N', 'B', 'Q', 'K', 'B', 'N', 'R' }
      };
   char fileName[256];
   displayBoard(board);
   playChess(board, fileName);
   
   return 0;
}
/**********************************************************************
 * this function interacts with the other functions to play chess. 
 ***********************************************************************/
int playChess(char board[][8], char fileName[])
{ 
   int turn = 0;
   string moves;
   // forever
   for (;;)
   {

      Move move;
            
      // prompt
      if(turn % 2 == 0)
         cout << "(White):";
      else
         cout << "(Black):";
      cin  >> move.text;
      moves += move.text;

     
      if (move.text == string("?"))
      {
         displayMenu();
         turn--;
      }
      else if (move.text == string ("test"))
      {
         displayTest(board);
         turn --;
      }
     
      // parse  
      try
      {
         moveParse(move, board);
         //cout << board[move.source.r][move.source.c];
         makeMove(move, board, turn);
      }
      catch (string s) // if the function throws then the error will be display here     
      {
         cout << "ERROR: " << s << endl;
         turn --;
      }
      
      turn ++;
      
   }
   
  return 0;
}

/**********************************************************************
 * makeMove makes the changes on the board of where the user moved his piece
 ***********************************************************************/
void makeMove(Move & move, char board[][8], int turn)
{
   if(turn %2==0)
      if(isupper(board[move.source.r][move.source.c]))
      {
         board[move.dest.r][move.dest.c] = board[move.source.r][move.source.c];
         board[move.source.r][move.source.c] = NO_PIECE;
         displayBoard(board);
      }  
      else
         throw string("you are only allowed to move your own piece"); 
   else
      if (islower(board[move.source.r][move.source.c]))
      {
         board[move.dest.r][move.dest.c] = board[move.source.r][move.source.c];
         board[move.source.r][move.source.c] = NO_PIECE;
         displayBoard(board);
      }
      else
         throw string("you are only allowed to move your own piece");
}

/**********************************************************************
 * moveParse does the actual converting of location eneterd to
 * to a location the board can understand.
 ***********************************************************************/
void moveParse(Move & move, char board[][8]) throw(string)
{
   // initialize the move.  What we know up to this point is... nothing!
   move.piece     = NO_PIECE;
   move.capture   = false;
   move.source.r  = INVALID;
   move.source.c  = INVALID;
   move.dest.r    = INVALID;
   move.dest.c    = INVALID;
   move.enpassant = false;
   move.castleK   = false;
   move.castleQ   = false;
   move.promote   = false;
   
   //
   // fromm square
   //
   
   // column: a-h
   if (move.text[0] < 'a' || move.text[0] > 'h')
      throw string( "Error in move ' ': Invalid format of source coordinates\n"
                    "        Type ? for more options");
   move.source.c = move.text[0] - 'a';
   assert(move.source.c >= 0 && move.source.c <= 7);

   //   row: 1-8
   if (move.text[1] < '1' || move.text[1] > '8')
      throw string("Error in move '': Invalid format of source coordinates\n"
                    "        Type ? for more options");
   move.source.r = move.text[1] - '1';
   assert(move.source.r >= 0 && move.source.r <= 7);

   // if there is nothing to move, we have an error
   move.piece = tolower(board[move.source.r][move.source.c]);
   if (move.piece == NO_PIECE)
      throw string("No piece in the source coordinates position");

   //
   // to square
   //

   // column: a-h
   if (move.text[2] < 'a' || move.text[2] > 'h')
      throw string("Invalid format of destination coordinates");
   move.dest.c = move.text[2] - 'a';
   assert(move.dest.c >= 0 && move.dest.c <= 7);

   // row: 1-8
   if (move.text[3] < '1' || move.text[3] > '8')
      throw string("Invalid format of destination coordinates");
   move.dest.r = move.text[3] - '1';
   assert(move.dest.r >= 0 && move.dest.r <= 7);

   // capture if there is something there
   if (board[move.dest.r][move.dest.c] != NO_PIECE)
      move.capture = true;

   //
   // capture and promotion
   //
   
   for (int i = 4; i < move.text.size(); i++)
   {
      switch(move.text[i])
      {
         case 'p':   // capture a pawn
         case 'n':   // capture a knight
         case 'b':   // capture a bishop
         case 'r':   // capture a rook
         case 'q':   // capture a queen
         case 'k':   // !! you can't capture a king you silly!
            move.capture = true;
         break;

         case 'c':  // short castling or kings castle
            move.castleK = true;
            break;
         case 'C':  // long castling or queen castle
            move.castleQ = true;
            break;
         case 'E':  // En-passant
            move.enpassant = true;
            break;

         case 'N':  // Promote to knight
         case 'B':  // Promote to Bishop
         case 'R':  // Promote to Rook
         case 'Q':  // Promote to Queen
            move.piece = tolower(move.text[i]);
         move.promote = true;
         break;

         default:
            // unknown piece
            throw string("Unknown promotion piece specification");
      }
   }
   
   // if we made it this far, we are successful

   return;
   
}
/**********************************************************************
 * displayTest shows the board without the colors.
 ***********************************************************************/
void displayTest(char board[][8])
{
   cout << "   abcdefgh\n";
   int num = 1;
   for(int i = 0; i < 8; i++)
   {
      cout << num++ << " ";
      for (int j = 0; j < 8; j++)
      { 
         if (j == 0)
            cout << " " << board[i][j];
         else if (j == 7)
            cout << board[i][j] << endl;
         else
            cout << board[i][j];
      }
      
   }
}

/**********************************************************************
 * displayBoard shows the board with the colors.
 ***********************************************************************/
void displayBoard(char board[][8])
{
   int num = 1;
   cout << "\E[H\E[2j";
   
   // will need if (isupper(c))
   cout << "   A  B  C  D  E  F  G  H\n";
   for(int i = 0; i < 8; i++)
   {
      cout << num++ << " ";
      for (int j = 0; j < 8; j++)
      {
         if(board[i][j] != INVALID)
         {
            if (isupper(board[i][j]))
               if((i % 2 == 0 && j % 2 == 0)||(i % 2 == 1 && j % 2 == 1))
                  cout << WHITE_WP;
               else
                  cout << BLACK_WP;
            // more needed
            else
               if(( i % 2 == 0 && j % 2 == 0)|| (i % 2 == 1 && j % 2 == 1))
                  cout << WHITE_BP;
               else
                  cout << BLACK_BP;
         }
         else if( i % 2 == 0 && j % 2 == 0)
            cout << WHITE_WP;
         else
            cout << BLACK_BP;
         if (j == 0)
         {
            cout << " "<< board[i][j] << " " << CLEAR;
         }
         else if (j == 7)
            cout << " " << board[i][j] << " " << CLEAR << endl;
         else
            cout << " " << board[i][j] << " " << CLEAR;
      }
      
   }
     cout << "\E[10\E[2j";
}

/**********************************************************************
 * displayMenu shows the options available for the user to enter.
 ***********************************************************************/
int displayMenu()
{

      cout << "Options:\n"
           << " ?      Display these options\n"
           << " b2b4   Specify a move using the Smith Notation\n"
           << " read   Read a saved game from a file\n"
           << " test   Simple display for test purposes\n"
           << " quit   Leave the game. You will be prompted to save\n";
      return 0;
}
