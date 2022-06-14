#include <iostream>
using namespace std;

class point
{
public:
	int x, y;
	void print();
	point();
};

point::point()
{
	x = 100;
	y = 100;
}

void point::print()
{
	cout << "x : " << x << " y : " << y << endl;
}

int main()
{
	point point1;

	point1.x = 50;

	point1.print();


	return 0;
}