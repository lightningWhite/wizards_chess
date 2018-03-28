#include <iostream>
#include <string>

// enumerations for all possible inputs for the switched lookup table
enum {a1, a2, a3, a4, a5, a6, a7, a8,
      b1, b2, b3, b4, b5, b6, b7, b8,
      c1, c2, c3, c4, c5, c6, c7, c8,
      d1, d2, d3, d4, d5, d6, d7, d8,
      e1, e2, e3, e4, e5, e6, e7, e8, 
      f1, f2, f3, f4, f5, f6, f7, f8,
      g1, g2, g3, g4, g5, g6, g7, g8,
      h1, h2, h3, h4, h5, h6, h7, h8};



std::string mapToGcode(std::string input)
{
   std::string::size_type sz;
   bool shiftRequired; // Keep track of if a shift is required
   std::string gcode;

   // If the cell is on the nearer half
   if (input[1] >= 5)
   {
      shiftRequired = false;
   } 
   else if (input[1] <=4) // If the cell is on the further half
   {
      shiftRequired = true;
   }

   // Map the chess board cell to the gcode coordinate
   if (input = "a1" || (input == "a5" && shiftRequired))
   {
      gcode = "G90 X0 Y0";
   }

}


int writeGcodeScript(gcodeSrc, gcodeDest)
{
   // Establish the origin: G92 X0 Y0
   // Go to source
   // Lift the magnet
   // Go to destination
   // Go to origin
}


int main() 
{
   string command;

   std::cin >> command;

   string source = command[0] + command[1];
   string dest = command[2] + command [3];

   string gcodeSrc = mapToGcode(source); 
   string gcodeDest = mapToGcode(dest);

   writeGcodeScript(gcodeSrc, gcodeDest);
}




