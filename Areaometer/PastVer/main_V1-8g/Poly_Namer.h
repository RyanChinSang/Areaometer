#ifndef POLY_NAMER_H
#define POLY_NAMER_H

string PolyNamer(float NumSides)
{
	if (NumSides == 3)
	{
		return ("Equilateral Triangle");
	}
	else if (NumSides == 4)
	{
		return ("Square");
	}
	else if (NumSides == 5)
	{
		return ("Pentagon");
	}
	else if (NumSides == 6)
	{
		return ("Hexagon");
	}
	else if (NumSides == 7)
	{
		return ("Heptagon");
	}
	else if (NumSides == 8)
	{
		return ("Octagon");
	}
	else if (NumSides == 9)
	{
		return ("Nonagon");
	}
	else if (NumSides == 10)
	{
		return ("Decagon");
	}
	else
	{
		return ("Polygon");
	}
}

#endif /* POLY_NAMER_H */