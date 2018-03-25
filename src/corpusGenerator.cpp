#include <iostream>

int main()
{
   //std::cout << std::endl;//"Left to right" << std::endl; 
   // GOOD 
   // Left to right straight motion one at a time 
   for (int number = 1; number < 8; number++)
   {
      for (char letter = 'a'; letter <= 'h'; letter++)
      {
         std::cout << letter << number << " to ";
         std::cout  << letter << number + 1 << std::endl;
      }
   }

/*
   //TODO: This is messed up
   // Bottom to top straight motion multiple at a time 
   int i = 1;
   for (char letter = 'a'; letter < 'h'; letter++)
   {
      for (int number = 1; number < 8; number++)
      {
         std::cout << letter << i << " to ";
         std::cout  << letter << number + 1 << std::endl;
      }
      i++;
   }
*/



   std::cout << std::endl;// "Top to bottom" << std::endl;
 
   // GOOD
   // Top to bottom straight motion one at a time
   for (int number = 8; number > 1; number--)
   {
      for (char letter = 'h'; letter >= 'a'; letter--)
      {
         std::cout << letter << number << " to ";
         std::cout  << letter << number - 1 << std::endl;
      }
   } 

   std::cout << std::endl;//"Bottom to top" <<std::endl;

   // GOOD
   // Bottom to top one at a time
   for (char letter = 'a'; letter <= 'h'; letter++)
   {
      for (int number = 1; number < 8; number++)
      {
         std::cout << letter << number << " to ";
         std::cout  << letter << number + 1 << std::endl;
      }
   }

/*

   //TODO: This is messed up. It would generate a HUGE file to be correct.
   // Top to bottom straight motion multiple at a time
   int i = 8;
   for (char letter = 'h'; letter > 'a'; letter--)
   {
      for (int number = 8; number > 1; number--)
      {
         std::cout << letter << i << " to ";
         std::cout  << letter << number - 1 << std::endl;
      }
   } 

*/

/*
   // TODO
   // Left to right straight motion multiple at a time
   char c = 'a'; 
   for (int number = 1; number < 8; number++)
   {
      for (char letter = 'a'; letter < 'h'; letter++)
      {
         std::cout << letter << number << " to ";
	 char nextLetter = letter + 1;
         std::cout  << nextLetter << number << std::endl;
      }
      c++;
   }
*/


   std::cout << std::endl;//"Right to left" << std::endl;

   // GOOD
   // Right to left straight motion one at a time
   for (int number = 8; number >= 1; number--)
   {
      for (char letter = 'h'; letter > 'a'; letter--)
      {
         std::cout << letter << number << " to ";
	 char nextLetter = letter - 1;
         std::cout  << nextLetter << number << std::endl;
      }
   } 

   std::cout << std::endl;//"Bottom left to top right diagonal" << std::endl;


   // GOOD 
   // Bottom left to top right diagonal motion one at a time 
   for (int number = 1; number < 8; number++)
   {
      for (char letter = 'a'; letter < 'h'; letter++)
      {
         std::cout << letter << number << " to ";
         char nextLetter = letter + 1;
         std::cout  << nextLetter << number + 1 << std::endl;
      }
   }

   std::cout << std::endl;//"Top right to bottom left diagonal" << std::endl;
   
   // GOOD
   // Top right to bottom left diagonal motion one at a time
   for (int number = 8; number > 1; number--)
  {
      for (char letter = 'h'; letter > 'a'; letter--)
      {
         std::cout << letter << number << " to ";
         char nextLetter = letter - 1;
         std::cout  << nextLetter << number - 1 << std::endl;
      }
   } 

   std::cout << std::endl;//"Bottom right to top left diagonal" << std::endl;

   // GOOD
   // Bottom right to top left diagonal motion one at a time 
   for (int number = 1; number < 8; number++)
   {
      for (char letter = 'h'; letter > 'a'; letter--)
      {
         std::cout << letter << number << " to ";
         char nextLetter = letter - 1;
         std::cout  << nextLetter << number + 1 << std::endl;
      }
   }
   
   std::cout << std::endl;//"Top right to bottom left diagonal" << std::endl;   

   // GOOD
   // Top right to bottom left diagonal motion one at a time
   for (int number = 8; number > 1; number--)
   {
      for (char letter = 'a'; letter < 'h'; letter++)
      {
         std::cout << letter << number << " to ";
         char nextLetter = letter + 1;
         std::cout  << nextLetter << number - 1 << std::endl;
      }
   } 

  
   return 0;
}
