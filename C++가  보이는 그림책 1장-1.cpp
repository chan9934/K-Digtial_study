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
	cout << "이름 : " << kim.name << endl;
	cout << "나이 : " << kim.age << endl;

	return 0;

}