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
		cout << "x�� ������ " << a << " �Դϴ�." << endl;

	}

	else
	{
		cout << "x�� ������ " << -1 * a << " �Դϴ�." << endl;

	}
	
}