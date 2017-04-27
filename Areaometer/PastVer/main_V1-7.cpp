#include <iostream>
#include <string>
using namespace std;

int main()
{
	reset:
	// All the VAR types and names
	float Width, Breadth, Side, Radius, Height, Base, Area, PI, Diameter;
	string Units, ShapeName, ShapeID, helpID, infoID, optionID, restartID, diaID, clearID, listID;
	using std::cout;
	using std::cin;
	using std::endl;

	Units = "units";

	start:
	Area = 0;

	// Logo and shapes print
	cout << "             ___                                         __                   " << endl;
	cout << "            /   |  ________  ____  ____  ____ ___  ___  / /____  _____        " << endl;
	cout << "           / /| | / ___/ _ `/ __ `/ __ `/ __ `__ `/ _ `/ __/ _ `/ ___/        " << endl;
	cout << "          / ___ |/ /  /  __/ /_/ / /_/ / / / / / /  __/ /_/  __/ /            " << endl;
	cout << "         /_/  |_/_/   `___/`__,_/`____/_/ /_/ /_/`___/`__/`___/_/             " << endl;
	cout << "                                                                      V1.7    " << endl;
	cout << "               This program finds the Area of different Shapes                " << endl;
	cout << "                          [Shape Code: 1]  Rectangle                          " << endl;
	cout << "                          [Shape Code: 2]  Square                             " << endl;
	cout << "                          [Shape Code: 3]  Circle                             " << endl;
	cout << "                          [Shape Code: 4]  Triangle                           " << endl;

	back:
	// Things to show for 'back' command
	cout << "                     Type 'help' for further information                      " << endl;
    cout << "                     Type 'options' for further functions                     " << endl;
	if (listID == "1")
	{
		listID = "0";
		cout << "                     Type 'list' for Shape Codes or Names                     " << endl;
	}// LIST option shows ONLY if another mode is accessed and user would practically require the list of shapes again
	cout << "            You may also input a Shape Code or the name of the shape          " << endl;

	backin:
	// Ask for ShapeID
	cout << '\n';  //skip a line
	cout << "[Input]: ";
	cin >> ShapeID;
	cout << '\n';  //skip a line

	if (ShapeID == "1" || ShapeID == "rectangle" || ShapeID == "Rectangle" || ShapeID == "RECTANGLE" || ShapeID == "one" || ShapeID == "One" || ShapeID == "ONE")
	{
		ShapeName = "Rectangle";
		cout << "Enter the Width and Breadth of the Rectangle:" << endl;
		cout << "[Input-> Width]: ";
		cin >> Width;
		cout << "[Input-> Breadth]: ";
		cin >> Breadth;
		Area = Breadth * Width;
		cout << '\n';  //skip a line

		if (Units == "units")
		{
			cout << "The unit of measurement being used is: " << endl;
			cout << "[Input-> Units]: ";
			cin >> Units;
		}
		else
		{
			goto output;
		}//Decides UNITS if set through options or manual (*should function as through options only, and reset through manual for next calculation*)
		
	}// ShapeID == 1 (rectangle)

	else if (ShapeID == "2" || ShapeID == "square" || ShapeID == "Square" || ShapeID == "SQUARE" || ShapeID == "two" || ShapeID == "Two" || ShapeID == "TWO")
	{
		ShapeName = "Square";
		cout << "Enter the length of the side of the Square:" << endl;
		cout << "[Input-> Side]: ";
		cin >> Side;
		Area = Side * Side;
		cout << '\n';  //skip a line

		if (Units == "units")
		{
			cout << "The unit of measurement being used is: " << endl;
			cout << "[Input-> Units]: ";
			cin >> Units;
		}
		else
		{
			goto output;
		}//Decides UNITS if set through options or manual (*should function as through options only, and reset through manual for next calculation*)
	}// ShapeID == 2 (square)

	else if (ShapeID == "3" || ShapeID == "circle" || ShapeID == "Circle" || ShapeID == "CIRCLE" || ShapeID == "three" || ShapeID == "Three" || ShapeID == "THREE")
	{
		ShapeName = "Circle";
		PI = 3.1415926536;

		if (diaID == "0")
		{
			cout << "Enter the length of the diameter of your Circle:" << endl;
			cout << "[Input-> Diameter]: ";
			cin >> Diameter;
			Radius = Diameter / 2;
			goto resumeCirc;
		}// diaID == 0 (Diameter mode ON - set through options)

		else
		{
			cout << "Enter the length of the radius of your Circle:" << endl;
			cout << "[Input-> Radius]: ";
			cin >> Radius;
			resumeCirc:
			Area = PI * Radius * Radius;
			cout << '\n';  //skip a line
		}// diaID == deault (Diameter mode OFF)

		if (Units == "units")
		{
			cout << "The unit of measurement being used is: " << endl;
			cout << "[Input-> Units]: ";
			cin >> Units;
		}
		else
		{
			goto output;
		}//Decides UNITS if set through options or manual (*should function as through options only, and reset through manual for next calculation*)
		
	}// ShapeID == 3 (circle)

	else if (ShapeID == "4" || ShapeID == "triangle" || ShapeID == "Triangle" || ShapeID == "TRIANGLE" || ShapeID == "four" || ShapeID == "Four" || ShapeID == "FOUR")
	{
		ShapeName = "Triangle";
		cout << "Enter the Base and Height of the Triangle:" << endl;
		cout << "[Input-> Base]: ";
		cin >> Base;
		cout << "[Input-> Height]: ";
		cin >> Height;
		Area = 0.5 * Height * Base;
		cout << '\n';  //skip a line

		if (Units == "units")
		{
			cout << "The unit of measurement being used is: " << endl;
			cout << "[Input-> Units]: ";
			cin >> Units;
		}
		else
		{
			goto output;
		}//Decides UNITS if set through options or manual (*should function as through options only, and reset through manual for next calculation*)

	}// ShapeID == 4 (triangle)

	else if (ShapeID == "help" || ShapeID == "Help" || ShapeID == "HELP" )
	{
//		system("CLS");
		cout << '\n';  //skip a line
		cout << "__________________________________[HELP]________________________________________ " << endl;
		cout << '\n';  //skip a line
		cout << "What would you like help with?               (Type 'back' to go back to [Input])" << endl;
		cout << "[1- How to use Areaometer]" << endl;
		cout << "[2- Learn about the authors of Areaometer]" << endl;
		cout << "[3- What is 'options'?]" << endl;
		cout << "[4- Exiting Areaometer]" << endl;
		cout << '\n';  //skip a line
		cout << "You may enter the corresponding number to your option" << endl;
		cout << "[Input-> Help]: ";
		cin >> helpID;

		if (helpID == "1" || helpID == "howto" || helpID == "how" || helpID == "How" || helpID == "Howto" || helpID == "HowTo" || helpID == "HOW" || helpID == "HOWTO" || helpID == "one" || helpID == "One" || helpID == "ONE")
		{
			cout << '\n';  //skip a line
			cout << "There are 3 simple Steps to using Areaoemter." << endl;
			cout << '\n';  //skip a line
			cout << "Step 1: In the intial [Input] mode, you may type in a corresponding Shape Code" << endl;
			cout << "        or the name of the shape you require the area for." << endl;
			cout << '\n';  //skip a line
			cout << "        For example; entering '1' or 'rectangle' or 'Rectangle' are all" << endl;
			cout << "        acceptable Inputs for Areaometer to recognize the shape." << endl;
			cout << '\n';  //skip a line
			cout << "        Additionally, 'help' or 'options' mode can be accessed by typing" << endl;
			cout << "        in 'help' or 'Help' or 'Options' or 'options'." << endl;
			cout << '\n';  //skip a line
			cout << "Once the above is understood, press the Enter key on your keyboard for Step 2." << endl;
			system("pause");
			cout << '\n';  //skip a line
			cout << "_______________________________________________________________________________ " << endl;
			cout << "Step 2: Now you are required to type in the meaurements of the shape you chose" << endl;
			cout << "        to find the area of." << endl;
			cout << '\n';  //skip a line
			cout << "        You will now see the user input header in the form of '[Input-> Xxxx]:'" << endl;
			cout << "        where Xxxx indicates the measurement you need to enter." << endl;
			cout << '\n';  //skip a line
			cout << "        For example; for a rectangle you enter the each of width and breadth." << endl;
			cout << "        Hence, you may see '[Input-> Width]:' indicating you need to enter the" << endl;
			cout << "        measurement for Width. Likewise for '[Input-> Breadth]." << endl;
			cout << '\n';  //skip a line
			cout << "        Press the Enter key after each measuement.(This stores the measurements)" << endl;
			cout << '\n';  //skip a line
			cout << "N.B. Areaometer itends that only NUMBERS can entered for these measurements." << endl;
			cout << "For example '24.245' or '35' are acceptable. Text-based inputs are not!" << endl;
			cout << '\n';  //skip a line
			cout << "WARNING: If non-numbers are entered at this stage, Areaometer will NOT function!" << endl;
			cout << '\n';  //skip a line
			cout << "Once the above is understood, press the Enter key on your keyboard for Step 3." << endl;
			system("pause");
			cout << '\n';  //skip a line
			cout << "_______________________________________________________________________________ " << endl;
			cout << "Step 3: Lastly, enter the units of the measuremets that is being used." << endl;
			cout << '\n';  //skip a line
			cout << "        For example; the units of measuremt may be in 'meters' or 'm'" << endl;
			cout << "        OR, 'centimeters' or 'cm' - all of which are acceptable." << endl;
			cout << '\n';  //skip a line
			cout << "N.B. Areaomenter intends that the user input realistic units for measurements," << endl;
			cout << "     (where other inputs are possible)" << endl;
			cout << '\n';  //skip a line
			cout << "Once all of the above has been completed, Areaometer will tell you:" << endl;
			cout << " - The name of your chosen shape." << endl;
			cout << " - The area it has computed for your chosen shape." << endl;
			cout << " - The squared units for your measurements." << endl;
			cout << '\n';  //skip a line
			cout << "Press the Enter key on your keyboard to restart Areaometer." << endl;
			system("pause");
			cout << "_______________________________________________________________________________ " << endl;
			cout << '\n';  //skip a line
			cout << '\n';  //skip a line
			goto start;
		}// helpID == 1 (info: use)

		else if (helpID == "2" || helpID == "AUTHOR" || helpID == "author" || helpID == "AUTHORS" || helpID == "Author" || helpID == "authors" || helpID == "Authors")
		{
			cout << "" << endl;  //skip a line
			cout << "This masterpiece has been put together from nothingness by:" << endl;
			cout << "[1-Cory Mohammed]" << endl;
			cout << "[2-Ryan Chin Sang]" << endl;
			cout << '\n';  //skip a line
			cout << "For more information, enter the corresponding number to your option" << endl;
			cout << "[Input-> Help-> About]: ";
			cin >> infoID;

			if (infoID == "1" || infoID == "Cory" || infoID == "cory" || infoID == "Mohammed" || infoID == "mohammed" || infoID == "CORY" || infoID == "MOHAMMED" || infoID == "one" || infoID == "One" || infoID == "ONE")
			{
				cout << '\n';
				cout << "Full Name  : Cory Mohammed" << endl; //put full name
				cout << "Student ID#: " << endl; //put std ID #
				cout << "Group      : G1" << endl;
				cout << "Group Role : " << endl; //put Group Role
				cout << '\n';  //skip a line
				cout << "Cory Mohammed's role in the development of Areaometer is:" << endl;
				cout << " - The code's co-developer and co-implemeter" << endl;
				cout << " - The code's co-Logic and runtime Syntax checker" << endl;
				cout << " - The lead algorithm developer" << endl;
				cout << " - The lead flow chart developer" << endl;
				cout << '\n';  //skip a line
				//Cory, enter whatever info you want to display about yourself here
				cout << '\n';  //skip a line
				system("pause");
				goto restart;
			}// infoID == 1 (Cory)

			else if (infoID == "2" || infoID == "Ryan" || infoID == "ryan" || infoID == "Chin" || infoID == "RYAN" || infoID == "chin" || infoID == "CHIN" || infoID == "sang" || infoID == "Sang" || infoID == "SANG" || infoID == "two" || infoID == "Two" || infoID == "TWO")
			{
				cout << '\n';  //skip a line
				cout << "Full Name  : Ryan Kevin Chin Sang" << endl;
				cout << "Student ID#: 814002510" << endl;
				cout << "Group      : G1" << endl;
				cout << "Group Role : TW (Team Worker)" << endl;
				cout << '\n';  //skip a line
				cout << "Ryan Chin Sang's role in the development of Areaometer is:" << endl;
				cout << " - The lead code developer and implemeter" << endl;
				cout << " - The code's lead Logic and runtime Syntax checker" << endl;
				cout << " - The co-algorithm developer" << endl;
				cout << " - The co-flow chart developer" << endl;
				cout << '\n';  //skip a line
				cout << "He is a student of the Univeristy of the West Indies currently studying for a " << endl;
				cout << "BSc. in Computer and Electrical Engineering. Ryan finds joy in playing with" << endl;
				cout << "programming code and often programs in C++ on his android Phone (SGS4m)." << endl;
				cout << '\n';  //skip a line
				system("pause");
				goto restart;
			}// infoID == 2 (Ryan)

			else
			{
				goto error;
			}// infoID error input (error tolerance)

		}// helpID == 2 (info: authors)

		else if (helpID == "3" || helpID == "options" || helpID == "Options" || helpID == "OPTIONS" || helpID == "three" || helpID == "Three" || helpID == "THREE")
		{
			cout << '\n';  //skip a line
			cout << "'Options' can be accessed by typing in 'options' or 'Options' in [Input]:" << endl;
			cout << '\n';  //skip a line
			cout << "You will then see the user Input header as '[Input-> Options]:'" << endl;
			cout << '\n';  //skip a line
			cout << "This mode enables the user to access options of Areaometer which can change" << endl;
			cout << "the way Areaometer can work." << endl;
			cout << '\n';  //skip a line
			cout << "1- You can make Areaometer use a specified unit of measurement for every" << endl;
			cout << "   calculation that Areometer makes and outputs for you, instead of having" << endl;
			cout << "   to repeatedly enter the units for each new calculation." << endl;
			cout << "   This can be done by typing in 'units' or '1'" << endl;
			cout << '\n';  //skip a line
			cout << "2- You can make Areaometer change the way it calculates the area of a Circle" << endl;
			cout << "   by setting Areaometer to accept a measurement for Diameter instead of using " << endl;
			cout << "   the Radius of the Circle." << endl;
			cout << "   This can be done by typing in 'diameter' or '2'" << endl;
			cout << '\n';  //skip a line
			cout << "3- You can make Areaometer reset it's memory back to default." << endl;
			cout << "   This can be done by typing in 'reset' or '3'" << endl;
			cout << '\n';  //skip a line
			cout << "4- You can make Areaometer clear all of its previous texts, if the screen is" << endl;
			cout << "   getting too full or long." << endl;
			cout << "   This can be done by typing in 'clear' or '3'" << endl;
			system("pause");
			goto restart;
		}// helpID == 3 (info: options)

		else if (helpID == "4" || helpID == "exiting" || helpID == "EXIT" || helpID == "EXITING" || helpID == "four" || helpID == "Four" || helpID == "FOUR" || helpID == "exit")
		{
			cout << '\n';  //skip a line
			cout << "You can exit Areaometer in a number of ways!" << endl;
			cout << '\n';  //skip a line
			cout << "One such way is typing 'exit' or 'Exit' when in [Input]: and pressing the Enter key twice" << endl;
			cout << '\n';  //skip a line
			system("pause");
			goto restart;
		}// helpID == 4 (info: exiting)

		else if (helpID == "back" || helpID == "Back" || helpID == "BACK")
		{
			listID = "1"; //use when not systemCLS
//			system("CLS");
			cout << '\n';  //skip a line
			cout << "_______________________________________________________________________________ " << endl;
			cout << '\n';  //skip a line
			goto back; //use when not systemCLS
//			goto start;
		}// helpID == back **HAS CLS IMP**

		else
		{
			goto error;
		}// helpID error input (error tolerance)

	}// ShapeID == help **HAS CLS IMP**

	else if (ShapeID == "options" || ShapeID == "option" || ShapeID == "Option" || ShapeID == "OPTIONS" || ShapeID == "OPTION" || ShapeID == "Options")
	{
//		system("CLS");
//		cout << string(30, '\n'); //alternative to above
		cout << '\n';  //skip a line
		cout << "_________________________________[OPTIONS]______________________________________ " << endl;
		cout << '\n';  //skip a line
		cout << "In this mode you may change:                 (Type 'back' to go back to [Input])" << endl;
		cout << "[1 - The universal units for measuremets in Areaometer]" << endl;
		cout << "[2 - Set the Area of the Circle by entering its Diameter]" << endl;
		cout << "[3 - Reset or Restart Areaometer]" << endl;
		cout << "[4 - Clear Areaometer Screen]" << endl;
		cout << '\n'; //skip a line
		cout << "[Input-> Options]: ";
		cin >> optionID;

		if (optionID == "1" || optionID == "units" || optionID == "Units" || optionID == "UNITS" || optionID == "one" || optionID == "One" || optionID == "ONE")
		{
			cout << '\n'; //skip a line
			cout << "What units would you like to set for Areaometer's calculations?" << endl;
			cout << "[Input-> Options-> Units]: ";
			cin >> Units;
			cout << '\n';  //skip a line
			cout << "The universal units for Areaometer calculations is now set to '" << Units << "'" << endl;
			cout << '\n';  //skip a line
			system("pause");
			cout << "_______________________________________________________________________________ " << endl;
			cout << '\n';  //skip a line
			cout << '\n';  //skip a line
			goto start;
		}// optionID == 1 (change units)

		else if (optionID == "2" || optionID == "diameter" || optionID == "Diameter" || optionID == "DIAMETER" || optionID == "two" || optionID == "TWO" || optionID == "Two")
		{
			cout << '\n'; //skip a line
			cout << "Areaometer will now use the diameter to compute the Area of the Circle." << endl;
			cout << '\n'; //skip a line
			cout << "Do you accept?" << endl;
			cout << '\n'; //skip a line
			cout << "[Input-> Options-> Set Diameter]: ";
			cin >> diaID;

			if (diaID == "yes" || diaID == "Yes" || diaID == "y" || diaID == "Y" || diaID == "ok" || diaID == "OK" || diaID == "YES")
				{
					diaID = "0";
					cout << "_______________________________________________________________________________ " << endl;
					cout << '\n';  //skip a line
					cout << '\n';  //skip a line
					goto start;
				}// diaID == yes

			else if (diaID == "no" || diaID == "No" || diaID == "n" || diaID == "N" || diaID == "NO")
			{
				diaID = "1";
				cout << "_______________________________________________________________________________ " << endl;
				cout << '\n';  //skip a line
				cout << '\n';  //skip a line
				goto start;
			}// diaID == no

			else
			{
				goto error;
			}// diaID error input (error tolerance)

		}// optionID == 2 (diameter)

		else if (optionID == "3" || optionID == "reset" || optionID == "Reset" || optionID == "restart" || optionID == "Restart" || optionID == "RESTART" || optionID == "three" || optionID == "Three" || optionID == "THREE")
		{
			cout << "_______________________________________________________________________________ " << endl;
			cout << '\n';  //skip a line
			cout << '\n';  //skip a line
			goto reset;
		}// optionID == 3 (reset)

		else if (optionID == "4" || optionID == "clear" || optionID == "clearall" || optionID == "CLEAR" || optionID == "CLEARALL" || optionID == "Clear" || optionID == "Clearall" || optionID == "ClearAll" || optionID == "four" || optionID == "FOUR" || optionID == "Four")
		{
			cout << '\n'; //skip a line
			cout << "Are you sure you want to CLEAR your screen?" << endl;
			cout << "[Input-> Options-> Clear]: ";
			cin >> clearID;

			if (clearID == "yes" || clearID == "Yes" || clearID == "y" || clearID == "Y" || clearID == "ok" || clearID == "OK" || clearID == "YES")
			{
				system("CLS");
				goto start;
			}// clearID == yes

			else if (clearID == "no" || clearID == "No" || clearID == "n" || clearID == "N" || clearID == "NO")
			{
				cout << '\n'; //skip a line
				cout << "Clear screen cancelled. . ." << endl;
				cout << '\n'; //skip a line
				system("pause");
				cout << "_______________________________________________________________________________ " << endl;
				cout << '\n';  //skip a line
				cout << '\n';  //skip a line
				goto start;
			}// clearID == no

			else
			{
				goto error;
			}// clearID error input (will restart) (error tolerance)

		}// optionID == 4 (clear)

		else if (optionID == "back" || optionID == "Back" || optionID == "BACK")
		{
			listID = "1";
//			system("CLS");
			cout << '\n';  //skip a line
			cout << "_______________________________________________________________________________ " << endl;
			cout << '\n';  //skip a line
			goto back;
//			goto start; //use with systemCLS
		}// optionID == back **HAS CLS IMP**

		else
		{
			goto error;
		}// optionID error input (error tolerance)

	}// ShapeID == options **HAS CLS IMP**

	else if (ShapeID == "exit" || ShapeID == "Exit" || ShapeID == "EXIT")
	{
		goto end;
	}// ShapeID == exit

	else if (ShapeID == "back" || ShapeID == "Back" || ShapeID == "restart" || ShapeID == "Restart" || ShapeID == "reset" || ShapeID == "Reset" || ShapeID == "RESET" || ShapeID == "RESTART" || ShapeID == "BACK")
	{
//		listID = "1"; //use when not systemCLS
		cout << "'" << ShapeID <<"' does not run in this instance" << endl;
		cout << '\n'; // skip a line
		cout << "_______________________________________________________________________________ " << endl;
		cout << '\n'; // skip a line
    	goto back;
		goto start;
	}// ShapeID == back **HAS CLS IMP**

	else if (ShapeID == "list" || ShapeID == "List" || ShapeID == "LIST")
	{
		cout << '\n'; // skip a line
		cout << "                          [Shape Code: 1]  Rectangle                          " << endl;
		cout << "                          [Shape Code: 2]  Square                             " << endl;
		cout << "                          [Shape Code: 3]  Circle                             " << endl;
		cout << "                          [Shape Code: 4]  Triangle                           " << endl;
		cout << '\n'; // skip a line
		goto backin;
	}// ShapeID == list

	else 
	{
		error:
		// What happens for goto error
		cout << "_______________________________________________________________________________ " << endl;
		cout << "Areaometer does not recognize that Input!" << endl;
		cout << "Let's try again . . ." << endl;
		system("pause");

		restart:
		// What happens for goto restart
		cout << "_______________________________________________________________________________ " << endl;
		cout << '\n';  //skip a line
		cout << '\n';  //skip a line
		goto start;

	}// ShapeID error or restart (error tolerance)

	output:
	if (Area != 0)
	{
		cout << '\n';  //skip a line
		cout << "The area of the " << ShapeName << " is " << Area << " " << Units << "^2" << endl;
		cout << '\n';  //skip a line
		cout << "Would you like to do another calculation?" << endl;
		cout << "[Restart?]: ";
		cin >> restartID;

		if (restartID == "yes" || restartID == "Yes" || restartID == "y" || restartID == "Y" || restartID == "restart" || restartID == "Restart" || restartID == "RESTART" || restartID == "YES")
		{
			cout << "_______________________________________________________________________________ " << endl;
			cout << '\n';  //skip a line
			cout << '\n';  //skip a line
			goto start;
		}// restartID == yes 

		else if (restartID == "no" || restartID == "No" || restartID == "n" || restartID == "N" || restartID == "NO")
		{
			goto end;
		}// restartID == no

		else
		{
			goto error;
		}// restartID is error input (will restart anyway..!) (error tolerance)

	}// outputs ONLY if the initialzed Area = 0 is changed

	end:
	return 0;
}// END Areaometer



/*
Version Info:
*Oldest first in dd.mm.yy: VX.x
**ALWAYS UPDATE VER# IN OP CODE
____________________________________________________________________________________________________________________________________
07.02.15: V1.0
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

____________________________________________________________________________________________________________________________________
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
>>> TO DO >>>
-Add improved error tolerance (eg. when someone enters letters instead of numbers for measurements)
-Add sound for error
-Force the user to enter only "m" or "cm", which means report error and restart in loop
-Fix reset when units are set through "start", and is not reset on next run (should be reset on each run unless set in options)
-Add message that indicates the program needs to flush memory (eg. when "how to" is entered instead of "howto" in [Input-> Help]
-*Use SystemCLS to make interface much cleaner and program-like
-**SystemCLS mode WILL REQUIRE MEMORY (store in array (all user inputs and resultant calculations), or create a temporary text file to serve as memory)
-***Displacy the SystemCLS mode memory in some meaningful fashion
*/