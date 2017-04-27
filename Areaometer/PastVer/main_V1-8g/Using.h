#ifndef USING_H
#define USING_H

using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::ifstream;
using std::ofstream;
using std::stringstream;

#define PI  3.14159265358979323846264338327950288419716939937510582

ifstream in, inROM;
ofstream out, outROM;
float Width, Breadth, Side, Radius, Height, Base, Diameter, Area, NumSides, PolySide;
string Units, ShapeName, ShapeID, helpID, infoID, optionID, restartID, unitsID, diaID, diamID, clearID, listID, errorID, sDim, Mode, holdUnits, hUnits;
string Mem[2048];
string ROM[4096];
int countROM = 0;
int count = 0;
int countclear = 0;
int MemLin = 0;

#endif /* USING_H */