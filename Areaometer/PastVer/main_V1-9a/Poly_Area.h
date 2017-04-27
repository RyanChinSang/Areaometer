#ifndef POLY_AREA_H
#define POLY_AREA_H

double PolyArea(double PolySide, double NumSides)
{
	double Perimeter = NumSides * PolySide;
	double Denominator = 2 * tan(PI / NumSides);
	double Apothem = (PolySide / Denominator);
	double Area = 0.5*Perimeter*Apothem;
	return (Area);
}

#endif /* POLY_AREA_H */