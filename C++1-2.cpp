/*
#include <iostream>

using namespace std;

namespace myNS1 { int n = 10; } // *1
namespace myNS2 { int n = 10; }
int n = 30; // *2

int main(int argc, char* argv[])
{
	int n = 40; // *2


	cout << myNS1::n << endl;
	cout << myNS2::n << endl;
	cout << ::n << endl; // *3 
	cout << n << endl;


	float f1 = 3.14f;
	int i1 = (int)f1;
	int i2 = int(f1);
	int i3 = static_cast <int>(f1); // *4

	cout << i1 << " " << i2 << " " << i3 << endl;

	double d1 = 1200.;
	double d2 = 1200.0;
	double d3 = 12e2; // *4
	double d4 = 1.2e+3;
	double d5 = 100000000000000;
	
	cout << d1 << " " << d2 << " " << d3 << " " << d4 << endl;

	return 0;

}
*/

//항목정리
// *1 myNS1을 namespace로 새로 지정 해준것 namespace를 지정해 줘야 :: 사용가능 namespace는 {}를 사용한다, 두 가지 항목을 한번에 namespace로 지정 못한다. 
// *2 함수 밖에 있는걸 전역변수, 함수 안에 있는걸 지역변수라 한다
// *3 전역변수는 :: 으로 표현 가능하다.
// *4 정확한 형변환은 static_cast <변환 후>(변환 전); 의 방법을 취한다.
// *5 10의 자리를 표현할 때 e또는E를 사용하여 e2는 100 e+2도 100 이런식으로 취한다.