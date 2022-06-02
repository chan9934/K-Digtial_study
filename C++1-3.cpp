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

// *1 constexpr을 지금 왜 알려주셨는지 모르겠다. const 상수를 지정해 주는데 나중에 함수도 상수처리를 해야 할 때가 있는거같다. p.513에 다시 나오니 그 때 설명 듣는게 좋을 걱 같다.
// *2 constexpr을 위해 3항 연산을 설명해 주셨다. 조건 ? a : b; -> 조건이 맞으면 a 아니면 b
// *3 signed int x -> 양수와 음수를 둘다 표현, unsigned int x -> 0포함 양수만 표현 즉 기존에 -y < x < y 였다면 0 < 2y이 가능해진다.
// *4 연산자를 자주보며 익숙해 져야한다.
// *5 Float은 정밀도가 소수점 포함 7자리 수까지 나온다.
// *6 Double은 정밀도가 소수점 포함 15자리 수까지 나온다.
// *7 const는 변수를 상수로 만든다.