#include <iostream>
#include <string>
using namespace std;

int main()
{
	start:
//	int ShapeID;
	string ShapeID, helpID, infoID;
	float Width, Breadth, Side, Radius, Height, Base, Area, PI;
	string Units, ShapeName;
	Area = 0;

	std::cout << "             ___                                         __                   " << std::endl;
	std::cout << "            /   |  ________  ____  ____  ____ ___  ___  / /____  _____        " << std::endl;
	std::cout << "           / /| | / ___/ _ `/ __ `/ __ `/ __ `__ `/ _ `/ __/ _ `/ ___/        " << std::endl;
	std::cout << "          / ___ |/ /  /  __/ /_/ / /_/ / / / / / /  __/ /_/  __/ /            " << std::endl;
	std::cout << "         /_/  |_/_/   `___/`__,_/`____/_/ /_/ /_/`___/`__/`___/_/             " << std::endl;
	std::cout << "                                                                      V1.3    " << std::endl;
//	start1:
//	Area = 0;
	std::cout << "               This program finds the Area of different Shapes                " << std::endl;
	std::cout << "                          [Shape Code: 1]  Rectangle                          " << std::endl;
	std::cout << "                          [Shape Code: 2]  Square                             " << std::endl;
	std::cout << "                          [Shape Code: 3]  Circle                             " << std::endl;
	std::cout << "                          [Shape Code: 4]  Triangle                           " << std::endl;
	std::cout << "                    Type 'help' for further information                       " << std::endl;
//	std::cout << "                    Type 'options' for further funtions                       " << std::endl;  //***NO IMP YET***
	std::cout << "              You may input a Shape Code or the name of the shape             " << std::endl;
	std::cout << " " << std::endl;  //skip a line
	std::cout << "[Input]: ";
	std::cin >> ShapeID;
	std::cout << " " << std::endl;  //skip a line
	
	if (ShapeID == "1" || ShapeID == "rectangle" || ShapeID == "Rectangle" )
	{
		ShapeName = "Rectangle";
		std::cout << "Enter the Width and Breadth of the Rectangle:" << std::endl;
		std::cout << "Width = ";
		std::cin >> Width;
		std::cout << "Breadth = ";
		std::cin >> Breadth;
		Area = Breadth * Width;
		std::cout << "The unit of measurement being used is: ";
		std::cin >> Units;
	}
	
	else if (ShapeID == "2" || ShapeID == "square" || ShapeID == "Square" )
	{
		ShapeName = "Square";
		std::cout << "Enter the length of the side of the Square:" << std::endl;
		std::cout << "Length of Side = ";
		std::cin >> Side;
		Area = Side * Side;
		std::cout << "The unit of measurement being used is: ";
		std::cin >> Units;
	}
	
	else if (ShapeID == "3" || ShapeID == "circle" || ShapeID == "Circle" )
	{
		ShapeName = "Circle";
		PI = 3.1415926536;
		std::cout << "Enter the length of the radius of your Circle:" << std::endl;
		std::cout << "Radius = ";
		std::cin >> Radius;
		Area = PI * Radius * Radius;
		std::cout << "The unit of measurement being used is: ";
		std::cin >> Units;
	}
	
	else if (ShapeID == "4" || ShapeID == "triangle" || ShapeID == "Triangle" )
	{
		ShapeName = "Triangle";
		std::cout << "Enter the Base and Height of the Triangle:" << std::endl;
		std::cout << "Base = ";
		std::cin >> Base;
		std::cout << "Height = ";
		std::cin >> Height;
		Area = 0.5 * Height * Base;
		std::cout << "The unit of measurement being used is: ";
		std::cin >> Units;
	}
	
	else if (ShapeID == "help"|| ShapeID == "Help" )
	{
		std::cout << "What would you like help with?" << std::endl;
		std::cout << "[1- How to use Areaometer]" << std::endl;
		std::cout << "[2- Learn about the authors of Areaometer]" << std::endl;
		std::cout << " " << std::endl;
		std::cout << "You may enter the corresponding number to your option" << std::endl;
		std::cout << "[Help]: ";
		std::cin >> helpID;

		if (helpID == "1" || helpID == "howto" || helpID == "how" || helpID == "How" || helpID == "Howto" || helpID == "HowTo" || helpID == "use" || helpID == "Use" )
		{
			std::cout << " " << std::endl;
			std::cout << "There are 3 simple Steps to using Areaoemter." << std::endl;
			std::cout << " " << std::endl;
			std::cout << "Step 1: In the intial [Input] mode, you may type in a corresponding Shape Code" << std::endl;
			std::cout << "        or the name of the shape you require the area for." << std::endl;
			std::cout << " " << std::endl;
			std::cout << "        For example; entering '1' or 'rectangle' or 'Rectangle' are all" << std::endl;
			std::cout << "        acceptable Inputs for Areaometer to recognize the shape." << std::endl;
			std::cout << " " << std::endl;
			std::cout << "Once the above is understood, press the Enter key on your keyboard for Step 2." << std::endl;
			system("pause");
			std::cout << " " << std::endl;
			std::cout << "_______________________________________________________________________________ " << std::endl;
			std::cout << "Step 2: Now you are required to type in the meaurements of the shape you chose" << std::endl;
			std::cout << "        to find the area of." << std::endl;
			std::cout << " " << std::endl;
			std::cout << "        For example; for a rectangle you enter the each of width and breadth." << std::endl;
			std::cout << "        Press the Enter key after each measuement.(This stores the measurements)" << std::endl;
			std::cout << " " << std::endl;
			std::cout << "N.B. Areaometer itends that only NUMBERS can entered for these measurements." << std::endl;
			std::cout << "For example '24.245' or '35' are acceptable. Text-based inputs are not!" << std::endl;
			std::cout << " " << std::endl;
			std::cout << "Once the above is understood, press the Enter key on your keyboard for Step 3." << std::endl;
			system("pause");
			std::cout << " " << std::endl;
			std::cout << "_______________________________________________________________________________ " << std::endl;
			std::cout << "Step 3: Lastly, enter the units of the measuremets that is being used." << std::endl;
			std::cout << " " << std::endl;
			std::cout << "        For example; the units of measuremt may be in 'meters' or 'm'" << std::endl;
			std::cout << "        OR, 'centimeters' or 'cm' - all of which are acceptable." << std::endl;
			std::cout << " " << std::endl;
			std::cout << "N.B. Areaomenter intends that the user input realistic units for measurements," << std::endl;
			std::cout << "     (where other inputs are possible)" << std::endl;
			std::cout << " " << std::endl;
			std::cout << "Once all of the above has been completed, Areaometer will tell you:" << std::endl;
			std::cout << " - The name of your chosen shape." << std::endl;
			std::cout << " - The area it has computed for your chosen shape." << std::endl;
			std::cout << " - The squared units for your measurements." << std::endl;
			std::cout << " " << std::endl;
			std::cout << "Press the Enter key on your keyboard to restart Areaometer." << std::endl;
			system("pause");
			std::cout << "_______________________________________________________________________________ " << std::endl;
			std::cout << " " << std::endl;  //skip a line
			std::cout << " " << std::endl;  //skip a line
			goto start;
		}
		else if (helpID == "2" || helpID == "about" || helpID == "author" || helpID == "About" || helpID == "Author" || helpID == "authors" || helpID == "Authors")
		{
			std::cout << "" << std::endl;
			std::cout << "This masterpiece has been put together from nothingness by:" << std::endl;
			std::cout << "[1-Cory Mohammed]" << std::endl;
			std::cout << "[2-Ryan Chin Sang]" << std::endl;
			std::cout << " " << std::endl;
			std::cout << "For more information, enter the corresponding number to your option" << std::endl;
			std::cout << "[Help]: ";
			std::cin >> infoID;

			if (infoID == "1" || infoID == "Cory" || infoID == "cory" || infoID == "Mohammed" || infoID == "mohammed")
			{
				std::cout << " " << std::endl;
				std::cout << "Student ID#: " << std::endl; //put std ID #
				std::cout << "Group      : G1" << std::endl;
				std::cout << "Group Role : " << std::endl; //put Group Role
				std::cout << " " << std::endl;
				std::cout << "Cory Mohammed's role in the development of Areaometer is:" << std::endl;
				std::cout << " - The code's co-developer and co-implemeter" << std::endl;
				std::cout << " - The code's co-Logic and runtime Syntax checker" << std::endl;
				std::cout << " - The lead algorithm developer" << std::endl;
				std::cout << " - The lead flow chart developer" << std::endl;
				std::cout << " " << std::endl;
				//Cory, enter whatever info you want to display about yourself here
				std::cout << " " << std::endl;
				system("pause");
				goto restart;
			}
			else if (infoID == "2" || infoID == "Ryan" || infoID == "ryan" || infoID == "Chin" || infoID == "chin")
			{
				std::cout << " " << std::endl;
				std::cout << "Student ID#: 814002510" << std::endl;
				std::cout << "Group      : G1" << std::endl;
				std::cout << "Group Role : TW (Team Worker)" << std::endl;
				std::cout << " " << std::endl;
				std::cout << "Ryan Chin Sang's role in the development of Areaometer is:" << std::endl;
				std::cout << " - The lead code developer and implemeter" << std::endl;
				std::cout << " - The code's lead Logic and runtime Syntax checker" << std::endl;
				std::cout << " - The co-algorithm developer" << std::endl;
				std::cout << " - The co-flow chart developer" << std::endl;
				std::cout << " " << std::endl;
				std::cout << "He is a student of the Univeristy of the West Indies currently studying for a " << std::endl;
				std::cout << "BSc. in Computer and Electrical Engineering. Ryan finds joy in playing with" << std::endl;
				std::cout << "programming code and often programs in C++ on his android Phone (SGS4m)." << std::endl;
				std::cout << " " << std::endl;
				system("pause");
				goto restart;
			}
		}
		else
		{
			goto error;
		}
	}
	
	else if (ShapeID == "options" || ShapeID == "Options")
	{
		std::cout << "In this mode you may change " << std::endl;
	}
	else // if (ShapeID > 4 || ShapeID < 1)
	{
	error:
		std::cout << "_______________________________________________________________________________ " << std::endl;
		std::cout << "Areaometer does not recognize that Input" << std::endl;
		std::cout << "Let's try again" << std::endl;
		system("pause");
	restart:
		std::cout << "_______________________________________________________________________________ " << std::endl;
		std::cout << " " << std::endl;  //skip a line
		std::cout << " " << std::endl;  //skip a line
//		std::cout << "Press any key to restart..." << std::endl;
//		getchar( );
	    goto start;
	}

	if (Area != 0)
	{
		std::cout << " " << std::endl;  //skip a line
		std::cout << "The area of the " << ShapeName << " is " << Area << " " << Units << "^2" << std::endl;
		std::cout << " " << std::endl;  //skip a line
//		std::cout << "Would you like to do another calculation?" << std::endl;
	}

	return 0;
}

