#include <iostream>

using namespace std;
void SetRoom(int& number, int floor);

class myTest
{
public:
	void Test(int i, int* p, int& r)
	{
		i = 30;
		*p = 1950;
		r = 2006;
	}
};

void swap1(int& x, int& y);
void swap2(int x, int y);


int main()
{
	int room = 3;
	int floor = 3;
	SetRoom(room, floor);
	cout <<  floor << "층 집이면 방의 수는" << room << " 개입니다" << endl;


	int a = 0, b = 0, c = 0;
	myTest test;
	test.Test(a, &b, c);

	cout << "a : " << a << " b : " << b << " c : " << c << endl;

	int num1 = { 50 };
	int num2 = { 100 };

	cout << num1 << endl;
	cout << num2 << endl;

	swap1(num1, num2);

	cout << num1 << endl;
	cout << num2 << endl;
	swap2(num2, num1);

	cout << num1 << endl;
	cout << num2 << endl;


}

void SetRoom(int& number, int floor)
{
	number = number * floor;
}

void swap1(int& x, int& y)
{
	int temp = x;
	x = y;
	y = temp;
}

void swap2(int x, int y)
{
	int temp = x;
	x = y;
	y = temp;
}