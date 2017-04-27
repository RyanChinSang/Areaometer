#ifndef USING_H
#define USING_H

/****************************************************************************************************************
NOTES:
1-  hUnits is used for holding an old value of Units, as resetting Units to it, incase of cancel in options mode
	holdUnits is used for ON/OFF for setting units through options

*****************************************************************************************************************/

using std::ios;
using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::ifstream;
using std::ofstream;
using std::stringstream;

#define PI  3.14159265358979323846264338327950288419716939937510582

ifstream in, inR;
ofstream out, outR;
float Width, Breadth, Side, Radius, Height, Base, Diameter, Area, NumSides, PolySide;
string Units, ShapeName, ShapeID, helpID, infoID, optionID, restartID, unitsID, diaID, diamID, clearID, listID, errorID, sDim, Mode, holdUnits, hUnits, hold, ROMmode, romID;
string RAM[2048];
string ROM[4096]; 
int countclear = 0;
int countROM = 0; 
int NumLin = 0;
int count = 0;

#endif /* USING_H */