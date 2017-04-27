#include <iostream>
#include <string>
using namespace std;

int main()
{
	reset:
	float Width, Breadth, Side, Radius, Height, Base, Area, PI, Diameter;
	string Units, ShapeName, ShapeID, helpID, infoID, optionID, restartID, diaID;

	Units = "units";

	start:
	Area = 0;

	std::cout << "             ___                                         __                   " << std::endl;
	std::cout << "            /   |  ________  ____  ____  ____ ___  ___  / /____  _____        " << std::endl;
	std::cout << "           / /| | / ___/ _ `/ __ `/ __ `/ __ `__ `/ _ `/ __/ _ `/ ___/        " << std::endl;
	std::cout << "          / ___ |/ /  /  __/ /_/ / /_/ / / / / / /  __/ /_/  __/ /            " << std::endl;
	std::cout << "         /_/  |_/_/   `___/`__,_/`____/_/ /_/ /_/`___/`__/`___/_/             " << std::endl;
	std::cout << "                                                                      V1.5    " << std::endl;
	std::cout << "               This program finds the Area of different Shapes                " << std::endl;
	std::cout << "                          [Shape Code: 1]  Rectangle                          " << std::endl;
	std::cout << "                          [Shape Code: 2]  Square                             " << std::endl;
	std::cout << "                          [Shape Code: 3]  Circle                             " << std::endl;
	std::cout << "                          [Shape Code: 4]  Triangle                           " << std::endl;
	back:
	std::cout << "                     Type 'help' for further information                      " << std::endl;
    std::cout << "                     Type 'options' for further funtions                      " << std::endl;
	std::cout << "            You may also input a Shape Code or the name of the shape          " << std::endl;
	std::cout << " " << std::endl;  //skip a line
	std::cout << "[Input]: ";
	std::cin >> ShapeID;
	std::cout << " " << std::endl;  //skip a line

	if (ShapeID == "1" || ShapeID == "rectangle" || ShapeID == "Rectangle" || ShapeID == "one" || ShapeID == "One" || ShapeID == "ONE")
	{
		ShapeName = "Rectangle";
		std::cout << "Enter the Width and Breadth of the Rectangle:" << std::endl;
		std::cout << "[Input-> Width]: ";
		std::cin >> Width;
		std::cout << "[Input-> Breadth]: ";
		std::cin >> Breadth;
		Area = Breadth * Width;
		std::cout << " " << std::endl;  //skip a line
		if (Units == "units")
		{
			std::cout << "The unit of measurement being used is: " << std::endl;
			std::cout << "[Input-> Units]: ";
			std::cin >> Units;
		}
		else
		{
			goto output;
		}
		
	}

	else if (ShapeID == "2" || ShapeID == "square" || ShapeID == "Square" || ShapeID == "two" || ShapeID == "Two" || ShapeID == "TWO")
	{
		ShapeName = "Square";
		std::cout << "Enter the length of the side of the Square:" << std::endl;
		std::cout << "[Input-> Side]: ";
		std::cin >> Side;
		Area = Side * Side;
		std::cout << " " << std::endl;  //skip a line
		if (Units == "units")
		{
			std::cout << "The unit of measurement being used is: " << std::endl;
			std::cout << "[Input-> Units]: ";
			std::cin >> Units;
		}
		else
		{
			goto output;
		}
	}

	else if (ShapeID == "3" || ShapeID == "circle" || ShapeID == "Circle" || ShapeID == "three" || ShapeID == "Three" || ShapeID == "THREE")
	{
		ShapeName = "Circle";
		PI = 3.1415926536;
		if (diaID == "0")
		{
			std::cout << "Enter the length of the diameter of your Circle:" << std::endl;
			std::cout << "[Input-> Diameter]: ";
			std::cin >> Diameter;
			Radius = Diameter / 2;
			goto resumeCirc;
		}

		else
		{
			std::cout << "Enter the length of the radius of your Circle:" << std::endl;
			std::cout << "[Input-> Radius]: ";
			std::cin >> Radius;
			resumeCirc:
			Area = PI * Radius * Radius;
			std::cout << " " << std::endl;  //skip a line
			if (Units == "units")
			{
				std::cout << "The unit of measurement being used is: " << std::endl;
				std::cout << "[Input-> Units]: ";
				std::cin >> Units;
			}
			else
			{
				goto output;
			}

		}
		
	}

	else if (ShapeID == "4" || ShapeID == "triangle" || ShapeID == "Triangle" || ShapeID == "four" || ShapeID == "Four" || ShapeID == "FOUR")
	{
		ShapeName = "Triangle";
		std::cout << "Enter the Base and Height of the Triangle:" << std::endl;
		std::cout << "[Input-> Base]: ";
		std::cin >> Base;
		std::cout << "[Input-> Height]: ";
		std::cin >> Height;
		Area = 0.5 * Height * Base;
		std::cout << " " << std::endl;  //skip a line
		if (Units == "units")
		{
			std::cout << "The unit of measurement being used is: " << std::endl;
			std::cout << "[Input-> Units]: ";
			std::cin >> Units;
		}
		else
		{
			goto output;
		}
	}

	else if (ShapeID == "help" || ShapeID == "Help")
	{
		std::cout << "What would you like help with?               (Type 'back' to go back to [Input])" << std::endl;
		std::cout << "[1- How to use Areaometer]" << std::endl;
		std::cout << "[2- Learn about the authors of Areaometer]" << std::endl;
		std::cout << "[3- What is 'options'?]" << std::endl;
		std::cout << "[4- Exiting Areaometer]" << std::endl;
		std::cout << " " << std::endl;  //skip a line
		std::cout << "You may enter the corresponding number to your option" << std::endl;
		std::cout << "[Input-> Help]: ";
		std::cin >> helpID;

		if (helpID == "1" || helpID == "howto" || helpID == "how" || helpID == "How" || helpID == "Howto" || helpID == "HowTo" || helpID == "use" || helpID == "Use")
		{
			std::cout << " " << std::endl;  //skip a line
			std::cout << "There are 3 simple Steps to using Areaoemter." << std::endl;
			std::cout << " " << std::endl;  //skip a line
			std::cout << "Step 1: In the intial [Input] mode, you may type in a corresponding Shape Code" << std::endl;
			std::cout << "        or the name of the shape you require the area for." << std::endl;
			std::cout << " " << std::endl;  //skip a line
			std::cout << "        For example; entering '1' or 'rectangle' or 'Rectangle' are all" << std::endl;
			std::cout << "        acceptable Inputs for Areaometer to recognize the shape." << std::endl;
			std::cout << " " << std::endl;  //skip a line
			std::cout << "        Additionally, 'help' or 'options' mode can be accessed by typing" << std::endl;
			std::cout << "        in 'help' or 'Help' or 'Options' or 'options'." << std::endl;
			std::cout << " " << std::endl;  //skip a line
			std::cout << "Once the above is understood, press the Enter key on your keyboard for Step 2." << std::endl;
			system("pause");
			std::cout << " " << std::endl;  //skip a line
			std::cout << "_______________________________________________________________________________ " << std::endl;
			std::cout << "Step 2: Now you are required to type in the meaurements of the shape you chose" << std::endl;
			std::cout << "        to find the area of." << std::endl;
			std::cout << " " << std::endl;  //skip a line
			std::cout << "        You will now see the user input header in the form of '[Input-> Xxxx]:'" << std::endl;
			std::cout << "        where Xxxx indicates the measurement you need to enter." << std::endl;
			std::cout << " " << std::endl;  //skip a line
			std::cout << "        For example; for a rectangle you enter the each of width and breadth." << std::endl;
			std::cout << "        Hence, you may see '[Input-> Width]:' indicating you need to enter the" << std::endl;
			std::cout << "        measurement for Width. Likewise for '[Input-> Breadth]." << std::endl;
			std::cout << " " << std::endl;  //skip a line
			std::cout << "        Press the Enter key after each measuement.(This stores the measurements)" << std::endl;
			std::cout << " " << std::endl;  //skip a line
			std::cout << "N.B. Areaometer itends that only NUMBERS can entered for these measurements." << std::endl;
			std::cout << "For example '24.245' or '35' are acceptable. Text-based inputs are not!" << std::endl;
			std::cout << " " << std::endl;  //skip a line
			std::cout << "WARNING: If non-numbers are entered at this stage, Areaometer will NOT function!" << std::endl;
			std::cout << " " << std::endl;  //skip a line
			std::cout << "Once the above is understood, press the Enter key on your keyboard for Step 3." << std::endl;
			system("pause");
			std::cout << " " << std::endl;  //skip a line
			std::cout << "_______________________________________________________________________________ " << std::endl;
			std::cout << "Step 3: Lastly, enter the units of the measuremets that is being used." << std::endl;
			std::cout << " " << std::endl;  //skip a line
			std::cout << "        For example; the units of measuremt may be in 'meters' or 'm'" << std::endl;
			std::cout << "        OR, 'centimeters' or 'cm' - all of which are acceptable." << std::endl;
			std::cout << " " << std::endl;  //skip a line
			std::cout << "N.B. Areaomenter intends that the user input realistic units for measurements," << std::endl;
			std::cout << "     (where other inputs are possible)" << std::endl;
			std::cout << " " << std::endl;  //skip a line
			std::cout << "Once all of the above has been completed, Areaometer will tell you:" << std::endl;
			std::cout << " - The name of your chosen shape." << std::endl;
			std::cout << " - The area it has computed for your chosen shape." << std::endl;
			std::cout << " - The squared units for your measurements." << std::endl;
			std::cout << " " << std::endl;  //skip a line
			std::cout << "Press the Enter key on your keyboard to restart Areaometer." << std::endl;
			system("pause");
			std::cout << "_______________________________________________________________________________ " << std::endl;
			std::cout << " " << std::endl;  //skip a line
			std::cout << " " << std::endl;  //skip a line
			goto start;
		}

		else if (helpID == "2" || helpID == "about" || helpID == "author" || helpID == "About" || helpID == "Author" || helpID == "authors" || helpID == "Authors")
		{
			std::cout << "" << std::endl;  //skip a line
			std::cout << "This masterpiece has been put together from nothingness by:" << std::endl;
			std::cout << "[1-Cory Mohammed]" << std::endl;
			std::cout << "[2-Ryan Chin Sang]" << std::endl;
			std::cout << " " << std::endl;  //skip a line
			std::cout << "For more information, enter the corresponding number to your option" << std::endl;
			std::cout << "[Input-> Help-> About]: ";
			std::cin >> infoID;

			if (infoID == "1" || infoID == "Cory" || infoID == "cory" || infoID == "Mohammed" || infoID == "mohammed")
			{
				std::cout << " " << std::endl;
				std::cout << "Full Name  : Cory Mohammed" << std::endl; //put full name
				std::cout << "Student ID#: " << std::endl; //put std ID #
				std::cout << "Group      : G1" << std::endl;
				std::cout << "Group Role : " << std::endl; //put Group Role
				std::cout << " " << std::endl;  //skip a line
				std::cout << "Cory Mohammed's role in the development of Areaometer is:" << std::endl;
				std::cout << " - The code's co-developer and co-implemeter" << std::endl;
				std::cout << " - The code's co-Logic and runtime Syntax checker" << std::endl;
				std::cout << " - The lead algorithm developer" << std::endl;
				std::cout << " - The lead flow chart developer" << std::endl;
				std::cout << " " << std::endl;  //skip a line
				//Cory, enter whatever info you want to display about yourself here
				std::cout << " " << std::endl;  //skip a line
				system("pause");
				goto restart;
			} //end of infoID == 1

			else if (infoID == "2" || infoID == "Ryan" || infoID == "ryan" || infoID == "Chin" || infoID == "chin")
			{
				std::cout << " " << std::endl;  //skip a line
				std::cout << "Full Name  : Ryan Kevin Chin Sang" << std::endl;
				std::cout << "Student ID#: 814002510" << std::endl;
				std::cout << "Group      : G1" << std::endl;
				std::cout << "Group Role : TW (Team Worker)" << std::endl;
				std::cout << " " << std::endl;  //skip a line
				std::cout << "Ryan Chin Sang's role in the development of Areaometer is:" << std::endl;
				std::cout << " - The lead code developer and implemeter" << std::endl;
				std::cout << " - The code's lead Logic and runtime Syntax checker" << std::endl;
				std::cout << " - The co-algorithm developer" << std::endl;
				std::cout << " - The co-flow chart developer" << std::endl;
				std::cout << " " << std::endl;  //skip a line
				std::cout << "He is a student of the Univeristy of the West Indies currently studying for a " << std::endl;
				std::cout << "BSc. in Computer and Electrical Engineering. Ryan finds joy in playing with" << std::endl;
				std::cout << "programming code and often programs in C++ on his android Phone (SGS4m)." << std::endl;
				std::cout << " " << std::endl;  //skip a line
				system("pause");
				goto restart;
			} //end of infoID == 2

			else //for infoID error
			{
				goto error;
			}

		} //end of helpID == 2

		else if (helpID == "3" || helpID == "options" || helpID == "Options")
		{
			std::cout << " " << std::endl;  //skip a line
			std::cout << "'Options' can be accessed by typing in 'options' or 'Options' in [Input]:" << std::endl;
			std::cout << " " << std::endl;  //skip a line
			std::cout << "You will then see the user Input header as '[Input-> Options]:'" << std::endl;
			std::cout << " " << std::endl;  //skip a line
			std::cout << "This mode enables the user to access options of Areaometer which can change" << std::endl;
			std::cout << "the way Areaometer can work." << std::endl;
			std::cout << " " << std::endl;  //skip a line
			std::cout << "1- You can make Areaometer use a specified unit of measurement for every" << std::endl;
			std::cout << "   calculation that Areometer makes and outputs for you, instead of having" << std::endl;
			std::cout << "   to repeatedly enter the units for each new calculation." << std::endl;
			std::cout << " " << std::endl;  //skip a line
			std::cout << "2- You can make Areaometer change the way it calculates the area of a Circle" << std::endl;
			std::cout << "   by setting Areaometer to accept a measurement for Diameter instead of using " << std::endl;
			std::cout << "   the Radius of the Circle." << std::endl;
			std::cout << " " << std::endl;  //skip a line
			std::cout << "3- You can make Areaometer reset it's memory back to default." << std::endl;
			std::cout << "   This can be done by typing in 'reset' or '3'" << std::endl;
			std::cout << " " << std::endl;  //skip a line
			system("pause");
			goto restart;
		}
		else if (helpID == "4" || helpID == "exiting" || helpID == "exit")
		{
			std::cout << " " << std::endl;  //skip a line
			std::cout << "You can exit Areaometer in a number of ways!" << std::endl;
			std::cout << " " << std::endl;  //skip a line
			std::cout << "One such way is typing 'exit' or 'Exit' when in [Input]: and pressing the Enter key twice" << std::endl;
			std::cout << " " << std::endl;  //skip a line
			system("pause");
			goto restart;
		}

		else if (helpID == "back" || helpID == "Back")
		{
			std::cout << " " << std::endl;  //skip a line
			std::cout << "_______________________________________________________________________________ " << std::endl;
			std::cout << " " << std::endl;  //skip a line
			goto back;
		} //end helpID == back

		else //for helpID error
		{
			goto error;
		}

	}  //ends the else if for ShapeID == help

	else if (ShapeID == "options" || ShapeID == "option" || ShapeID == "Option" || ShapeID == "Options")
	{
		std::cout << "In this mode you may change:                 (Type 'back' to go back to [Input])" << std::endl;
		std::cout << "[1 - The universal units for measuremets in Areaometer]" << std::endl;
		std::cout << "[2 - Set the Area of the Circle by entering its Diameter]" << std::endl;
		std::cout << "[3 - Reset or Restart Areometer]" << std::endl;
		std::cout << " " << std::endl; //skip a line
		std::cout << "[Input-> Options]: ";
		std::cin >> optionID;

		if (optionID == "1" || optionID == "units" || optionID == "Units")
		{
			std::cout << " " << std::endl; //skip a line
			std::cout << "What units would you like to set for Areaometer's calculations?" << std::endl;
			std::cout << "[Input-> Options-> Units]: ";
			std::cin >> Units;
			std::cout << "The universal units for Areaometer calculations are now set to " << Units << std::endl;
			system("pause");
			std::cout << "_______________________________________________________________________________ " << std::endl;
			std::cout << " " << std::endl;  //skip a line
			std::cout << " " << std::endl;  //skip a line
			goto start;
		} //end optionID == 1

		else if (optionID == "2" || optionID == "diameter" || optionID == "Diameter")
		{
			std::cout << " " << std::endl; //skip a line
			std::cout << "Areaometer will now use the diameter to compute the Area of the Circle" << std::endl;
			std::cout << "Do you accept?" << std::endl;
			std::cout << "[Input-> Options-> Set Diameter]: ";
			std::cin >> diaID;
				if (diaID == "yes" || diaID == "Yes" || diaID == "y" || diaID == "Y" || diaID == "ok" || diaID == "OK")
				{
					diaID = "0";
					std::cout << "_______________________________________________________________________________ " << std::endl;
					std::cout << " " << std::endl;  //skip a line
					std::cout << " " << std::endl;  //skip a line
					goto start;
				}

				else if (diaID == "no" || diaID == "No" || diaID == "n" || diaID == "N" || diaID == "NO")
				{
					diaID = "1";
					std::cout << "_______________________________________________________________________________ " << std::endl;
					std::cout << " " << std::endl;  //skip a line
					std::cout << " " << std::endl;  //skip a line
					goto start;
				}

				else
				{
					goto error;
				}
		} //end optionID == 2

		else if (optionID == "3" || optionID == "reset" || optionID == "Reset" || optionID == "restart" || optionID == "Restart")
		{
			std::cout << "_______________________________________________________________________________ " << std::endl;
			std::cout << " " << std::endl;  //skip a line
			std::cout << " " << std::endl;  //skip a line
			goto reset;
		} //end optionID == 3

		else if (optionID == "back" || optionID == "Back" )
		{
			std::cout << " " << std::endl;  //skip a line
			std::cout << "_______________________________________________________________________________ " << std::endl;
			std::cout << " " << std::endl;  //skip a line
			goto back;
		} //end optionID == back

		else //for optionID error
		{
			goto error;
		}

	} //end if ShapeID == options

	else if (ShapeID == "exit" || ShapeID == "Exit")
	{
		goto end;
	}

	else if (ShapeID == "back" || ShapeID == "Back" || ShapeID == "restart" || ShapeID == "Restart" || ShapeID == "reset" || ShapeID == "Reset" )
	{
		std::cout << "'" << ShapeID <<"' does not run in this instance" << std::endl;
		std::cout << " " << std::endl; // skip a line
		std::cout << "_______________________________________________________________________________ " << std::endl;
		std::cout << " " << std::endl; // skip a line
		goto back;
	}

	else //error or restart for ShapeID
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
		goto start;
	}

	output:
	if (Area != 0) //relating to ShapeID code, but outputs ONLY if the initialzed Area = 0 is changed
	{
		std::cout << " " << std::endl;  //skip a line
		std::cout << "The area of the " << ShapeName << " is " << Area << " " << Units << "^2" << std::endl;
		std::cout << " " << std::endl;  //skip a line
		std::cout << "Would you like to do another calculation?" << std::endl;
		std::cout << "[Restart?]: ";
		std::cin >> restartID;
		if (restartID == "yes" || restartID == "Yes" || restartID == "y" || restartID == "Y" || restartID == "restart" || restartID == "Restart" )
		{
			std::cout << "_______________________________________________________________________________ " << std::endl;
			std::cout << " " << std::endl;  //skip a line
			std::cout << " " << std::endl;  //skip a line
			goto start;
		} // end restartID == yes

		else if (restartID == "no" || restartID == "No" || restartID == "n"|| restartID == "N" )
		{
			goto end;
		}// end restart ID == no

		else
		{
			goto error;
		}

	}// end if Area !=0

	end:
	return 0;
}// end of Areaometer


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
-Added goto error chain incase ANY input for "help mode" was not recodnized
-Impoved error tolerance by use of goto functions, as above
-Fixed "...rectangle" when shape to "...Triangle" when ShapeID = 4
-[visual] Tried to implement square brackets and mode name to make the user understand which mode he is using, though, it is not really a "mode" during runtime
-[visual] Formatted runtime text to make it look neater - centering the logo and intial texts
-Added infoID as string for use in "help mode" to choose and learn about the authors
-Added information on Cory and Ryan
-Fixed version name
---V1.4 (same date)-----------------------------------------------------------------------------------------------------------------
-[visual] Formatted initial runtime text
-[visual] Formatted all syntax in code, with end point comments because it looks confusing otherwise
-[visual] Cleaned up old code that would no longer improve functionality
-[visual] "Factorized" code for variables of type string
-[visual] Changed [Help]: in helpID==2 to [Help -> About]: to symbolize logic map Help -> About
-[visual] Changed all input into logic map eg. [Input -> Width]:
-[visual] Logic map of [Input-> Mode1-> Mode2] is universal now in runtime text
-Added optionID as string for options choice
-Added goto error chain incase ANY input for "options mode" was not recognized
-Improved error tolerance, as above
-Added an initialize for Units = "units" so as to recognize the decision maker for particular lines of output
-Added retstartID for user to choose to do another calculation, or not
-Added goto "loop" if user wants to do another calculation, and Units stay in memory successfully
-Added goto end if user wants to exit
-Added exit funtion for intial input to close program
-Added diaID for diameter mode change in options
-Added correct logic decision if diaID is set
-Reneamed start to reset for goto function
-Fixed version name
---V1.5 (same date)-----------------------------------------------------------------------------------------------------------------
-Added missing options in help mode (3, and 4)
-[visual] Added //skip a line for every skiplines
-Renamed start1 to start, as orginal start was renamed to reset for goto funtion
-[visual] Fixed various runtime texts
-Fixed 'help' and 'options' to show 'back' compatibility
-[visual] "Factorized" code for variables of type string adding more ID operator variables to support new functions
-Added message for if ShapeID == back
-Added full name for authors
-Fixed version name


>>> TO DO >>>
-Add improved error tolerance (eg. when someone enters letters instead of numbers for measurements)
-Add sound for error
-Force the user to enter only "m" or "cm", which means report error and restart in loop
-Fix reset when units are set through "start", and is not reset on next run (should be reset on each run)
-Add message that indicates the program needs to flush memory (eg. when "how to" is entered instead of "howto" in [Input-> Help]
*/