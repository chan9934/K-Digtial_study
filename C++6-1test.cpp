#include "Person.h"
#include <iostream>

using namespace std;

int main()
{
	Person* p1 = new Person("����", "����");
	Person* p2 = new Person("����", "�ϻ�");

	p1->print();
	p2->print();
	p1->addaddr("�����");
	p1->addname("�赿��");
	p2->addaddr("�ϻ��");
	p2->addname("������");
	p1->print();
	p2->print();
}