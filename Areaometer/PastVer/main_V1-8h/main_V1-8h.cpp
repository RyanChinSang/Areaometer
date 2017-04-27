#include <iostream>
#include <sstream>
#include <fstream>
#include <string>
#include <cmath>
#include "Using.h"
#include "Memory.h"
#include "Mem_Clear.h"
#include "Poly_Namer.h"
#include "Poly_Area.h"


int main()
{
	MemClear(); // Clears ROM and RAM before it all starts

	out.open("RAM.txt"); // Write all the following to memory txt file

	reset:
	// Takes off settings in Options Mode
	diamID = "OFF";
	holdUnits = "OFF";
	ROMmode = "OFF";
	if (countclear != 0)
	{
		MemClear();
	}

	start:
	// Initializing
	errorID = "0";
	Mode = "Input";
	if (holdUnits == "OFF")
	{
		Units = "units";
	}
	else if (holdUnits == "ON")
	{
		Units = Units;
	}// How to initialize Units (if set or not though Options Mode)
	
	// Logo and instructions
	cout << "             ___                                         __                  " << endl;
	cout << "            /   |  ________  ____  ____  ____ ___  ___  / /____  _____       " << endl;
	cout << "           / /| | / ___/ _ \\/ __ \\/ __ \\/ __ '__ \\/ _ \\/ __/ _ \\/ ___/       " << endl;
	cout << "          / ___ |/ /  /  __/ /_/ / /_/ / / / / / /  __/ /_/  __/ /           " << endl;
	cout << "         /_/  |_/_/   \\___/\\__,_/\\____/_/ /_/ /_/\\___/\\__/\\___/_/            " << endl;
	cout << "                                                                      {V1.8h}" << endl;
	cout << "               This program finds the Area of different Shapes               " << endl;
	cout << '\n';
	cout << "                  Type   \"list\"    for Shape Codes or Names                 " << endl;
	cout << "                  Type   \"help\"    for further information                  " << endl;
	cout << "                  Type  \"options\"  for further functions                    " << endl;
	out << "             ___                                         __                   " << endl;
	out << "            /   |  ________  ____  ____  ____ ___  ___  / /____  _____        " << endl;
	out << "           / /| | / ___/ _ \\/ __ \\/ __ \\/ __ '__ \\/ _ \\/ __/ _ \\/ ___/        " << endl;
	out << "          / ___ |/ /  /  __/ /_/ / /_/ / / / / / /  __/ /_/  __/ /            " << endl;
	out << "         /_/  |_/_/   \\___/\\__,_/\\____/_/ /_/ /_/\\___/\\__/\\___/_/             " << endl;
	out << "                                                                      {V1.8h}   " << endl;
	out << "               This program finds the Area of different Shapes                " << endl;
	out << '\n';
	out << "                     Type   \"list\"  for Shape Codes or Names                  " << endl;
	out << "                     Type   \"help\"  for further information                   " << endl;
	out << "                     Type \"options\" for further functions                     " << endl;//[MC] logo

	backinShapeID:
	// Ask for ShapeID
	cout << '\n';  
	cout << "[Input]: ";
	getline (cin, ShapeID);
	cout << '\n';

	out << '\n';  
	out << "[Input]: ";
	out << ShapeID << endl;
	out << '\n';//[MC] backin

	if (ShapeID == "2" || ShapeID == "rectangle" || ShapeID == "Rectangle" || ShapeID == "RECTANGLE" || ShapeID == "two" || ShapeID == "Two" || ShapeID == "TWO")
	{
		ShapeName = "Rectangle";

		cout << "Enter the Width and Breadth of the Rectangle:" << endl;
		cout << "[Input-> Width]: ";
		getline(cin, sDim);
		stringstream(sDim) >> Width;
		cout << "[Input-> Breadth]: ";
		getline(cin, sDim);
		stringstream(sDim) >> Breadth;
		Area = Breadth * Width;
		cout << '\n';// Base code for rectangle

		out << "Enter the Width and Breadth of the Rectangle:" << endl;
		out << "[Input-> Width]: ";
		out << Width << endl;
		out << "[Input-> Breadth]: ";
		out << Breadth << endl;
		out << '\n';//[MC] rectangle

		if (Units == "units")
		{
			cout << "The unit of measurement being used is: " << endl;
			cout << "[Input-> Units]: ";
			getline (cin, Units);

			out << "The unit of measurement being used is: " << endl;
			out << "[Input-> Units]: ";
			out << Units << endl;//[MC]
		}
		else
		{
			goto output;
		}// Decides UNITS if set through options or manual (*should function as through options only, and reset through manual for next calculation*)
		
	}// ShapeID == 2 (rectangle)

	else if (ShapeID == "4" || ShapeID == "square" || ShapeID == "Square" || ShapeID == "SQUARE" || ShapeID == "four" || ShapeID == "Four" || ShapeID == "FOUR")
	{
		ShapeName = "Square";

		cout << "Enter the length of the Side of the Square:" << endl;
		cout << "[Input-> Side]: ";
		getline(cin, sDim);
		stringstream(sDim) >> Side;
		Area = Side * Side;
		cout << '\n'; // Base code for square

		out << "Enter the length of the side of the Square:" << endl;
		out << "[Input-> Side]: ";
		out << Side << endl;
		out << '\n';//[MC] square

		if (Units == "units")
		{
			cout << "The unit of measurement being used is: " << endl;
			cout << "[Input-> Units]: ";
			getline (cin, Units);

			out << "The unit of measurement being used is: " << endl;
			out << "[Input-> Units]: ";
			out << Units << endl;//[MC]
		}
		else
		{
			goto output;
		}// Decides UNITS if set through options or manual (*should function as through options only, and reset through manual for next calculation*)

	}// ShapeID == 4 (square)

	else if (ShapeID == "1" || ShapeID == "circle" || ShapeID == "Circle" || ShapeID == "CIRCLE" || ShapeID == "one" || ShapeID == "One" || ShapeID == "ONE")
	{
		ShapeName = "Circle";

		if (diamID == "ON")
		{
			cout << "Enter the length of the Diameter of your Circle:" << endl;
			cout << "[Input-> Diameter]: ";
			getline (cin, sDim);
			stringstream(sDim) >> Diameter;
			Radius = Diameter / 2;

			out << "Enter the length of the diameter of your Circle:" << endl;
			out << "[Input-> Diameter]: ";
			out << Diameter << endl;
			out << '\n';//[MC] cirlce dia

			goto resumeCirc;

		}// diamID == ON (Diameter mode ON - set through options)

		else if (diamID == "OFF")
		{
			cout << "Enter the length of the Radius of your Circle:" << endl;
			cout << "[Input-> Radius]: ";
			getline(cin,sDim);
			stringstream(sDim) >> Radius;
			
			resumeCirc:
			Area = PI * Radius * Radius;
			cout << '\n';  

			if (diamID != "ON")
			{
				out << "Enter the length of the radius of your Circle:" << endl;
				out << "[Input-> Radius]: ";
				out << Radius << endl;
				out << '\n';
			}//[MC] circle dia - Run radius memory code only if Diameter mode is OFF
			
		}// diamID == OFF (Diameter mode OFF - set through options)

		if (Units == "units")
		{
			cout << "The unit of measurement being used is: " << endl;
			cout << "[Input-> Units]: ";
			getline(cin, Units);

			out << "The unit of measurement being used is: " << endl;
			out << "[Input-> Units]: ";
			out << Units << endl;//[MC]
		}
		else
		{
			goto output;
		}// Decides UNITS if set through options or manual (*should function as through options only, and reset through manual for next calculation*)
		
	}// ShapeID == 1 (circle)

	else if (ShapeID == "3" || ShapeID == "triangle" || ShapeID == "Triangle" || ShapeID == "TRIANGLE" || ShapeID == "three" || ShapeID == "Three" || ShapeID == "THREE")
	{
		ShapeName = "Triangle";

		cout << "Enter the Base and Height of the Triangle:" << endl;
		cout << "[Input-> Base]: ";
		getline(cin, sDim);
		stringstream(sDim) >> Base;
		cout << "[Input-> Height]: ";
		getline(cin, sDim);
		stringstream(sDim) >> Height;
		Area = 0.5 * Height * Base;
		cout << '\n';// Base code for triangle

		out << "Enter the Base and Height of the Triangle:" << endl;
		out << "[Input-> Base]: ";
		out << Base << endl;
		out << "[Input-> Height]: ";
		out << Height << endl;
		out << '\n';//[MC] triangle

		if (Units == "units")
		{
			cout << "The unit of measurement being used is: " << endl;
			cout << "[Input-> Units]: ";
			getline(cin, Units);

			out << "The unit of measurement being used is: " << endl;
			out << "[Input-> Units]: ";
			out << Units << endl;//[MC]
		}
		else
		{
			goto output;
		}// Decides UNITS if set through options or manual

	}// ShapeID == 3 (triangle)

	else if (ShapeID == "5")
	{
		cout << "Enter the Number of Sides and Length of Side of the Regular Polygon:" << endl;
		cout << "[Input-> No. of Sides]: ";
		getline(cin, sDim);
		stringstream(sDim) >> NumSides;
		ShapeName = PolyNamer(NumSides);
		cout << "[Input-> Side]: ";
		getline(cin, sDim);
		stringstream(sDim) >> PolySide;
		Area = PolyArea(PolySide, NumSides);
		cout << '\n';// Base code for polygon

		out << "Enter the Number of Sides and Length of Side of the Regular Polygon:" << endl;
		out << "[Input-> No. of Sides]: ";
		out << NumSides << endl;
		out << "[Input-> Side]: ";
		out << PolySide << endl;
		out << '\n';//[MC] polygon

		if (Units == "units")
		{
			cout << "The unit of measurement being used is: " << endl;
			cout << "[Input-> Units]: ";
			getline(cin, Units);

			out << "The unit of measurement being used is: " << endl;
			out << "[Input-> Units]: ";
			out << Units << endl;//[MC]
		}
		else
		{
			goto output;
		}// Decides UNITS if set through options or manual

	}// ShapeID == 5 (regular polygon)

	else if (ShapeID == "help" || ShapeID == "Help" || ShapeID == "HELP")
	{
		Mode = "Help";
		system("CLS");

		out << "_______________________________________________________________________________ " << endl;
		out << " >>> Went to [Help] Mode >>>" << endl;
		out << "_______________________________________________________________________________ " << endl;
		out << " <<< Back from [Help] Mode <<<" << endl;
		out << '\n';
		out << '\n';//[MC] help

		help:
		cout << '\n';  
		cout << "__________________________________[HELP]________________________________________ " << endl;
		cout << '\n';  
		cout << "What would you like help with?               (Type \"back\" to go back to [Input])" << endl;
		cout << "[1- How to use Areaometer]" << endl;
		cout << "[2- Learn about the authors of Areaometer]" << endl;
		cout << "[3- What is \"options\"?]" << endl;
		cout << "[4- Exiting Areaometer]" << endl;
		cout << '\n';  
		
		backinHelp:
		// Ask for helpID
		cout << '\n';
		cout << "[Input-> Help]: ";
		getline(cin, helpID);
		cout << '\n';

		if (helpID == "1" || helpID == "howto" || helpID == "how" || helpID == "How" || helpID == "Howto" || helpID == "HowTo" || helpID == "HOW" || helpID == "HOWTO" || helpID == "one" || helpID == "One" || helpID == "ONE")
		{
			cout << '\n';  
			cout << "There are 3 simple Steps to using Areaoemter." << endl;
			cout << '\n';  
			cout << "Step 1: In the intial [Input] mode, you may type in \"list\" to gain a list" << endl;
			cout << "        of the of Shape Names or Codes you may require the area for." << endl;
			cout << '\n';
			cout << "        Upon receiving the list, you may enter the corresponding Shape Name" << endl;
			cout << "        or Code." << endl;
			cout << '\n';
			cout << "        For example; entering \"1\" or \"circle\" or \"Circle\" are all" << endl;
			cout << "        acceptable Inputs for Areaometer to recognize the shape." << endl;
			cout << '\n';  
			cout << "        Additionally, \"help\" or \"options\" mode can be accessed by typing" << endl;
			cout << "        in \"help\" or \"Help\" or \"Options\" or \"options\"." << endl;
			cout << '\n';  
			cout << "Once the above is understood, press the Enter key on your keyboard for Step 2." << endl;
			system("pause");
			cout << '\n';//Step 1
			cout << "_______________________________________________________________________________ " << endl;
			cout << "Step 2: Now you are required to type in the meaurements of the shape you chose" << endl;
			cout << "        to find the area of." << endl;
			cout << '\n';  
			cout << "        You will now see the user input header in the form of \"[Input-> Xxxx]:\"" << endl;
			cout << "        where Xxxx indicates the measurement you need to enter." << endl;
			cout << '\n';  
			cout << "        For example; for a rectangle you enter the each of width and breadth." << endl;
			cout << "        Hence, you may see \"[Input-> Width]:\" indicating you need to enter the" << endl;
			cout << "        measurement for Width. Likewise for \"[Input-> Breadth]\"." << endl;
			cout << '\n';  
			cout << "        Press the Enter key after each measuement.(This stores the measurements)" << endl;
			cout << '\n';  
			cout << "N.B. Areaometer itends that only NUMBERS can entered for these measurements." << endl;
			cout << "For example \"24.245\" or \"35\" are acceptable. Text-based inputs are not!" << endl;
			cout << '\n';  
			cout << "WARNING: If non-numbers are entered at this stage, Areaometer will NOT function!" << endl;
			cout << '\n';  
			cout << "Once the above is understood, press the Enter key on your keyboard for Step 3." << endl;
			system("pause");
			cout << '\n';//Step 2
			cout << "_______________________________________________________________________________ " << endl;
			cout << "Step 3: Lastly, enter the units of the measuremets that is being used." << endl;
			cout << '\n';  
			cout << "        For example; the units of measuremt may be in \"meters\" or \"m\"" << endl;
			cout << "        OR, \"centimeters\" or \"cm\" - all of which are acceptable." << endl;
			cout << '\n';  
			cout << "N.B. Areaomenter intends that the user input realistic units for measurements," << endl;
			cout << "     (where other inputs are possible)" << endl;
			cout << '\n';  
			cout << "Once all of the above has been completed, Areaometer will tell you:" << endl;
			cout << " - The name of your chosen shape." << endl;
			cout << " - The area it has computed for your chosen shape." << endl;
			cout << " - The squared units for your measurements." << endl;
			cout << '\n';//Step 3
			cout << '\n';
			cout << "[Help] mode will now retstart. ";
			system("pause");
			system("CLS");
			goto help;
		}// helpID == 1 (info: use)

		else if (helpID == "2" || helpID == "AUTHOR" || helpID == "author" || helpID == "AUTHORS" || helpID == "Author" || helpID == "authors" || helpID == "Authors")
		{
			cout << "" << endl;  
			cout << "This masterpiece has been put together from nothingness by:" << endl;
			cout << "[1-Cory Mohammed]" << endl;
			cout << "[2-Ryan Chin Sang]" << endl;
			cout << '\n';  
			cout << "For more information, enter the corresponding number to your option" << endl;
			
			backininfoID:
			//Ask for infoID
			cout << "[Input-> Help-> About]: ";
			getline (cin, infoID);

			if (infoID == "1" || infoID == "Cory" || infoID == "cory" || infoID == "Mohammed" || infoID == "mohammed" || infoID == "CORY" || infoID == "MOHAMMED" || infoID == "one" || infoID == "One" || infoID == "ONE")
			{
				cout << '\n';
				cout << "Full Name  : Cory Mohammed" << endl; //put full name
				cout << "Student ID#: " << endl; //put std ID #
				cout << "Group      : G1" << endl;
				cout << "Group Role : " << endl; //put Group Role
				cout << '\n';  
				cout << "Cory Mohammed's role in the development of Areaometer is:" << endl;
				cout << " - The code's co-developer and co-implemeter" << endl;
				cout << " - The code's co-Logic and runtime Syntax checker" << endl;
				cout << " - The lead algorithm developer" << endl;
				cout << " - The lead flow chart developer" << endl;
				cout << '\n';  
				//Cory, enter whatever info you want to display about yourself here
				cout << '\n';  
				cout << '\n';
				cout << "[Help] mode will now retstart. ";
				system("pause");
				system("CLS");
				goto help;
			}// infoID == 1 (Cory)

			else if (infoID == "2" || infoID == "Ryan" || infoID == "ryan" || infoID == "Chin" || infoID == "RYAN" || infoID == "chin" || infoID == "CHIN" || infoID == "sang" || infoID == "Sang" || infoID == "SANG" || infoID == "two" || infoID == "Two" || infoID == "TWO")
			{
				cout << '\n';  
				cout << "Full Name  : Ryan Kevin Chin Sang" << endl;
				cout << "Student ID#: 814002510" << endl;
				cout << "Group      : G1" << endl;
				cout << "Group Role : TW (Team Worker)" << endl;
				cout << '\n';  
				cout << "Ryan Chin Sang's role in the development of Areaometer is:" << endl;
				cout << " - The lead code developer and implemeter" << endl;
				cout << " - The code's lead Logic and runtime Syntax checker" << endl;
				cout << " - The co-algorithm developer" << endl;
				cout << " - The co-flow chart developer" << endl;
				cout << '\n';  
				cout << "He is a student of the Univeristy of the West Indies currently studying for a " << endl;
				cout << "BSc. in Computer and Electrical Engineering. Ryan finds joy in playing with" << endl;
				cout << "programming code and often programs in C++ on his android Phone (SGS4m)." << endl;
				cout << '\n';  
				cout << '\n';
				cout << "[Help] mode will now retstart. ";
				system("pause");
				system("CLS");
				goto help;
			}// infoID == 2 (Ryan)

			else
			{
				errorID = "infoID";
				goto error;
			}// infoID error input (error tolerance)

		}// helpID == 2 (info: authors)

		else if (helpID == "3" || helpID == "options" || helpID == "Options" || helpID == "OPTIONS" || helpID == "three" || helpID == "Three" || helpID == "THREE")
		{
			cout << '\n';  
			cout << "\"Options\" can be accessed by typing in \"options\" or \"Options\" in [Input]:" << endl;
			cout << '\n';  
			cout << "You will then see the user Input header as \"[Input-> Options]:\"" << endl;
			cout << '\n';  
			cout << "This mode enables the user to access options of Areaometer which can change" << endl;
			cout << "the way Areaometer can work." << endl;
			cout << '\n';  
			cout << "1- You can make Areaometer use a specified unit of measurement for every" << endl;
			cout << "   calculation that Areometer makes and outputs for you, instead of having" << endl;
			cout << "   to repeatedly enter the units for each new calculation." << endl;
			cout << "   This can be done by typing in \"units\" or \"1\"." << endl;//#1
			cout << '\n';  
			cout << "2- You can make Areaometer change the way it calculates the area of a Circle" << endl;
			cout << "   by setting Areaometer to accept a measurement for Diameter instead of using " << endl;
			cout << "   the Radius of the Circle." << endl;
			cout << "   This can be done by typing in \"diameter\" or \"2\"." << endl;//#2
			cout << '\n';  
			cout << "3- You can make Areaometer reset completely." << endl;
			cout << "   This effectivly completely restarts Areaometer." << endl;
			cout << "   This can be done by typing in \"reset\" or \"3\"." << endl;//#3
			cout << '\n';
			cout << "[Help] mode will now retstart. ";
			system("pause");
			system("CLS");
			goto help;
		}// helpID == 3 (info: options)

		else if (helpID == "4" || helpID == "exiting" || helpID == "EXIT" || helpID == "EXITING" || helpID == "four" || helpID == "Four" || helpID == "FOUR" || helpID == "exit")
		{
			cout << '\n';  
			cout << "You can exit Areaometer in a number of ways!" << endl;
			cout << '\n';  
			cout << "One such way is typing \"exit\" or \"Exit\" when in [Input]: and pressing the Enter key twice" << endl;
			cout << '\n';
			cout << "[Help] mode will now retstart. ";
			system("pause");
			system("CLS");
			goto help;
		}// helpID == 4 (info: exiting)

		else if (helpID == "back" || helpID == "Back" || helpID == "BACK")
		{
			goto mem;
		}// helpID == back [CLS] 

		else
		{
			errorID = "0";
			goto error;
		}// helpID error input [ET]

	}// ShapeID == help [CLS]

	else if (ShapeID == "options" || ShapeID == "option" || ShapeID == "Option" || ShapeID == "OPTIONS" || ShapeID == "OPTION" || ShapeID == "Options")
	{
		Mode = "Options";
		system("CLS");

		out << "_______________________________________________________________________________ " << endl;
		out << " >>> Went to [Options] Mode >>>" << endl;
		out << "_______________________________________________________________________________ " << endl;
		out << " <<< Back from [Options] Mode <<<" << endl;
		out << '\n';
		out << '\n';//[MC] options

		options:
		cout << '\n';  
		cout << "_________________________________[OPTIONS]______________________________________ " << endl;
		cout << '\n';  
		cout << "In this mode you may change:                 (Type \"back\" to go back to [Input])" << endl;
		cout << "[1 - Change the SI units of measuremets in Areaometer]";
		if (Units == "units")
		{
			cout << "  [-Default-]" << endl;
		}// Units = initialized value
		else
		{
			cout << "  [" << Units << "]" << endl;
		}// Units was changed// Status of Option 1
		cout << "[2 - Calculate the Area of Circle using Diameter]";
		if (diamID == "OFF")
		{ 
			cout << "       [OFF]" << endl;
		}// OFF
		else if (diamID == "ON")
		{
			cout << "       [ON]" << endl;
		}// ON// Status of Option 2
		cout << "[3 - Reload from Memory when going \"back\"]";
		if (ROMmode == "OFF")
		{
			cout << "              [OFF]" << endl;
		}// OFF
		else if (ROMmode == "ON")
		{
			cout << "              [ON]" << endl;
		}// ON// Status of Option 3
		cout << "[4 - Reset or Restart Areaometer]";
		cout << "                       [" << countclear << "]"<< endl;// Status of Option 4
		cout << '\n'; 

		backinOptions:
		cout << '\n';
		cout << "[Input-> Options]: ";
		getline (cin, optionID);
		cout << '\n';

		if (optionID == "1" || optionID == "units" || optionID == "Units" || optionID == "UNITS" || optionID == "one" || optionID == "One" || optionID == "ONE")
		{
			holdUnits = "ON";
			hUnits = Units;
			cout << '\n'; 
			cout << "What Units of measurement would you like to set for Areaometer's calculations?" << endl;
			cout << "[Input-> Options-> Set Units]: ";
			getline(cin, Units);
			cout << '\n';
			cout << "The universal units for Areaometer calculations will be set to \"" << Units << "\"" << endl;
			cout << "Do you accept?" << endl;
			cout << '\n';

			backinunitsID:
			// Ask for unitsID
			cout << "[Accept?]: ";
			getline(cin, unitsID);

			if (unitsID == "yes" || unitsID == "Yes" || unitsID == "y" || unitsID == "Y" || unitsID == "ok" || unitsID == "OK" || unitsID == "YES")
			{
				cout << '\n';
				cout << '\n';
				cout << "The universal units for Areaometer calculations is now set to \"" << Units << "\"" << endl;
				cout << '\n';
				cout << '\n';
				cout << "[Options] mode will now retstart. ";
				system("pause");
				system("CLS");
				goto options;
			}// unitsID == yes

			else if (unitsID == "no" || unitsID == "No" || unitsID == "n" || unitsID == "N" || unitsID == "NO")
			{
				Units = hUnits;
				cout << '\n';
				cout << "Setting Units cancelled! Restarting [Options] mode . . ." << endl;
				cout << '\n';
				system("pause");
				system("CLS");
				goto options;
			}// unitsID == no

			else
			{
				errorID = "unitsID";
				goto error;
			}// unitsID error input [ET]

		}// optionID == 1 (change units)

		else if (optionID == "2" || optionID == "diameter" || optionID == "Diameter" || optionID == "DIAMETER" || optionID == "two" || optionID == "TWO" || optionID == "Two")
		{
			if (diamID == "OFF")
			{
				cout << '\n';
				cout << "Areaometer will turn ON using the diameter to compute the Area of the Circle." << endl;
				cout << "Do you accept?" << endl;
				cout << '\n';
			}// Do this when diamID == OFF

			else if (diamID == "ON")
			{
				cout << '\n';
				cout << "Areaometer will turn OFF using the diameter to compute the Area of the Circle." << endl;
				cout << "Do you accept?" << endl;
				cout << '\n';
			}// Do this when diamID == ON

			backindiaID:
			// Ask for diaID
			cout << "[Input-> Options-> Set Diameter]: ";
			getline (cin, diaID);

			if (diamID == "OFF")
			{
				if (diaID == "yes" || diaID == "Yes" || diaID == "y" || diaID == "Y" || diaID == "ok" || diaID == "OK" || diaID == "YES")
				{
					diamID = "ON";
					cout << '\n';
					cout << "Diameter mode for Circle is now \"ON\"" << endl;
					cout << '\n';
					cout << "[Options] mode will now retstart. ";
					system("pause");
					system("CLS");
					goto options;
				}// diaID == yes for OFF

				else if (diaID == "no" || diaID == "No" || diaID == "n" || diaID == "N" || diaID == "NO")
				{
					cout << '\n';
					cout << "Diameter settings cancelled! Restarting [Options] mode . . ." << endl;
					cout << '\n';
					system("pause");
					system("CLS");
					goto options;
				}// diaID == no for OFF

				else
				{
					errorID = "diaID";
					goto error;
				}// diaID error input [ET]
			}// Do this when diamID == OFF

			else if (diamID == "ON")
			{
				if (diaID == "yes" || diaID == "Yes" || diaID == "y" || diaID == "Y" || diaID == "ok" || diaID == "OK" || diaID == "YES")
				{
					diamID = "OFF";
					cout << '\n';
					cout << "Diameter mode for Circle is now \"OFF\"" << endl;
					cout << '\n';
					cout << "[Options] mode will now retstart. ";
					system("pause");
					system("CLS");
					goto options;
				}// diaID == yes for ON

				else if (diaID == "no" || diaID == "No" || diaID == "n" || diaID == "N" || diaID == "NO")
				{
					cout << '\n';
					cout << "Diameter settings cancelled! Restarting [Options] mode . . ." << endl;
					cout << '\n';
					system("pause");
					system("CLS");
					goto options;
				}// diaID == no for ON

				else
				{
					errorID = "diaID";
					goto error;
				}// diaID error input [ET]
			}// Do this when diamID == ON

		}// optionID == 2 (diameter)

		else if (optionID == "4" || optionID == "reset" || optionID == "Reset" || optionID == "restart" || optionID == "Restart" || optionID == "RESTART" || optionID == "four" || optionID == "Four" || optionID == "FOUR")
		{
			cout << '\n'; 
			cout << "All of your settings will be reset!" << endl;
			cout << "Are you sure you want to Reset and Restart Areaometer?" << endl;
			cout << '\n';

			backinclearID:
			// Ask for clearID
			cout << "[Input-> Options-> Reset]: ";
			getline (cin, clearID);

			if (clearID == "yes" || clearID == "Yes" || clearID == "y" || clearID == "Y" || clearID == "ok" || clearID == "OK" || clearID == "YES")
			{
				system("CLS");
				++countclear;
				goto reset;
			}// clearID == yes

			else if (clearID == "no" || clearID == "No" || clearID == "n" || clearID == "N" || clearID == "NO")
			{
				cout << '\n'; 
				cout << "Clear screen cancelled! Restarting [Options] mode . . ." << endl;
				cout << '\n';
				system("pause");
				system("CLS");
				goto options;
			}// clearID == no

			else
			{
				errorID = "clearID";
				goto error;
			}// clearID error input [ET]

		}// optionID == 4 (reset and restart)

		else if (optionID == "3" || optionID == "three" || optionID == "Three" || optionID == "THREE")
		{
			if (ROMmode == "OFF")
			{
				cout << '\n';
				cout << "Areaometer will turn ON loading from Memory." << endl;
				cout << "Do you accept?" << endl;
				cout << '\n';
			}// Do this when ROMmode == OFF

			else if (ROMmode == "ON")
			{
				cout << '\n';
				cout << "Areaometer will turn OFF loading from Memory." << endl;
				cout << "Do you accept?" << endl;
				cout << '\n';
			}// Do this when ROMmode == ON

			backinromID:
			// Ask for romID
			cout << "[Input-> Options-> Load ROM]: ";
			getline(cin, romID);

			if (ROMmode == "OFF")
			{
				if (romID == "yes" || romID == "Yes" || romID == "y" || romID == "Y" || romID == "ok" || romID == "OK" || romID == "YES")
				{
					ROMmode = "ON";
					cout << '\n';
					cout << "ROM mode is now \"ON\"" << endl;
					cout << '\n';
					cout << "[Options] mode will now retstart. ";
					system("pause");
					system("CLS");
					goto options;
				}// romID == yes for OFF

				else if (romID == "no" || romID == "No" || romID == "n" || romID == "N" || romID == "NO")
				{
					cout << '\n';
					cout << "ROM settings cancelled! Restarting [Options] mode . . ." << endl;
					cout << '\n';
					system("pause");
					system("CLS");
					goto options;
				}// romID == no for OFF

				else
				{
					errorID = "romID";
					goto error;
				}// romID error input [ET]
			}// Do this when ROMmode == OFF

			else if (ROMmode == "ON")
			{
				if (romID == "yes" || romID == "Yes" || romID == "y" || romID == "Y" || romID == "ok" || romID == "OK" || romID == "YES")
				{
					ROMmode = "OFF";
					cout << '\n';
					cout << "ROM mode is now \"OFF\"" << endl;
					cout << '\n';
					cout << "[Options] mode will now retstart. ";
					system("pause");
					system("CLS");
					goto options;
				}// diaID == yes for ON

				else if (romID == "no" || romID == "No" || romID == "n" || romID == "N" || romID == "NO")
				{
					cout << '\n';
					cout << "ROM settings cancelled! Restarting [Options] mode . . ." << endl;
					cout << '\n';
					system("pause");
					system("CLS");
					goto options;
				}// diaID == no for ON

				else
				{
					errorID = "romID";
					goto error;
				}// diaID error input [ET]
			}// Do this when ROMmode == ON

		}// optionID == 3 (load from ROM)

		else if (optionID == "back" || optionID == "Back" || optionID == "BACK")
		{
			mem:
			system("CLS");
			Memory();			
			goto start;
		}// optionID == back [CLS] 

		else
		{
			errorID = "0";
			goto error;
		}// optionID error input [ET]

	}// ShapeID == options [CLS]

	else if (ShapeID == "exit" || ShapeID == "Exit" || ShapeID == "EXIT")
	{
		goto end;
	}// ShapeID == exit

	else if (ShapeID == "back" || ShapeID == "Back" || ShapeID == "restart" || ShapeID == "Restart" || ShapeID == "reset" || ShapeID == "Reset" || ShapeID == "RESET" || ShapeID == "RESTART" || ShapeID == "BACK")
	{
		errorID = "1";
		goto error;
	}// ShapeID == back

	else if (ShapeID == "list" || ShapeID == "List" || ShapeID == "LIST")
	{ 
		cout << '\n';
		cout << "                [Shape Code: 1]  Circle                                       " << endl;
		cout << "                [Shape Code: 2]  Rectangle                                    " << endl;
		cout << "                [Shape Code: 3]  Triangle                                     " << endl;
		cout << "                [Shape Code: 4]  Square                                       " << endl;
		cout << "                [Shape Code: 5]  Regular Polygon of \"n\" Sides               " << endl;
		cout << '\n';

		out << '\n';
		out << "                [Shape Code: 1]  Circle                                       " << endl;
		out << "                [Shape Code: 2]  Rectangle                                    " << endl;
		out << "                [Shape Code: 3]  Triangle                                     " << endl;
		out << "                [Shape Code: 4]  Square                                       " << endl;
		out << "                [Shape Code: 5]  Regular Polygon of \"n\" Sides               " << endl;
		out << '\n';//[MC] list

		goto backinShapeID;
	}// ShapeID == list

	else 
	{
		errorID = "2"; // The errorID for everything else
		
		error:
		// What happens for goto error
		
		if (Mode == "Help")
		{
			if (errorID == "infoID")
			{
				cout << "ERROR: \"" << infoID << "\" is an invalid command. Please state either 'Cory' or 'Ryan'." << endl;
				cout << '\n';
				goto backininfoID;
			}// errorID == infoID

			else
			{
				cout << "ERROR: \"" << helpID << "\" is an invalid command in [" << Mode << "] mode" << endl;
				cout << '\n';
				goto backinHelp;
			}// Invalid input in Options mode[ET]

		}// If error occurs in Help Mode

		else if (Mode == "Options")
		{

			if (errorID == "diaID")
			{
				cout << "ERROR: \"" << diaID << "\" is an invalid command. Please state either 'yes' or 'no'." << endl;
				cout << '\n';
				goto backindiaID;
			}// errorID == diaID

			else if (errorID == "clearID")
			{
				cout << "ERROR: \"" << clearID << "\" is an invalid command. Please state either 'yes' or 'no'." << endl;
				cout << '\n';
				goto backinclearID;
			}// errorID == clearID

			else if (errorID == "unitsID")
			{
				cout << "ERROR: \"" << unitsID << "\" is an invalid command. Please state either 'yes' or 'no'." << endl;
				cout << '\n';
				goto backinunitsID;
			}// errorID == unitsID

			if (errorID == "romID")
			{
				cout << "ERROR: \"" << romID << "\" is an invalid command. Please state either 'yes' or 'no'." << endl;
				cout << '\n';
				goto backinromID;
			}// errorID == romID

			else
			{
				cout << "ERROR: \"" << optionID << "\" is an invalid command in [" << Mode << "] mode" << endl;
				cout << '\n';
				goto backinOptions;
			}// Invalid input in Options mode [ET]

		}// If error occurs in Options Mode

		else if (Mode == "Input")
		{
			if (errorID == "1")
			{
				cout << "ERROR[" << errorID << "]: \"" << ShapeID << "\" does not run in [Input] mode!" << endl;
				cout << '\n';

				out << "ERROR[" << errorID << "]: \"" << ShapeID << "\" does not run in [Input] mode!" << endl;
				out << '\n';//[MC]

				goto backinShapeID;
			}// errorID == 1 (for ShapeID is back, reset etc)
			
			else if (errorID == "2")
			{
				cout << "ERROR[" << errorID << "]: \"" << ShapeID << "\" is not a valid command!" << endl;
				cout << '\n';

				out << "ERROR[" << errorID << "]: \"" << ShapeID << "\" is not a valid command!" << endl;
				out << '\n';//[MC]

				goto backinShapeID;
			}// errorID == 2 (for other invalid inputs)

		}// If error occurs in Input Mode

	}// ShapeID error or restart [ET] 

	output:
	// When a caluation is finished
	cout << '\n';  
	cout << "The Area of the " << ShapeName << " is " << Area << " " << Units << char(253) << endl;
	cout << '\n';  
	cout << "Would you like to do another calculation?" << endl;
	cout << "[Restart?]: ";
	getline (cin, restartID);

	out << '\n';  
	out << "The Area of the " << ShapeName << " is " << Area << " " << Units << char(253) << endl;
	out << '\n';  
	out << "Would you like to do another calculation?" << endl;
	out << "[Restart?]: ";
	out << restartID << endl;//[MC] output

	if (restartID == "yes" || restartID == "Yes" || restartID == "y" || restartID == "Y" || restartID == "restart" || restartID == "Restart" || restartID == "RESTART" || restartID == "YES")
	{
		cout << "_______________________________________________________________________________ " << endl;
		cout << '\n';  
		cout << '\n';  

		out << "_______________________________________________________________________________ " << endl;
		out << '\n';
		out << '\n';//[MC]

		goto start;
	}// restartID == yes 

	else if (restartID == "no" || restartID == "No" || restartID == "n" || restartID == "N" || restartID == "NO")
	{
		goto end;
	}// restartID == no

	else
	{
		goto error;
	}// restartID is error input [ET]

	end:
	// For exiting
	out.close(); // Close the memory txt file when exiting program
	return 0;

}// END Areaometer




