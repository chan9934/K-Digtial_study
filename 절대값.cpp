#include <iostream>

using namespace std;

void Absolute_Value(double a);

int main()
{
	double x = 0;
	cin >> x;
	Absolute_Value(x);
}

void Absolute_Value(double a)
{
	
	
	if (a >= 0)
	{
		cout << "x의 절댓값은 " << a << " 입니다." << endl;

	}

	else
	{
		cout << "x의 절댓값은 " << -1 * a << " 입니다." << endl;

	}
	
}