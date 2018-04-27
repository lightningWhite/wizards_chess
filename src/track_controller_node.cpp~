#include "ros/ros.h"
#include "std_msgs/String.h"
#include <iostream>
#include <string>
#include <fstream>
#include <cstdlib>

using namespace std;

std::string mapToGcode(std::string input)
{
   std::string gcode;

   // Map the chess board cell to the gcode coordinate
   if (input == "a1")
   {
      gcode = "G90 X-260 Y-260";
   }
   else if (input == "a2")
   {
     gcode = "G90 X-223.5 Y-223.5";
   }
   else if (input == "a3")
   {
      gcode = "G90 X-186.25 Y-186.25";
   }
   else if (input == "a4")
   {
      gcode = "G90 X-149 Y-149";
   }
   else if (input == "a5")
   {
      gcode = "G90 X-111.75 Y-111.75";
   }
   else if (input == "a6")
   {
      gcode = "G90 X-74.5 Y-74.5";
   }
   else if (input == "a7")
   {
      gcode = "G90 X-37.25 Y-37.25";
   }
   else if (input == "a8")
   {
      gcode = "G90 X0 Y0";
   }

   else if (input == "b1")
   {
      gcode = "G90 X-200 Y-300";
   }
   else if (input == "b2")
   {
      gcode = "G90 X-170 Y-260";
   }
   else if (input == "b3")
   {
      gcode = "G90 X-140 Y-220";
   }
   else if (input == "b4")
   {
      gcode = "G90 X-108 Y-180";
   }
   else if (input == "b5")
   {
      gcode = "G90 X-70 Y-150";
   }
   else if (input == "b6")
   {
      gcode = "G90 X-35 Y-110";
   }
   else if (input == "b7")
   {
      gcode = "G90 X0 Y-70";
   }
   else if (input == "b8")
   {
      gcode = "G90 X40 Y-40";
   }
   
   else if (input == "c1")
   {
      gcode = "G90 X-170 Y-340";
   }
   else if (input == "c2")
   {
      gcode = "G90 X-140 Y-300";
   }
   else if (input == "c3")
   {
      gcode = "G90 X-105 Y-260";
   }
   else if (input == "c4")
   {
      gcode = "G90 X-60 Y-230";
   }
   else if (input == "c5")
   {
      gcode = "G90 X-30 Y-190";
   }
   else if (input == "c6")
   {
      gcode = "G90 X10 Y-160";
   }
   else if (input == "c7")
   {
      gcode = "G90 X40 Y-120";
   }
   else if (input == "c8")
   {
      gcode = "G90 X80 Y-80";
   }

   else if (input == "d1")
   {
      gcode = "G90 X-130 Y-380";
   }
   else if (input == "d2")
   {
      gcode = "G90 X-100 Y-340";
   }
   else if (input == "d3")
   {
      gcode = "G90 X-60 Y-310";
   }
   else if (input == "d4")
   {
      gcode = "G90 X-30 Y-270";
   }
   else if (input == "d5")
   {
      gcode = "G90 X0 Y-230";
   }
   else if (input == "d6")
   {
      gcode = "G90 X40 Y-200";
   }
   else if (input == "d7")
   {
      gcode = "G90 X80 Y-160";
   }
   else if (input == "d8")
   {
      gcode = "G90 X120 Y-120";
   }

   else if (input == "e1")
   {
      gcode = "G90 X-100 Y-410";
   }
   else if (input == "e2")
   {
      gcode = "G90 X-70 Y-370";
   }
   else if (input == "e3")
   {
      gcode = "G90 X-30 Y-330";
   }
   else if (input == "e4")
   {
      gcode = "G90 X0 Y-290";
   }
   else if (input == "e5")
   {
      gcode = "G90 X40 Y-260";
   }
   else if (input == "e6")
   {
      gcode = "G90 X80 Y-230";
   }
   else if (input == "e7")
   {
      gcode = "G90 X120 Y-200";
   }
   else if (input == "e8")
   {
      gcode = "G90 X160 Y-160";
   }

   else if (input == "f1")
   {
      gcode = "G90 X-60 Y-450";
   }
   else if (input == "f2")
   {
      gcode = "G90 X-30 Y-400";
   }
   else if (input == "f3")
   {
      gcode = "G90 X10 Y-370";
   }
   else if (input == "f4")
   {
      gcode = "G90 X40 Y-330";
   }
   else if (input == "f5")
   {
      gcode = "G90 X80 Y-290";
   }
   else if (input == "f6")
   {
      gcode = "G90 X110 Y-250";
   }
   else if (input == "f7")
   {
      gcode = "G90 X150 Y-220";
   }
   else if (input == "f8")
   {
      gcode = "G90 X180 Y-180";
   }

   else if (input == "g1")
   {
      gcode = "G90 X-20 Y-480";
   }
   else if (input == "g2")
   {
      gcode = "G90 X10 Y-440";
   }
   else if (input == "g3")
   {
      gcode = "G90 X40 Y-400";
   }
   else if (input == "g4")
   {
      gcode = "G90 X80 Y-360";
   }
   else if (input == "g5")
   {
      gcode = "G90 X120 Y-330";
   }
   else if (input == "g6")
   {
      gcode = "G90 X150 Y-290";
   }
   else if (input == "g7")
   {
      gcode = "G90 X180 Y-250";
   }
   else if (input == "g8")
   {
      gcode = "G90 X220 Y-220";
   }

   else if (input == "h1")
   {
      gcode = "G90 X-20 Y-500";
   }
   else if (input == "h2")
   {
      gcode = "G90 X20 Y-460";
   }
   else if (input == "h3")
   {
      gcode = "G90 X60 Y-420";
   }
   else if (input == "h4")
   {
      gcode = "G90 X90 Y-390";
   }
   else if (input == "h5")
   {
      gcode = "G90 X130 Y-350";
   }
   else if (input == "h6")
   {
      gcode = "G90 X160 Y-320";
   }
   else if (input == "h7")
   {
      gcode = "G90 X200 Y-280";
   }
   else if (input == "h8")
   {
      gcode = "G90 X240 Y-240";
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
  
   // Pause
   fout << "G4 P1" << "\n";
 
   // Lift the magnet

   // Go to destination   
   fout << gcodeDest << "\n";

   // Pause
   fout << "G4 P1" << "\n";

   // Drop the magnet

   // Go to origin   
   fout << "G90 X0 Y0" << "\n";
   
   fout.close();
}


/**
 * This gets called every time it recives a valid voice command
 */
void commandCallback(const std_msgs::String::ConstPtr& msg)
{
  ROS_INFO("I heard: [%s]", msg->data.c_str());
  
  string command;

  command = msg->data.c_str();

  string source = command.substr(0,2);
  string dest = command.substr(2,2); 

  std::cout << "source: " << source << std::endl;
  std::cout << "dest: " << dest << std::endl;
   
  string gcodeSrc = mapToGcode(source); 
  string gcodeDest = mapToGcode(dest);

  writeGcodeScript(gcodeSrc, gcodeDest);

  // Execute the script that streams the gcode file
  system("sudo ~/catkin_ws/src/wizards_chess/src/simple_stream.py");
}

int main(int argc, char **argv)
{
  /**
   * The ros::init() function needs to see argc and argv so that it can perform
   * any ROS arguments and name remapping that were provided at the command line.
   * For programmatic remappings you can use a different version of init() which takes
   * remappings directly, but for most command-line programs, passing argc and argv is
   * the easiest way to do it.  The third argument to init() is the name of the node.
   *
   * You must call one of the versions of ros::init() before using any other
   * part of the ROS system.
   */
  ros::init(argc, argv, "track_controller_node");

  /**
   * NodeHandle is the main access point to communications with the ROS system.
   * The first NodeHandle constructed will fully initialize this node, and the last
   * NodeHandle destructed will close down the node.
   */
  ros::NodeHandle n;

  /**
   * The subscribe() call is how you tell ROS that you want to receive messages
   * on a given topic.  This invokes a call to the ROS
   * master node, which keeps a registry of who is publishing and who
   * is subscribing.  Messages are passed to a callback function, here
   * called chatterCallback.  subscribe() returns a Subscriber object that you
   * must hold on to until you want to unsubscribe.  When all copies of the Subscriber
   * object go out of scope, this callback will automatically be unsubscribed from
   * this topic.
   *
   * The second parameter to the subscribe() function is the size of the message
   * queue.  If messages are arriving faster than they are being processed, this
   * is the number of messages that will be buffered up before beginning to throw
   * away the oldest ones.
   */
  ros::Subscriber sub = n.subscribe("chess/output", 1000, commandCallback);

  /**
   * ros::spin() will enter a loop, pumping callbacks.  With this version, all
   * callbacks will be called from within this thread (the main one).  ros::spin()
   * will exit when Ctrl-C is pressed, or the node is shutdown by the master.
   */
  ros::spin();

  return 0;
}
