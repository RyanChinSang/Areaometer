#include <iostream>
#include <sstream>
#include <fstream>
#include <string>

using namespace std;
using std::cout;
using std::cin;
using std::endl;

int main()
{
	ofstream out;
	ifstream in;

	out.open("PrimMem.txt"); // Write all the following to memory txt file

	reset:
	// All the VAR types and names
	float Width, Breadth, Side, Radius, Height, Base, Diameter;
	string Units, ShapeName, ShapeID, helpID, infoID, optionID, restartID, diaID, clearID, listID, sDim;

	Units = "units";

	start:
	// Initializing {[CNF][PUC] - IDcls, memShapeID}
	float Area = 0;
	float PI = 3.1415926536;
	string IDcls = "0";
//	string memShapeID = "0";
	

	// Logo and instructions {[CNF][PUC] - IDcls}
	
	//if (IDcls == "Options" || IDcls == "Help")
	if ( IDcls !="0")
	{
		out << " <<< Back from [" << IDcls << "] Mode <<<" << endl;
	}//[MC] Saying back from whichever Mode in mem
	cout << "             ___                                         __                   " << endl;
	cout << "            /   |  ________  ____  ____  ____ ___  ___  / /____  _____        " << endl;
	cout << "           / /| | / ___/ _ `/ __ `/ __ `/ __ `__ `/ _ `/ __/ _ `/ ___/        " << endl;
	cout << "          / ___ |/ /  /  __/ /_/ / /_/ / / / / / /  __/ /_/  __/ /            " << endl;
	cout << "         /_/  |_/_/   `___/`__,_/`____/_/ /_/ /_/`___/`__/`___/_/             " << endl;
	cout << "                                                                      V1.8d   " << endl;
	cout << "               This program finds the Area of different Shapes                " << endl;
	cout << "                          [Shape Code: 1]  Rectangle                          " << endl;
	cout << "                          [Shape Code: 2]  Square                             " << endl;
	cout << "                          [Shape Code: 3]  Circle                             " << endl;
	cout << "                          [Shape Code: 4]  Triangle                           " << endl;
	out << "             ___                                         __                   " << endl;
	out << "            /   |  ________  ____  ____  ____ ___  ___  / /____  _____        " << endl;
	out << "           / /| | / ___/ _ `/ __ `/ __ `/ __ `__ `/ _ `/ __/ _ `/ ___/        " << endl;
	out << "          / ___ |/ /  /  __/ /_/ / /_/ / / / / / /  __/ /_/  __/ /            " << endl;
	out << "         /_/  |_/_/   `___/`__,_/`____/_/ /_/ /_/`___/`__/`___/_/             " << endl;
	out << "                                                                      V1.8d   " << endl;
	out << "               This program finds the Area of different Shapes                " << endl;
	out << "                          [Shape Code: 1]  Rectangle                          " << endl;
	out << "                          [Shape Code: 2]  Square                             " << endl;
	out << "                          [Shape Code: 3]  Circle                             " << endl;
	out << "                          [Shape Code: 4]  Triangle                           " << endl;//[MC] logo

	back:
	// Things to show for goto 'back' in Options or Help Mode ONLY {[FUC]- for CLS imp} [PUC]
	cout << "                     Type 'help' for further information                      " << endl;
    cout << "                     Type 'options' for further functions                     " << endl;

	out << "                     Type 'help' for further information                      " << endl;
	out << "                     Type 'options' for further functions                     " << endl;//[MC] back [PUC] back

	if (listID == "1")
	{
		listID = "0";
		cout << "                     Type 'list' for Shape Codes or Names                     " << endl;
		out << "                     Type 'list' for Shape Codes or Names                     " << endl;//[MC] back list
	}// LIST option shows ONLY if another mode is accessed and user would practically require the list of shapes again

	cout << "            You may also input a Shape Code or the name of the shape          " << endl;
	out << "            You may also input a Shape Code or the name of the shape          " << endl;//[MC] back 

	backin:
	// Ask for ShapeID
	cout << '\n';  
	cout << "[Input]: ";
	getline (cin, ShapeID);
	cout << '\n';

	out << '\n';  
	out << "[Input]: ";
	out << ShapeID << endl;
	out << '\n';//[MC] backin

	if (ShapeID == "1" || ShapeID == "rectangle" || ShapeID == "Rectangle" || ShapeID == "RECTANGLE" || ShapeID == "one" || ShapeID == "One" || ShapeID == "ONE")
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
		cout << '\n';

		out << "Enter the Width and Breadth of the Rectangle:" << endl;
		out << "[Input-> Width]: ";
		out << Width << endl;
		out << "[Input-> Breadth]: ";
		out << Breadth << endl;
		out << '\n';//[MC]

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
		}//Decides UNITS if set through options or manual (*should function as through options only, and reset through manual for next calculation*)
		
	}// ShapeID == 1 (rectangle)

	else if (ShapeID == "2" || ShapeID == "square" || ShapeID == "Square" || ShapeID == "SQUARE" || ShapeID == "two" || ShapeID == "Two" || ShapeID == "TWO")
	{
		ShapeName = "Square";
		cout << "Enter the length of the side of the Square:" << endl;
		cout << "[Input-> Side]: ";
		getline(cin, sDim);
		stringstream(sDim) >> Side;
		Area = Side * Side;
		cout << '\n';  

		out << "Enter the length of the side of the Square:" << endl;
		out << "[Input-> Side]: ";
		out << Side << endl;
		out << '\n';//[MC]

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
		}//Decides UNITS if set through options or manual (*should function as through options only, and reset through manual for next calculation*)

	}// ShapeID == 2 (square)

	else if (ShapeID == "3" || ShapeID == "circle" || ShapeID == "Circle" || ShapeID == "CIRCLE" || ShapeID == "three" || ShapeID == "Three" || ShapeID == "THREE")
	{
		ShapeName = "Circle";

		if (diaID == "0")
		{
			cout << "Enter the length of the diameter of your Circle:" << endl;
			cout << "[Input-> Diameter]: ";
			getline (cin, sDim);
			stringstream(sDim) >> Diameter;
			Radius = Diameter / 2;

			out << "Enter the length of the diameter of your Circle:" << endl;
			out << "[Input-> Diameter]: ";
			out << Diameter << endl;
			out << '\n';//[MC]

			goto resumeCirc;

		}// diaID == 0 (Diameter mode ON - set through options)

		else
		{
			cout << "Enter the length of the radius of your Circle:" << endl;
			cout << "[Input-> Radius]: ";
			getline(cin,sDim);
			stringstream(sDim) >> Radius;
			resumeCirc:
			Area = PI * Radius * Radius;
			cout << '\n';  

			if (diaID != "0")
			{
				out << "Enter the length of the radius of your Circle:" << endl;
				out << "[Input-> Radius]: ";
				out << Radius << endl;
				out << '\n';
			}//[MC] - Run radius memory code only if Diameter mode is OFF
			
		}// diaID =! 0 (Diameter mode OFF)

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
		}//Decides UNITS if set through options or manual (*should function as through options only, and reset through manual for next calculation*)
		
	}// ShapeID == 3 (circle)

	else if (ShapeID == "4" || ShapeID == "triangle" || ShapeID == "Triangle" || ShapeID == "TRIANGLE" || ShapeID == "four" || ShapeID == "Four" || ShapeID == "FOUR")
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
		cout << '\n';  

		out << "Enter the Base and Height of the Triangle:" << endl;
		out << "[Input-> Base]: ";
		out << Base << endl;
		out << "[Input-> Height]: ";
		out << Height << endl;
		out << '\n';//[MC]

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
		}//Decides UNITS if set through options or manual (*should function as through options only, and reset through manual for next calculation*)

	}// ShapeID == 4 (triangle)

	else if (ShapeID == "help" || ShapeID == "Help" || ShapeID == "HELP")
	{
		system("CLS");
//		memShapeID = "Help";
		cout << '\n';  
		cout << "__________________________________[HELP]________________________________________ " << endl;
		cout << '\n';  
		cout << "What would you like help with?               (Type 'back' to go back to [Input])" << endl;
		cout << "[1- How to use Areaometer]" << endl;
		cout << "[2- Learn about the authors of Areaometer]" << endl;
		cout << "[3- What is 'options'?]" << endl;
		cout << "[4- Exiting Areaometer]" << endl;
		cout << '\n';  
		cout << "You may enter the corresponding number to your option" << endl;
		cout << "[Input-> Help]: ";
		getline (cin, helpID);

		out << " >>> Went to [Help] Mode >>>" << endl;
		out << '\n';//[MC] help


		if (helpID == "1" || helpID == "howto" || helpID == "how" || helpID == "How" || helpID == "Howto" || helpID == "HowTo" || helpID == "HOW" || helpID == "HOWTO" || helpID == "one" || helpID == "One" || helpID == "ONE")
		{
			cout << '\n';  
			cout << "There are 3 simple Steps to using Areaoemter." << endl;
			cout << '\n';  
			cout << "Step 1: In the intial [Input] mode, you may type in a corresponding Shape Code" << endl;
			cout << "        or the name of the shape you require the area for." << endl;
			cout << '\n';  
			cout << "        For example; entering '1' or 'rectangle' or 'Rectangle' are all" << endl;
			cout << "        acceptable Inputs for Areaometer to recognize the shape." << endl;
			cout << '\n';  
			cout << "        Additionally, 'help' or 'options' mode can be accessed by typing" << endl;
			cout << "        in 'help' or 'Help' or 'Options' or 'options'." << endl;
			cout << '\n';  
			cout << "Once the above is understood, press the Enter key on your keyboard for Step 2." << endl;
			system("pause");
			cout << '\n';//Step 1
			cout << "_______________________________________________________________________________ " << endl;
			cout << "Step 2: Now you are required to type in the meaurements of the shape you chose" << endl;
			cout << "        to find the area of." << endl;
			cout << '\n';  
			cout << "        You will now see the user input header in the form of '[Input-> Xxxx]:'" << endl;
			cout << "        where Xxxx indicates the measurement you need to enter." << endl;
			cout << '\n';  
			cout << "        For example; for a rectangle you enter the each of width and breadth." << endl;
			cout << "        Hence, you may see '[Input-> Width]:' indicating you need to enter the" << endl;
			cout << "        measurement for Width. Likewise for '[Input-> Breadth]." << endl;
			cout << '\n';  
			cout << "        Press the Enter key after each measuement.(This stores the measurements)" << endl;
			cout << '\n';  
			cout << "N.B. Areaometer itends that only NUMBERS can entered for these measurements." << endl;
			cout << "For example '24.245' or '35' are acceptable. Text-based inputs are not!" << endl;
			cout << '\n';  
			cout << "WARNING: If non-numbers are entered at this stage, Areaometer will NOT function!" << endl;
			cout << '\n';  
			cout << "Once the above is understood, press the Enter key on your keyboard for Step 3." << endl;
			system("pause");
			cout << '\n';//Step 2
			cout << "_______________________________________________________________________________ " << endl;
			cout << "Step 3: Lastly, enter the units of the measuremets that is being used." << endl;
			cout << '\n';  
			cout << "        For example; the units of measuremt may be in 'meters' or 'm'" << endl;
			cout << "        OR, 'centimeters' or 'cm' - all of which are acceptable." << endl;
			cout << '\n';  
			cout << "N.B. Areaomenter intends that the user input realistic units for measurements," << endl;
			cout << "     (where other inputs are possible)" << endl;
			cout << '\n';  
			cout << "Once all of the above has been completed, Areaometer will tell you:" << endl;
			cout << " - The name of your chosen shape." << endl;
			cout << " - The area it has computed for your chosen shape." << endl;
			cout << " - The squared units for your measurements." << endl;
			cout << '\n';  
			cout << "Press the Enter key on your keyboard to restart Areaometer." << endl;
			system("pause");//Step 3
			cout << "_______________________________________________________________________________ " << endl;
			cout << '\n';  
			cout << '\n';  
			goto start;
		}// helpID == 1 (info: use)

		else if (helpID == "2" || helpID == "AUTHOR" || helpID == "author" || helpID == "AUTHORS" || helpID == "Author" || helpID == "authors" || helpID == "Authors")
		{
			cout << "" << endl;  
			cout << "This masterpiece has been put together from nothingness by:" << endl;
			cout << "[1-Cory Mohammed]" << endl;
			cout << "[2-Ryan Chin Sang]" << endl;
			cout << '\n';  
			cout << "For more information, enter the corresponding number to your option" << endl;
			cout << "[Input-> Help-> About]: ";
			getline (cin, infoID);

			if (infoID == "1" || "Cory" || "cory" || "Mohammed" || "mohammed" || "CORY" || "MOHAMMED" || "one" || "One" || "ONE")
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
				system("pause");
				goto restart;
			}// infoID == 1 (Cory)

			else if (infoID == "2" || "Ryan" || "ryan" || "Chin" || "RYAN" || "chin" || "CHIN" || "sang" || "Sang" || "SANG" || "two" || "Two" || "TWO")
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
			cout << '\n';  
			cout << "'Options' can be accessed by typing in 'options' or 'Options' in [Input]:" << endl;
			cout << '\n';  
			cout << "You will then see the user Input header as '[Input-> Options]:'" << endl;
			cout << '\n';  
			cout << "This mode enables the user to access options of Areaometer which can change" << endl;
			cout << "the way Areaometer can work." << endl;
			cout << '\n';  
			cout << "1- You can make Areaometer use a specified unit of measurement for every" << endl;
			cout << "   calculation that Areometer makes and outputs for you, instead of having" << endl;
			cout << "   to repeatedly enter the units for each new calculation." << endl;
			cout << "   This can be done by typing in 'units' or '1'" << endl;//#1
			cout << '\n';  
			cout << "2- You can make Areaometer change the way it calculates the area of a Circle" << endl;
			cout << "   by setting Areaometer to accept a measurement for Diameter instead of using " << endl;
			cout << "   the Radius of the Circle." << endl;
			cout << "   This can be done by typing in 'diameter' or '2'" << endl;//#2
			cout << '\n';  
			cout << "3- You can make Areaometer reset it's memory back to default." << endl;
			cout << "   This can be done by typing in 'reset' or '3'" << endl;//#3
			cout << '\n';  
			cout << "4- You can make Areaometer clear all of its previous texts, if the screen is" << endl;
			cout << "   getting too full or long." << endl;
			cout << "   This can be done by typing in 'clear' or '3'" << endl;//#4
			system("pause");
			goto restart;
		}// helpID == 3 (info: options)

		else if (helpID == "4" || helpID == "exiting" || helpID == "EXIT" || helpID == "EXITING" || helpID == "four" || helpID == "Four" || helpID == "FOUR" || helpID == "exit")
		{
			cout << '\n';  
			cout << "You can exit Areaometer in a number of ways!" << endl;
			cout << '\n';  
			cout << "One such way is typing 'exit' or 'Exit' when in [Input]: and pressing the Enter key twice" << endl;
			cout << '\n';  
			system("pause");
			goto restart;
		}// helpID == 4 (info: exiting)

		else if (helpID == "back" || helpID == "Back" || helpID == "BACK")
		{
			out.close();
			IDcls = "Help";
			system("CLS");
			goto mem;
		}// helpID == back [CLS] 

		else
		{
			goto error;
		}// helpID error input [ET]

	}// ShapeID == help [CLS] [FUC] [PUC]

	else if (ShapeID == "options" || ShapeID == "option" || ShapeID == "Option" || ShapeID == "OPTIONS" || ShapeID == "OPTION" || ShapeID == "Options")
	{
		system("CLS");
//		memShapeID = "Options";
		cout << '\n';  
		cout << "_________________________________[OPTIONS]______________________________________ " << endl;
		cout << '\n';  
		cout << "In this mode you may change:                 (Type 'back' to go back to [Input])" << endl;
		cout << "[1 - The universal units for measuremets in Areaometer]" << endl;
		cout << "[2 - Set the Area of the Circle by entering its Diameter]" << endl;
		cout << "[3 - Reset or Restart Areaometer]" << endl;
		cout << "[4 - Clear Areaometer Screen]" << endl;
		cout << '\n'; 
		cout << "[Input-> Options]: ";
		getline (cin, optionID);

		out << " >>> Went to [Options] Mode >>>" << endl;
		out << '\n';//[MC] options

		if (optionID == "1" || optionID == "units" || optionID == "Units" || optionID == "UNITS" || optionID == "one" || optionID == "One" || optionID == "ONE")
		{
			cout << '\n'; 
			cout << "What units would you like to set for Areaometer's calculations?" << endl;
			cout << "[Input-> Options-> Units]: ";
			getline (cin, Units);
			cout << '\n';  
			cout << "The universal units for Areaometer calculations is now set to '" << Units << "'" << endl;
			cout << '\n';  
			system("pause");
			cout << "_______________________________________________________________________________ " << endl;
			cout << '\n';  
			cout << '\n';  
			goto start;
		}// optionID == 1 (change units)

		else if (optionID == "2" || optionID == "diameter" || optionID == "Diameter" || optionID == "DIAMETER" || optionID == "two" || optionID == "TWO" || optionID == "Two")
		{
			cout << '\n'; 
			cout << "Areaometer will now use the diameter to compute the Area of the Circle." << endl;
			cout << '\n'; 
			cout << "Do you accept?" << endl;
			cout << '\n'; 
			cout << "[Input-> Options-> Set Diameter]: ";
			getline (cin, diaID);

			if (diaID == "yes" || diaID == "Yes" || diaID == "y" || diaID == "Y" || diaID == "ok" || diaID == "OK" || diaID == "YES")
				{
					diaID = "0";
					cout << "_______________________________________________________________________________ " << endl;
					cout << '\n';  
					cout << '\n';  
					goto start;
				}// diaID == yes

			else if (diaID == "no" || diaID == "No" || diaID == "n" || diaID == "N" || diaID == "NO")
			{
				diaID = "1";
				cout << "_______________________________________________________________________________ " << endl;
				cout << '\n';  
				cout << '\n';  
				goto start;
			}// diaID == no

			else
			{
				goto error;
			}// diaID error input [ET]

		}// optionID == 2 (diameter)

		else if (optionID == "3" || optionID == "reset" || optionID == "Reset" || optionID == "restart" || optionID == "Restart" || optionID == "RESTART" || optionID == "three" || optionID == "Three" || optionID == "THREE")
		{
			cout << "_______________________________________________________________________________ " << endl;
			cout << '\n';  
			cout << '\n';  
			goto reset;
		}// optionID == 3 (reset)

		else if (optionID == "4" || optionID == "clear" || optionID == "clearall" || optionID == "CLEAR" || optionID == "CLEARALL" || optionID == "Clear" || optionID == "Clearall" || optionID == "ClearAll" || optionID == "four" || optionID == "FOUR" || optionID == "Four")
		{
			cout << '\n'; 
			cout << "Are you sure you want to CLEAR your screen?" << endl;
			cout << "[Input-> Options-> Clear]: ";
			getline (cin, clearID);

			if (clearID == "yes" || clearID == "Yes" || clearID == "y" || clearID == "Y" || clearID == "ok" || clearID == "OK" || clearID == "YES")
			{
				system("CLS");
				goto start;
			}// clearID == yes

			else if (clearID == "no" || clearID == "No" || clearID == "n" || clearID == "N" || clearID == "NO")
			{
				cout << '\n'; 
				cout << "Clear screen cancelled. . ." << endl;
				cout << '\n'; 
				system("pause");
				cout << "_______________________________________________________________________________ " << endl;
				cout << '\n';  
				cout << '\n';  
				goto start;
			}// clearID == no

			else
			{
				goto error;
			}// clearID error input [ET]

		}// optionID == 4 (clear) {[FUC] - CLS provides that anyway (can be changed to clear memory)}

		else if (optionID == "back" || optionID == "Back" || optionID == "BACK")
		{
			out.close();
			IDcls = "Options";
			system("CLS");

			mem:
			// Re-pasting from PrimMem.txt
			int MemLin = 0;
			string Mem[2048];

			in.open("PrimMem.txt");
			while (!in.eof())
			{
				while (getline(in, Mem[MemLin]))
				{
					++MemLin;
				}
			}// Counts the number of lines in the text file AND sets each unique number line to string array Mem
			in.close();

			in.open("PrimMem.txt");
			while (!in.eof())
			{
					for (int j = 0; j < MemLin+1; j++)
				{
					while (getline(in, Mem[j]))
					{
						cout << Mem[j] << endl;
					}// Print all, whole, individual line(s) that are stored in the array
				}// For all the counted lines in PrimMem.txt file
			}// Prints all the lines in PrimMem.txt
			in.close();

			out.open("PrimMem.txt");			
			goto start;
		}// optionID == back [CLS] 

		else
		{
			goto error;
		}// optionID error input [ET]

	}// ShapeID == options [CLS] [FUC] [PUC]

	else if (ShapeID == "exit" || ShapeID == "Exit" || ShapeID == "EXIT")
	{
		goto end;
	}// ShapeID == exit

	else if (ShapeID == "back" || ShapeID == "Back" || ShapeID == "restart" || ShapeID == "Restart" || ShapeID == "reset" || ShapeID == "Reset" || ShapeID == "RESET" || ShapeID == "RESTART" || ShapeID == "BACK")
	{
		listID = "1"; //use when not systemCLS
		cout << "'" << ShapeID <<"' does not run in this instance!" << endl;
		cout << '\n'; 
		cout << "_______________________________________________________________________________ " << endl;
		cout << '\n'; 

		out << "'" << ShapeID << "' does not run in this instance!" << endl;
		out << '\n';
		out << "_______________________________________________________________________________ " << endl;//[MC]

    	goto back;
	}// ShapeID == back [CLS] {[FUC] - listID} [PUC]

	else if (ShapeID == "list" || ShapeID == "List" || ShapeID == "LIST")
	{
		cout << '\n'; 
		cout << "                          [Shape Code: 1]  Rectangle                          " << endl;
		cout << "                          [Shape Code: 2]  Square                             " << endl;
		cout << "                          [Shape Code: 3]  Circle                             " << endl;
		cout << "                          [Shape Code: 4]  Triangle                           " << endl;
		cout << '\n'; 

		out << '\n';
		out << "                          [Shape Code: 1]  Rectangle                          " << endl;
		out << "                          [Shape Code: 2]  Square                             " << endl;
		out << "                          [Shape Code: 3]  Circle                             " << endl;
		out << "                          [Shape Code: 4]  Triangle                           " << endl;
		out << '\n';//[MC]

		goto backin;
	}// ShapeID == list [FUC]

	else 
	{
		error:
		// What happens for goto error
		cout << "_______________________________________________________________________________ " << endl;
		cout << "Areaometer does not recognize that Input!" << endl;
		cout << "Let's try again . . ." << endl;
		
		//if (memShapeID == "Help" || memShapeID == "Options")
//		{
//			goto restart;
//		}
//		else
//		{
			out << "_______________________________________________________________________________ " << endl;
			out << "Areaometer does not recognize that Input!" << endl;
			out << "Let's try again . . ." << endl;
//			goto restart4mem;
//		}//[MC] Only runs outside of other Modes [CNF]

		system("pause");

		restart:
		// What happens for goto restart
		cout << "_______________________________________________________________________________ " << endl;
		cout << '\n';  
		cout << '\n';

//		restart4mem:
//		if (memShapeID == "Help" || memShapeID == "Options")
//		{
//			goto start;
//		}
//		else
//		{
			out << "Press any key to continue . . ." << endl;
			out << "_______________________________________________________________________________ " << endl;
			out << '\n';
			out << '\n';
//			goto start;
//		}//[MC] Only runs outside of other Modes [CNF]

		goto start;

	}// ShapeID error or restart [ET] [CNF]

	output:
	// When a caluation is finished
	cout << '\n';  
	cout << "The area of the " << ShapeName << " is " << Area << " " << Units << "^2" << endl;
	cout << '\n';  
	cout << "Would you like to do another calculation?" << endl;
	cout << "[Restart?]: ";
	getline (cin, restartID);

	out << '\n';  
	out << "The area of the " << ShapeName << " is " << Area << " " << Units << "^2" << endl;
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
	}// restartID is error input [ET] (will restart anyway..!)

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
3-#1&2 fixes [old]TODO#6 completely ("6-Add message that indicates the program needs to flush memory (eg. when "how to" is entered instead of "howto" in [Input-> Help]")
4-Implement stringstream with <sstream> to allow for the above to be properly implemented when entering a dimension for the shape (int -> stringstream(sDim) )
5-Implementation of above vastly improved error tolerance for TODO#1!! Program does not break if string is intered as a dimension fo sDim!!
6-Used a more precise way of variable initialization by defining each as necessary **HAS COMMENTED CODE**
7-Moved PI from its intialization on if ShapeID is circle to beginning of main
8-Numbered and editied TO DO and edited Version Info (wrong change said in V1.1 changelogs)
9-[visual] Begin numbered convention to changes in changelogs (active 19.02.15)
10-Initialized (at start) all dimension float as 0 so as to ensure last valid sDim values per dimension arent used in new calculations if non--number input is given in other calcs 
11-Added a NOTES section after TO DO to keep track of thoughts
12-[visual] Begin new version name convention VX.xy where y is a lower case letter to signify smaller changes (runtime text or comment editing or any [visual] tags)
13-Fixed version name under new convention
14-[visual] Moved TO DO outside of Version Info outline 

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



