#include <iostream>

using namespace std;

class Point
{
public:
	void moveLeft();
	void moveRight();
	void Print();
	Point();


private:
	int x, y;

};

Point::Point()
{
	x = 50, y = 50;
}
void Point::Print()
{
	cout << "(x,y) =" << "(" << x << "," << y << ")" << endl;
}

void Point::moveLeft()
{
	--x;
	Print();
}

void Point::moveRight()
{
	++x;
	Print();
}

int main()
{
	Point Move;
	Move.moveLeft();
	Move.moveLeft();
	Move.moveRight();
	Move.moveLeft();

	return 0;
}
