
#include <iostream>
#include <bitset>
using namespace std;
int main()
{
	{
		//�� ��ȯ
		int intVar = 7;
		double doubleVar = 1.5;
		float floatVar = 3.7f;
		intVar = doubleVar; //1 intvar

		cout << intVar << endl;
		floatVar = intVar; // 1 float

		cout << floatVar << endl;
		//�ڷ��� �켱 ���� - ����� ũ��, �Ǽ��� ���°� �켱
		//char -> int -> long -> float -> double -> long double
		intVar = doubleVar + intVar * floatVar;

		cout << intVar << endl; // �̰�� 2�� �����°� ����
		//                         float
		//       doubleVar + (intVar * floatVar)
		//               double
		//intVar = (doubleVar + (intVar * floatVar))
		//      int
	}
}