>>> TAGS >>>
[MC]  = Memory Code; the code that is being wrtten to PrimMem.txt
[PUC] = Potential Unnecessary Code; lines of code that are "commented-off" for some reason
[FUC] = Future Unnecessary Code; lines of code (or section of) that may be useless because of some future idea or implementation
[ET]  = Error Tolerance; the code that tolerates wrong input
[CNF] = Code Needs Fixing; code that needs fixing may or may not be commented, and is likely due to logic errors

>>> TO DO >>>
1-Add improved error tolerance (eg. report error and force re-enter if sDim is a string)
2-Add sound for error
3-Make some sort of realistic units library for #4
4-Force the user to enter only "m" or "cm" (report error and force re-enter if Units does not obey standard set of Units library)
5-Fix reset when units are set through "start", and is not reset on next run (should be reset on each run unless set in options)
6-*Use SystemCLS to make interface much cleaner and program-like
7-Add more shapes! (Pentagon, Hexagon, Septagon, Octagon, Nonagon, Decagon etc...)
8-Clean unuseful commented code
9-*Get conditional above logo working (IDcls functionality)
10-Add colour
11-Fix all [CNF]

[AIM] Version 2.0 to have memory, colour and (error)sound!
[V1.8] - Memory implemetation phase
[V1.9] - Colour implementation phase
[V2.0] - Now, with sound for error!

>>> NOTES >>>
1-Initializing Dimensions as zero in a continuous (separated by commas) list seems to have no effect, but individually initializing DOES [NULLED TEMP]
2-When using indiividual initializing, program closes if string is entered as sDim (means it worked?) [NULLED TEMP]
3-For memory code, if the user enters a string for sDim, since outfile uses the integer from stringstream, it does not recognize the string
4-"goto error" will restart anyway
*/