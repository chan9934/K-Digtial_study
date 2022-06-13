#include <iostream>
#include <bitset>

using namespace std;
namespace myNS1 { int n = 10; }
namespace myNS2 { int n = 20; }
int n = 30;


enum PieceType1
{
	PieceTypeKing = 1,
	PieceTypeQueen,
	PieceTypeRook = 10,
	PieceTypePawn
};

enum class PieceType : unsigned long
{
	King = 1,
	Queen,
	Rook = 10,
	Pawn
};

constexpr int fac(int n)
{
	return n > 1 ? n * fac(n - 1) : 1;
}

struct Employee
{
	char firstInitial;
	char lastInitial;
	int employeeNumber;
	int salary;

};
//int main()
//{
	//C++1-1
	/*int value1 = 0;
	int a1(3);
	int a2 = { 3 };
	int a3{ 3 };

	value1 = 0b1001011;
	value1 = 0123;
	value1 = 0x9f;

	unsigned int value2;
	float value3;
	char c1 = 'A';
	c1 = '\101';
	c1 = '\x41';
	cout << c1 << endl;

	cout << */

	//C++1-2
	//int n = 40;

	//cout << myNS1::n << endl;
	//cout << myNS2::n << endl;
	//cout << ::n << endl;
	//cout << n << endl;

	//float myFloat = 3.14f;
	//int i1 = (int)myFloat;
	//int i2 = int(myFloat);
	//int i3 = static_cast<int>(myFloat);

	//double d1 = 1200.;
	//double d2 = 1200.0;
	//double d3 = 12e2;
	//double d4 = 1.2e+3;
	//double d5 = 1.2e-3;

	//C++1-3

	/*int x = 2147483648;
	cout << x << endl;

	int someInteger = 256;
	short someShort;
	long someLong;
	float someFloat;
	double someDouble;

	someInteger++;
	someInteger *= 2;
	someShort = static_cast<short>(someInteger);
	someLong = someShort * 10000;
	someFloat = someLong + 0.785f;
	someDouble = static_cast<double>(someFloat);
	
	int firstNum = 0;
	cin >> firstNum;

	int secondNum = 0;
	cin >> secondNum;
	cout << firstNum + secondNum << endl;

	*/

	//C++1-4

	//PieceType1 myPiece = PieceTypeRook;
	//int a = myPiece;
	//cout << a;

	//PieceType myPiece2 = PieceType::King;
	//// int b = myPiece2; 안된다 PieceType 타입의 자료형이여야한다 더 엄격해서

	//Employee anEmployee;
	//anEmployee.firstInitial = 'M';
	//anEmployee.lastInitial = 'G';
	//anEmployee.employeeNumber = 42;
	//anEmployee.salary = 80000;

	//cout << anEmployee.firstInitial << anEmployee.lastInitial << endl;
	//cout << anEmployee.employeeNumber << endl;
	//cout << anEmployee.salary << endl;

	//C++2-1

	//{
	//	int a{ 10 };
	//	int b{ 0 };
	//	//b = a++; b = 10, a 11
	//	//b = ++a; b = 11, a 11;
	//	//b = a--; b = 10 a = 9;
	//	//b = --a; a 9 b 9;
	//}
	//{
	//	int a{ 10 };
	//	int b{ -5 };
	//	bool result = false;
	//	result = (a > b) ? true : false;
	//	result = (a == b) ? true : false;
	//	result = (a > 0 || b > 0) ? true : false;
	//	result = (a < 0 && --b > 0) ? true : false;
	//	result = !(a > 0) ? true : false;



	//}
	//

	//{
	//	int num{ 10 };
	//	cout << bitset<32>(num) << endl;
	//	cout << oct << endl;
	//	cout << dec << endl;
	//	cout << hex << endl;

	//	int x = 0x35;
	//	int y = 0xf0;
	//	cout << bitset<8>(x) << endl;
	//	cout << bitset<8>(y) << endl;
	//	cout << bitset<8>(x & y) << endl;
	//	cout << bitset<8>(x | y) << endl;
	//	cout << bitset<8>(x ^ y) << endl;
	//	cout << bitset<8>(~x) << endl;

	//	int x1 = x << 2;
	//	cout << bitset<8>(x) << endl;
	//	cout << bitset<8>(x1) << endl;

	//	char cx = 0b00010100l;
	//	cout << bitset<8>(cx) << endl;
	//	cx = cx >> 2;
	//	cout << bitset<8>(cx) << endl;
	//	
	//}

	//{
	//	//묵시적 형 변환
	//	
	//	int intVar = 7;
	//	double doubleVar = 1.5;
	//	float floatVar = 3.7f;

	//	intVar = doubleVar;
	//	floatVar = intVar;

	//	// char -> int -> long -> float -> double -> long double
	//	intVar = doubleVar + intVar * floatVar;
	//	//static_cast
	//	//dynamic_cast
	//	//reinterpret_cast
	//	//const_cast

	//	double d = 10.5;
	//	int a = static_cast<int>(d);
	//	cout << a << endl;
	//}

	//C++2-2
	/*{
		int a, b{ 0 };
		cin >> a >> b;

		if (a > b)
		{
			cout << a << endl;
		}

		else
		{
			cout << b << endl;
		}
	
		if (a > b)
		{
			int temp = a;
			a = b;
			b = temp;
			cout << a << b << endl; 
		}
	}*/

	//C++2-3

//}