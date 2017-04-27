#include <iostream>
#include <string>
using namespace std;

int main()
{
	int ShapeID, errorID;
	float Width, Breadth, Side, Radius, Height, Base, Area, PI;
	string Units, ShapeName;

	std::cout << "    ___                                         __           " << std::endl;
	std::cout << "   /   |  ________  ____  ____  ____ ___  ___  / /____  _____" << std::endl;
	std::cout << "  / /| | / ___/ _ `/ __ `/ __ `/ __ `__ `/ _ `/ __/ _ `/ ___/" << std::endl;
	std::cout << " / ___ |/ /  /  __/ /_/ / /_/ / / / / / /  __/ /_/  __/ /    " << std::endl;
	std::cout << "/_/  |_/_/   `___/`__,_/`____/_/ /_/ /_/`___/`__/`___/_/     " << std::endl;
	std::cout << "                                                            V1.0" << std::endl;
	std::cout << "     This program finds the Area of different Shapes         " << std::endl;
	std::cout << "              [Shape Code: 1]  Rectangle                     " << std::endl;
	std::cout << "              [Shape Code: 2]  Square                        " << std::endl;
	std::cout << "              [Shape Code: 3]  Circle                        " << std::endl;
	std::cout << "              [Shape Code: 4]  Triangle                      " << std::endl;
	std::cout << "                                                             " << std::endl;  //skip a line
	std::cout << "Enter Shape Code: ";
	std::cin >> ShapeID;
	std::cout << "                                                             " << std::endl;  //skip a line
	
	if (ShapeID == 1)
	{
		ShapeName = "Rectangle";
		std::cout << "Enter the Width and Breadth of the rectangle:" << std::endl;
		std::cout << "Width = ";
		std::cin >> Width;
		std::cout << "Breadth = ";
		std::cin >> Breadth;
		Area = Breadth * Width;
		std::cout << "The unit of measurement being used is: ";
		std::cin >> Units;
	}
	
	else if (ShapeID == 2)
	{
		ShapeName = "Square";
		std::cout << "Enter the length of the side of the square:" << std::endl;
		std::cout << "Length of Side = ";
		std::cin >> Side;
		Area = Side * Side;
		std::cout << "The unit of measurement being used is: ";
		std::cin >> Units;
	}
	
	else if (ShapeID == 3)
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
	
	else if (ShapeID == 4)
	{
		ShapeName = "Triangle";
		std::cout << "Enter the Base and Height of the rectangle:" << std::endl;
		std::cout << "Base = ";
		std::cin >> Base;
		std::cout << "Height = ";
		std::cin >> Height;
		Area = 0.5 * Height * Base;
		std::cout << "The unit of measurement being used is: ";
		std::cin >> Units;
	}
	
	else
	{
		std::cout << "The program does not recognize that Shape Code" << std::endl;
	}

	std::cout << " " << std::endl;  //skip a line
	std::cout << "The area of the " << ShapeName << " is " << Area << " " << Units << "^2" << std::endl;

	return 0;
}
