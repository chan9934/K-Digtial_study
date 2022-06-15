#include "Person.h"
#include <iostream>

using namespace std;

Person::Person(const char* name, const char* addr)
{
	this->name = new char[strlen(name) + 1];
	strcpy_s(this->name, strlen(name) + 1, name);
	this->addr = new char[strlen(addr) + 1];
	strcpy_s(this->addr, strlen(addr) + 1, addr);
}

Person::~Person()
{
	cout << "Person의 사용이 종료 되었습니다" << endl;
	delete[] name;
	delete[] addr;
	name = nullptr;
	addr = nullptr;
}

void Person::print()
{
	cout << this->addr << "에서 살고있는 " << name << endl;
}

void Person::addname(const char* name)
{
	delete this->name;
	this->name = new char[strlen(name) + 1];
	strcpy_s(this->name, strlen(name) + 1, name);
}

void Person::addaddr(const char* addr)
{
	delete this->addr;
	this->addr = new char[strlen(addr) + 1];
	strcpy_s(this->addr, strlen(addr) + 1, addr);
}
