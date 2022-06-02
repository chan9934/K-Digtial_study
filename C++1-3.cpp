/*
#include <iostream>

using namespace std;

constexpr int fac(int n) //*1
{

	return n > 1 ? n * fac(n - 1) : 1; //*2
}

int fax(int m)
{

 return	m > 1 ? m * (m-1) : 1;
}




int main()
{

	unsigned int x = 4294967295;
	cout << "x = " << x << endl; //*3

	int someInteger = 256;
	short someShort;
	long someLong;
	float someFloat; 
	double someDouble;

	cout << fac(3) << endl;

	cout << fax(3) << endl;

	//*4
	someInteger ++;
	someInteger *= 2;
	someShort = static_cast <short> (someInteger);
	someLong = someShort * 10000;
	someFloat = someLong + 0.785f; //*5
	someDouble = static_cast <double> (someFloat) / 100000; //*6
	cout << someDouble << endl;
	cout << someFloat << endl;

	int firstNum = 0;
	cout << "firstNum : ";
	cin >> firstNum;
	int secondNum = 0;
	cout << "SecondNum : ";
	cin >> secondNum;
	cout << "firstNum + secondNum = " << firstNum + secondNum << endl;
	cout << "firstNum * secondNum = " << firstNum * secondNum << endl;
	cout << "firstNum / secondNum = " << firstNum / secondNum << endl;
	cout << "firstNum % secondNum = " << firstNum % secondNum << endl;

	const int a = 0; //*7
	
	return 0;
}
*/

// *1 constexpr�� ���� �� �˷��̴ּ��� �𸣰ڴ�. const ����� ������ �ִµ� ���߿� �Լ��� ���ó���� �ؾ� �� ���� �ִ°Ű���. p.513�� �ٽ� ������ �� �� ���� ��°� ���� �� ����.
// *2 constexpr�� ���� 3�� ������ ������ �̴ּ�. ���� ? a : b; -> ������ ������ a �ƴϸ� b
// *3 signed int x -> ����� ������ �Ѵ� ǥ��, unsigned int x -> 0���� ����� ǥ�� �� ������ -y < x < y ���ٸ� 0 < 2y�� ����������.
// *4 �����ڸ� ���ֺ��� �ͼ��� �����Ѵ�.
// *5 Float�� ���е��� �Ҽ��� ���� 7�ڸ� ������ ���´�.
// *6 Double�� ���е��� �Ҽ��� ���� 15�ڸ� ������ ���´�.
// *7 const�� ������ ����� �����.