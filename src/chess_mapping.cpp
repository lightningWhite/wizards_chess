#include <iostream>
#include <string>
#include <fstream>

using namespace std;

std::string mapToGcode(std::string input)
{
   std::string gcode;

   // Map the chess board cell to the gcode coordinate
   if (input == "a1")
   {
      gcode = "G90 X0 Y0";
   }
   else if (input == "a2")
   {
      gcode = "G90 X0 Y0";
   }
   else if (input == "a3")
   {
      gcode = "G90 X0 Y0";
   }
   else if (input == "a4")
   {
      gcode = "G90 X0 Y0";
   }
   else if (input == "a5")
   {
      gcode = "G90 X0 Y0";
   }
   else if (input == "a6")
   {
      gcode = "G90 X0 Y0";
   }
   else if (input == "a7")
   {
      gcode = "G90 X0 Y0";
   }
   else if (input == "a8")
   {
      gcode = "G90 X0 Y0";
   }

   else if (input == "b1")
   {
      gcode = "G90 X0 Y0";
   }
   else if (input == "b2")
   {
      gcode = "G90 X0 Y0";
   }
   else if (input == "b3")
   {
      gcode = "G90 X0 Y0";
   }
   else if (input == "b4")
   {
      gcode = "G90 X0 Y0";
   }
   else if (input == "b5")
   {
      gcode = "G90 X0 Y0";
   }
   else if (input == "b6")
   {
      gcode = "G90 X0 Y0";
   }
   else if (input == "b7")
   {
      gcode = "G90 X0 Y0";
   }
   else if (input == "b8")
   {
      gcode = "G90 X0 Y0";
   }
   
   else if (input == "c1")
   {
      gcode = "G90 X0 Y0";
   }
   else if (input == "c2")
   {
      gcode = "G90 X0 Y0";
   }
   else if (input == "c3")
   {
      gcode = "G90 X0 Y0";
   }
   else if (input == "c4")
   {
      gcode = "G90 X0 Y0";
   }
   else if (input == "c5")
   {
      gcode = "G90 X0 Y0";
   }
   else if (input == "c6")
   {
      gcode = "G90 X0 Y0";
   }
   else if (input == "c7")
   {
      gcode = "G90 X0 Y0";
   }
   else if (input == "b8")
   {
      gcode = "G90 X0 Y0";
   }

   else if (input == "c1")
   {
      gcode = "G90 X0 Y0";
   }
   else if (input == "c2")
   {
      gcode = "G90 X0 Y0";
   }
   else if (input == "c3")
   {
      gcode = "G90 X0 Y0";
   }
   else if (input == "c4")
   {
      gcode = "G90 X0 Y0";
   }
   else if (input == "c5")
   {
      gcode = "G90 X0 Y0";
   }
   else if (input == "c6")
   {
      gcode = "G90 X0 Y0";
   }
   else if (input == "c7")
   {
      gcode = "G90 X0 Y0";
   }
   else if (input == "c8")
   {
      gcode = "G90 X0 Y0";
   }

   else if (input == "d1")
   {
      gcode = "G90 X0 Y0";
   }
   else if (input == "d2")
   {
      gcode = "G90 X0 Y0";
   }
   else if (input == "d3")
   {
      gcode = "G90 X0 Y0";
   }
   else if (input == "d4")
   {
      gcode = "G90 X0 Y0";
   }
   else if (input == "d5")
   {
      gcode = "G90 X0 Y0";
   }
   else if (input == "d6")
   {
      gcode = "G90 X0 Y0";
   }
   else if (input == "d7")
   {
      gcode = "G90 X0 Y0";
   }
   else if (input == "d8")
   {
      gcode = "G90 X0 Y0";
   }

   else if (input == "e1")
   {
      gcode = "G90 X0 Y0";
   }
   else if (input == "e2")
   {
      gcode = "G90 X0 Y0";
   }
   else if (input == "e3")
   {
      gcode = "G90 X0 Y0";
   }
   else if (input == "e4")
   {
      gcode = "G90 X0 Y0";
   }
   else if (input == "e5")
   {
      gcode = "G90 X0 Y0";
   }
   else if (input == "e6")
   {
      gcode = "G90 X0 Y0";
   }
   else if (input == "e7")
   {
      gcode = "G90 X0 Y0";
   }
   else if (input == "e8")
   {
      gcode = "G90 X0 Y0";
   }

   else if (input == "f1")
   {
      gcode = "G90 X0 Y0";
   }
   else if (input == "f2")
   {
      gcode = "G90 X0 Y0";
   }
   else if (input == "f3")
   {
      gcode = "G90 X0 Y0";
   }
   else if (input == "f4")
   {
      gcode = "G90 X0 Y0";
   }
   else if (input == "f5")
   {
      gcode = "G90 X0 Y0";
   }
   else if (input == "f6")
   {
      gcode = "G90 X0 Y0";
   }
   else if (input == "f7")
   {
      gcode = "G90 X0 Y0";
   }
   else if (input == "f8")
   {
      gcode = "G90 X0 Y0";
   }

   else if (input == "g1")
   {
      gcode = "G90 X0 Y0";
   }
   else if (input == "g2")
   {
      gcode = "G90 X0 Y0";
   }
   else if (input == "g3")
   {
      gcode = "G90 X0 Y0";
   }
   else if (input == "g4")
   {
      gcode = "G90 X0 Y0";
   }
   else if (input == "g5")
   {
      gcode = "G90 X0 Y0";
   }
   else if (input == "g6")
   {
      gcode = "G90 X0 Y0";
   }
   else if (input == "g7")
   {
      gcode = "G90 X0 Y0";
   }
   else if (input == "g8")
   {
      gcode = "G90 X0 Y0";
   }

   else if (input == "h1")
   {
      gcode = "G90 X0 Y0";
   }
   else if (input == "h2")
   {
      gcode = "G90 X0 Y0";
   }
   else if (input == "h3")
   {
      gcode = "G90 X0 Y0";
   }
   else if (input == "h4")
   {
      gcode = "G90 X0 Y0";
   }
   else if (input == "h5")
   {
      gcode = "G90 X0 Y0";
   }
   else if (input == "h6")
   {
      gcode = "G90 X0 Y0";
   }
   else if (input == "h7")
   {
      gcode = "G90 X0 Y0";
   }
   else if (input == "h8")
   {
      gcode = "G90 X0 Y0";
   }

   return gcode;
}


int writeGcodeScript(string gcodeSrc, string gcodeDest)
{
   // Establish the origin: G92 X0 Y0   
   string origin = "G92 X0 Y0";

   // Write to the file:
   ofstream fout;
   fout.open("grbl.gcode");
   fout << origin << "\n";
   
   // Go to source   
   fout << gcodeSrc << "\n";
   
   // Lift the magnet

   // Go to destination   
   fout << gcodeDest << "\n";

   // Drop the magnet

   // Go to origin   
   fout << "G90 X0 Y0" << "\n";
   
   fout.close();
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

   // Execute the script

   return 0;
}




