#pragma once

class Person
{
public:
	Person(const char* name, const char* addr);
	~Person();
	void print();
	void addname(const char* name);
	void addaddr(const char* addr);

	
private:
	char* name;
	char* addr;

};