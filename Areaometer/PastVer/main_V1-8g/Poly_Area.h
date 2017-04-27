#ifndef POLY_AREA_H
#define POLY_AREA_H

float PolyArea(float PolySide, float NumSides)
{
	float Perimeter = NumSides * PolySide;
	float Denominator = 2 * tan(PI / NumSides);
	float Apothem = (PolySide / Denominator);
	float Area = 0.5*Perimeter*Apothem;
	return (Area);
}

#endif /* POLY_AREA_H */