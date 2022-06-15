#include "Person.h"
#include <iostream>

using namespace std;

int main()
{
	Person* p1 = new Person("동찬", "서울");
	Person* p2 = new Person("세연", "일산");

	p1->print();
	p2->print();
	p1->addaddr("서울시");
	p1->addname("김동찬");
	p2->addaddr("일산시");
	p2->addname("나세연");
	p1->print();
	p2->print();
}