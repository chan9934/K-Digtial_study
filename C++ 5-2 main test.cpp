#include <iostream>
#include "counter test.h"

using namespace std;

void g(const Counter& c)
{
	//const�� Ŭ������ �����ϸ� ȣ���ϴ� Ŭ������ �Լ��� ���� ���� const���� �Ѵ�.
	cout << "Counter = " << c.getCount() << endl;
	
}

int main()
{
	int a = 0;
	Counter c1;
	c1.Counting();
	c1.Counting();
	cout << "c1 Count = " << c1.getCount() << endl;
	cout << sizeof(c1.getCount()) << endl;
	c1.Counting();
	g(c1);
	cout << sizeof(g(c1)) << endl;
}