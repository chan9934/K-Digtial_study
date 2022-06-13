#pragma once
#include <iostream>

const double PI = 3.141592;

struct center
{
	double x, y, radius;
};


class CircleClass1
{
public:
	CircleClass1( double x, double y, double raidus);
	~CircleClass1();


	double getDistance(center c1, center c2);
	bool IsOverlapped(center c1, center c2);

};
	