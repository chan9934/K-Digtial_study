#include <iostream>
using namespace std;

class Person
{
public:
	int age;
	char name[10];
};

int main()
{
	Person kim;
	kim.age = 23;
	strcpy_s(kim.name, "Sunghoon");
	cout << "�̸� : " << kim.name << endl;
	cout << "���� : " << kim.age << endl;

	return 0;

}