/*
Version Info:
*Latest first in dd.mm.yy: VX.x
**ALWAYS UPDATE VER# IN OP CODE

07.02.15: V1.0
-Added text art at the start of program
-Added short description of program under text art with Shape code and options
-Added potential for "help" sequence (commented cout)
-Added necessary var names
-Added necessary decision operations
-Added ShapeName as string
-Added ShapeName so as to have ONE output line read like: "The area of your " << ShapeName << " is " << Area << " " << Units << "^2" << std::endl;
-[visual] formatted the code
---V1.1 (same date)-----------------------------------------------------------------------------------------------------------------
-Added small error tolerance if the user does not enter either 1, 2, 3 or 4 by the use of goto command
-[visual] used "//" tags to omit code without erasing it
-Changed StringID's variable type from int to string, improving the versatility of the user's input amongst other things
-Added more conditions to decision making code to accept a Shape Code and a string stating the shape's name (eg. cin >> "rectangle" is acceptable)
-Added Area initializes to 0 for output decision
-Added condition to ouput the final statement only if Area is not 0, this way, the program would not give an error if initial user input doesnt follow what the code requires
-Fixed version name
---V1.2 (same date)-----------------------------------------------------------------------------------------------------------------
-Repositioned "start:" for goto function so as to not have the text art repeat, incase of "incompatible" user input 
-Repositioned where Area initializes to 0 to accomodate the repositioned "start:"
-Fixed Error message from "... Shape Code" to "... Input"
-Added start1 for goto function, if intial "incompatible" user input
-Fixed version name
------------------------------------------------------------------------------------------------------------------------------------
08.02.15 V1.3
-Added potential for options (commented cout)
-Added helpID as string for implementing help functionality
-Added goto error chain incase ANY input was not recodnized
-Impoved error tolerance by use of goto functions, as above
-Fixed "...rectangle" when shape to "...Triangle" when ShapeID = 4
-[visual] Tried to implement square brackets and mode name to make the user understand which mode he is using, though, it is not really a "mode" during runtime
-[visual] Formatted runtime text to make it look neater - centering the logo and intial texts
-Introduced infoID as string for use in "help mode" to choose and learn about the authors
-Added information on Cory and Ryan


>>> TO DO >>>
-Add improved error tolerance (eg. when someone enters letters instead of numbers)
-Add Possible Loop so another calc can be done
-Add sound for error
-Add options for the to set the unit of measurements, and initialize default unit of measurement "unit" - have ONE place to set units universally
-Format the output text to make it look more professional
-Clean old commented code that would no longer improve funtionality
*/