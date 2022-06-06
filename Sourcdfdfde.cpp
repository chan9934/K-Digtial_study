
#include <iostream>
#include <bitset>
using namespace std;
int main()
{
	{
		//형 변환
		int intVar = 7;
		double doubleVar = 1.5;
		float floatVar = 3.7f;
		intVar = doubleVar; //1 intvar

		cout << intVar << endl;
		floatVar = intVar; // 1 float

		cout << floatVar << endl;
		//자료형 우선 순위 - 사이즈가 크고, 실수인 형태가 우선
		//char -> int -> long -> float -> double -> long double
		intVar = doubleVar + intVar * floatVar;

		cout << intVar << endl; // 이경우 2가 나오는게 맞지
		//                         float
		//       doubleVar + (intVar * floatVar)
		//               double
		//intVar = (doubleVar + (intVar * floatVar))
		//      int
	}
}