/*
>>> VERSION >>
*Oldest first in dd.mm.yy: VX.xy
**ALWAYS UPDATE VER# IN OP CODE
____________________________________________________________________________________________________________________________________
07.02.15 V1.0 (to 1.2)
-Added text art at the start of program
-Added short description of program under text art with Shape code and options
-Added potential for "help" sequence (commented cout)
-Added necessary var names
-Added necessary decision operations
-Added ShapeName as string
-Added ShapeName so as to have ONE output line read like: "The area of your " << ShapeName << " is " << Area << " " << Units << "^2" << endl;
-[visual] formatted the code
---V1.1 (same date)-----------------------------------------------------------------------------------------------------------------
-Added small error tolerance if the user does not enter either 1, 2, 3 or 4 by the use of goto command
-[visual] used "//" tags to omit code without erasing it
-Changed StringID's variable type from int to string, improving the versatility of the user's input amongst other things
-Added more conditions to decision making code to accept a Shape Code and a string stating the shape's name (eg. "rectangle" is acceptable)
-Added Area initializes to 0 for output decision
-Added condition to ouput the final statement only if Area is not 0, this way, the program would not give an error if initial user input doesnt follow what the code requires
-Fixed version name
---V1.2 (same date)-----------------------------------------------------------------------------------------------------------------
-Repositioned "start:" for goto function so as to not have the text art repeat, incase of "incompatible" user input 
-Repositioned where Area initializes to 0 to accomodate the repositioned "start:"
-Fixed Error message from "... Shape Code" to "... Input"
-Added start1 for goto function, if intial "incompatible" user input
-Fixed version name

____________________________________________________________________________________________________________________________________
08.02.15 V1.3 (to 1.5)
-Added potential for options (commented cout)
-Added helpID as string for implementing help functionality
-Added goto error chain incase ANY input for "help mode" was not recodnized
-Impoved error tolerance by use of goto functions, as above
-Fixed "...rectangle" to "...Triangle" when ShapeID = 4
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

____________________________________________________________________________________________________________________________________
10.02.15 V1.6
-[visual] Replaced all std::xxx code using the shortcut; cin cout and endl work without "std::" tag
-Fixed various small grammatical/spelling errors
-Added all capital letters for all varIDs for increased versitility of calling funtions
-Added all verbal pronounciation for numbered options, with capitals, increased versitility in calling functions
-[visual] Sectioning off of each mode in runtime text
-Added clear screen funtion in options
-Added clearID as string to accommodate clear screen function
-Added a list funtion to relist the Shape names and codes without completely resetting the program with logo
-Added listID as string to accommodate the above funtion
-Added primitive SystemCLS functionality - need some sort of memory code (commented cout)
-Fixed version name

____________________________________________________________________________________________________________________________________
18.02.15 V1.7
-[visual] Strategically and structurefully sectioned (hide) bulk decision code, makes code MUCH easier to look at
-[visual] Applied proper tags as comments for sectioning (error tolerance) **HAS CLS IMP** (restart  are all tags
-[visual] Replaced all cout << " " << endl; with cout << '\n'; - less code to look at
-[visual] Also sectioned version history
-Small changes in runtime text (error tolerant message ShapeID)
-Fixed version name

____________________________________________________________________________________________________________________________________
19.02.15 V1.8a
1-Implement getline (cin, Xxxx) where Xxxx is var name. This is a much more effective way of collecting input.
2-Replaced all cin << with getline(cin, 
#1&2 fixes [old]TODO#6 completely ("6-Add message that indicates the program needs to flush memory (eg. when "how to" is entered instead of "howto" in [Input-> Help]")
3-Implement stringstream with <sstream> to allow for the above to be properly implemented when entering a dimension for the shape (int -> stringstream(sDim) )
4-Implementation of above vastly improved error tolerance for TODO#1!! Program does not break if string is intered as a dimension fo sDim!!
5-Used a more precise way of variable initialization by defining each as necessary **HAS COMMENTED CODE**
6-Moved PI from its intialization on if ShapeID is circle to beginning of main
7-Numbered and editied TO DO and edited Version Info (wrong change said in V1.1 changelogs)
8-[visual] Begin numbered convention to changes in changelogs (active 19.02.15)
9-Initialized (at start) all dimension float as 0 so as to ensure last valid sDim values per dimension arent used in new calculations if non--number input is given in other calcs 
10-Added a NOTES section after TO DO to keep track of thoughts
11-[visual] Begin new version name convention VX.xy where y is a lower case letter to signify smaller changes (runtime text or comment editing or any [visual] tags)
12-Fixed version name under new convention
13-[visual] Moved TO DO outside of Version Info outline 

____________________________________________________________________________________________________________________________________
23.02.15 V1.8b
1-[visual] Moved all using std:: shortcuts to before main - making it universal
2-VERY primitive memory implementation... just added header and vars
3-Fixed version name under new convention

____________________________________________________________________________________________________________________________________
03.03.15 V1.8c
1-[visual] Removed all duplicates for decisions eg. ShapeID == "1" || ShapeID == "one" -changed to- ShapeID == "1" || "one"
2-[visual] Removed some unuseful commented code
REV1; Reverted 1 because it no longer distinguised the different set of values for the varibale
3-Changed output condition, now Area will show Areas >=0 and <-1, but if Area = -1, it will not output!!
4-Added some of the (primitive) paste to memory code, and made memory file named PrimMem.txt
5-By mistake, had to re-outline all the sectioning of the code, may be changed alittle now....
NULL3; 6 makes 3 null
6-Fixed completely "11-Allow Area to show Area = -1 thorugh calculations, but NOT through any other means." by removing the condition alltogether
7-Implement working, but semi-functional re-paste from memory txt
8-Fixed uneven spacing for ShapeID 2
9-Fixed version name

____________________________________________________________________________________________________________________________________
08.03.15 V1.8d
1-[visual] Removed all "//skip a line" and "// skip a line" comments, to make code look less jumbled
NULL[V1.8c #5]; [V1.8d #2] makes [V1.8c #5] null
2-[visual] Redo the sectioning (don't know why it removed again)
3-Added a tags section, to keep tract of where the relevant code is put, can use Ctrl+F function to find them within main
4-Moved goto resumeCirc to fix NOTES#4 ("4-For memory code, for a circle, when options is changed to diameter, and then calculations flow, the memory code shows (correct values) as if it never changed and still shows radius (should show diameter)")
5-To facilitate 4 properly, added conditional statement to write mem code for radius only if diameter mode is off
6-[visual] Changed various comments throughout the code (wording, spelling, formatting)
7-Changed position of return 0, now it is the very last line in main - as it should be
8-Added mem code restart formatting
9-Removed goto start; for when ShapeID == back et. al.
10-Added mem code for ShapeID == back
11-Added mem code for ShapeID == list
12-Rebuild? Fixed [old]TODO#10 ("10-Fix getline is ambiguous?!")
13-Changed help mode to clear screen
14-Added goto point "mem" for repasting code from PrimMem.txt (used from help to base code in options)
15-Added mem repaste for help mode for helpID == back (just as in options) by using goto mem
16-Added IDcls = Help for help mode, before repaste (although IDcls functionality isn't working yet)
17-Fixed some error in formatting with repasting from memory
18-Added mem code for error: and restart: in ShapeID
19-Added conditionals for those, because its also used in options and in help mode (commented - doest work)
20-Primitive memory implementation sucessfull! {[V1.8b] #2, [V1.8c] #7, [V1.8d] #4,5,8,10to17} Fixed [old]TODO#7&8 completely (see below for quotes)
("7-**SystemCLS mode WILL REQUIRE MEMORY (store in array (all user inputs and resultant calculations), or create a temporary text file to serve as memory)")
("8-***Display the SystemCLS mode memory in some meaningful fashion")
21-Renamed "Version Info:" to ">>> VERSION >>>"
22-Fixed minor mem repaste formatting in #10
23-Removed PUC in both help->back and options->back code
24-[visual] Formatted some more code at the start of main (logo)
25-Fixed version name

____________________________________________________________________________________________________________________________________
12.03.15 V1.8e
1-Removed IDcls conditional from start of code (logo) and placed that "Back from mode" to memory straight with the "Went to mode"
#1 Fixes [old]TODO#9) not completely
("9-*Get conditional above logo working (IDcls functionality)")
2-Refilled infoID == "Xxxx" || infoID == "Xxxy" (from revert on V1.8c)
3-Removed [old] memory code that runs outside of other modes - [CNF] will pick up later on memShapeID related funtionality
4-Added new string variable "Mode" to distinguish which mode is used, to aid with 5
5-Refined error tolerance for when in options and in help mode - you now don't restart anymore on inputing invalid command
6-Removed [old]Options#3 "[3 - Reset or Restart Areaometer]" and combined with [FUC] [old]Options#4 "[4 - Clear Areaometer Screen]"
7-Removed all occurances of 'memShapeID', since 'mode' already serves that functonality
8-Added goto options: to restart options mode if needed
9-Added errorID, and goto backinclearID, backindiaID and backinunits for increased error tolerance and Options feels more like a mode now.
10-Added a check to prompt the user if to accept the change of units in Options mode.
11-Added more CLS implementation in various places in Options mode
12-Much formatting, and error tolerance improvements while in Options Mode. Removed [FUC] and [PUC] tags
13-Changed description of the options in Help mode.
14-Added go to options, backinOptions and backininfoID
15-More formatting in Help mode. Makes Help mode more like a mode now (independance).
16-Fixed version name

____________________________________________________________________________________________________________________________________
14.03.15 V1.8f (BIG UPDATE)
1-Added feature in Options mode to indicate whether diameter mode is ON or OFF
2-Added feature in Options to change Diamter mode OFF or ON
#2 Fixes [old]TODO#11 completely:
("11-*When set to Diameter mode, make Options#2 change to reset to Radius mode.")
3-Added string 'diamID' to facilitate 2, because if diaID was used only, there would have been conflict
4-Added more formatting and a reponsive status stating the configuration of what units Areaometer is currently using.
5-Formatted vaious runtime code for Options Mode
6-Added holdUnits string varible that decides on how Units will be initialized
#6 Fixes [old]TODO#5 completely:
("5-Fix reset when units are set through "start", and is not reset on next run (should be reset on each run unless set in options)")
7-[visual] Formatted and Sectioned code at various points
8-[visual]"Factorized" the variable types
9-Added string hUnits to facilitate #10
10-Fixed logic error with cancelling change in units, let hUnits hold the value of Units
11-Fixed logic error with change in #1 (in Circle diameter in [Input] mode)
REF [V1.8e] Fixes [old]TODO#10 completely: --by never leaving the Mode at all for error input--
("10-Implement means of showing (in memory) error in other mode only, and then output back from that mode")
12-[visual] Reoganised >>> TO DO >>> section so that now TODOs are more version specific
13-[visual] Removed NOTES#1&2 (unuseful)
14-[visual] Added more information to code's comments
15-Removed tags [CLS] {[FUC] - listID} [PUC] from ShapeID = back...et al
16-Fixed [MC] for #16&#17
17-Made List apppear in OP code, instead of listing all of them (imp for TODO#5 - add more shapes)
18-Removed gotos {back and restart}
19-Renamed goto backin to backinShapeID
20-{#15-#19} Smoothened the error tolerance for ShapeID = back or reset etc.
#20 Fixes [old]TODO#9 completely:
("9-Smoothen the error tolerance when in [Input] mode, just as in [Options] and [Help].")
21-Much runtime code formatting - adding more of a uniform "feel" for error handing between modes
22-Added more shapes to list, 5 through 10 are unavailable for now (imp for TODO#5 - add more shapes)
23-Included cmath library, to accomodate calculation of regular polygons
24-Added functions ShapeNamer and PolyArea to acommodate finding the area of the normal polygons
24NULL#22
25-Rutime Code formatting for new feature
26-[visual] sectioned all new code
27-Fixed Areaometer logo with missing "\" signs
28-Fixed most single apostophe in runtime code, with double apostophe quote marks
29-Added MC for new feature
{#23-#29} Fixes [old]TODO#5 completely:
("5-Add more shapes! (Pentagon, Hexagon, Septagon, Octagon, Nonagon, Decagon etc...)")
30-Fixed version name

____________________________________________________________________________________________________________________________________
19.03.15 V1.8g (Cleaning code from big update)
1-Removed initializing of functions at start of code; since they are before main anyway
2-Moved ifstream and ofstream vars outside of main - made them universal (in Using.h)
3-Moved functions PolyName and PolyArea into header files (Poly_Name.h and Poly_Area.h respectively)
4-Moved memory code into a function "void Memory()"
5-Removed "using namespace std;" to using std:: for string, ifstream, ofstream and stringstream
6-Moved new Memory function into header file (Memory.h)
7-Created "Using.h" fo keep all the using commands
8-[visual] Put all new header files along with the other #include directives
9-Added include guards for all functions
10-Changed "^2" to "²" in output for the answer of the calculation (syntax char(253))
11-Made change#10 in MC also
12-Fix small unformatted runtime MC code
13-Moved unintialized var types and names in main() into Using.h
14-[visual] Corrected and added some code for the above implementations
15-Renamed int j to int count in Memory.h
16-Added a count to the number of times reset in through options mode
17-Removed unecessasry initializing of area = 0 in main()
18-Changed some minor logic in memory code
19-Attempted Memory code for ROM (saves all instances of RAM continously in another .txt file [CNF]
20-Refined and updated runtime texts in [Help] mode
21-Fixed version name

____________________________________________________________________________________________________________________________________
23.03.15 V1.8h (RAM and ROM implementation)
1-Added RAM and ROM modules in Memory.h
2-Changed PrimMem.txt into RAM.txt and added ROM.txt for ROM functionality
3-Removed old [CNF] code in Memory.h
4-Added Notes commented section and using std::ios in Using.h
5-Added a void function MemClear within Using.h to clear ROM everytime - may move if necessary
6-Added the functionality to options mode, moved options #3 to #4 hence ROM mode is option 3
7-Added clearing RAM.txt also in MemClear function
8-Remove [CNF] for sucessful ROM implementation
9-MemClear function moved into hear file Mem_Clear.h
10-Added the clearning of RAM and ROM when reset is activated through options mode
#10 Fixes [old]TODO#8 completely
("8-Fix memory doesn't reset (or clear) with Areaometer reset option.")
11-Fixed version name

____________________________________________________________________________________________________________________________________



>>> TAGS >>>
[MC]  = Memory Code; the code that is being wrtten to PrimMem.txt
[PUC] = Potential Unnecessary Code; lines of code that are "commented-off" for some reason
[FUC] = Future Unnecessary Code; lines of code (or section of) that may be useless because of some future idea or implementation
[ET]  = Error Tolerance; the code that tolerates wrong input
[CNF] = Code Needs Fixing; code that needs fixing may or may not be commented, and is likely due to logic errors

>>> TO DO >>>

[V1.8]   [[Memory implemetation phase and added functionality]]
1-Add improved error tolerance (eg. report error and force re-enter if sDim is a string)
2-Make some sort of realistic units library for #3
3-Force the user to enter only "m" or "cm" (report error and force re-enter if Units does not obey standard set of Units library)
4-*Use SystemCLS to make interface much cleaner and program-like
5-Clean all unuseful commented code [PUC] and [FUC]
6-Fix all [CNF]
7-Add "back" functionality for all sub prompts
8-Add "history" funtion - so not loading to ROM, but keeps track of everything in [Input]

[V1.9]   [[Colour implementation phase and addded funtionality]]
1-Add colour
2-Add sound for error

[AIM] Version 2.0 to have memory, colour, (error)sound and much functionality!
[V1.8] - Memory implemetation phase and added functionality
[V1.9] - Colour and sound implementation phase, more added funtionality
[V2.0] - Success of all the above (once V1.9y chain is done)

>>> NOTES >>>

1-For memory code, if the user enters a string for sDim, since outfile uses the integer from stringstream, it does not recognize the string
*/