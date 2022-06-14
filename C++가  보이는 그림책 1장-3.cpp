#include <iostream>
using namespace std;

class Point
{

public:
	void print();
	void SetXY(int a, int b);
	Point();
private :
	int x, y;
	
};

Point::Point()
{
	x = 0;
	y = 0;
}

void Point::SetXY(int a, int b)
{
	x = a;
	y = b;
}

void Point::print()
{

	cout << "x : " << x << endl;
	cout << "y : " << y << endl;
}

int main()
{
	Point Point1;

	Point1.SetXY(30, 100);
	Point1.print();

	return 0;




}