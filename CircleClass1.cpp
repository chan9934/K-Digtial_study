#include "Circleclass1.h"

CircleClass1::CircleClass1(double x, double y, double radius)
{
	center  c1 = { 0 };
	c1.x = x;
	c1.y = y;
	c1.radius = radius;

	center  c2 = { 0 };
	c2.x = x;
	c2.y = y;
	c2.radius = radius;
}


CircleClass1::~CircleClass1()
{
}

double CircleClass1::getDistance(center c1, center c2)
{
	double dx = c1.x - c2.x;
	double dy = c1.y - c2.y;
	double dCntr = sqrt(dx * dx + dy * dy);
	return dCntr;

}

bool CircleClass1::IsOverlapped(center c1, center c2)
{
	double distance = getDistance(c1, c2);
	return (distance < c1.radius + c2.radius);

}