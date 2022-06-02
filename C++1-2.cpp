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

//�׸�����
// *1 myNS1�� namespace�� ���� ���� ���ذ� namespace�� ������ ��� :: ��밡�� namespace�� {}�� ����Ѵ�, �� ���� �׸��� �ѹ��� namespace�� ���� ���Ѵ�. 
// *2 �Լ� �ۿ� �ִ°� ��������, �Լ� �ȿ� �ִ°� ���������� �Ѵ�
// *3 ���������� :: ���� ǥ�� �����ϴ�.
// *4 ��Ȯ�� ����ȯ�� static_cast <��ȯ ��>(��ȯ ��); �� ����� ���Ѵ�.
// *5 10�� �ڸ��� ǥ���� �� e�Ǵ�E�� ����Ͽ� e2�� 100 e+2�� 100 �̷������� ���Ѵ�.