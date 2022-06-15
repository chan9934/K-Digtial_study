#include <iostream>

using namespace std;

int main()
{
	
	cout.width(6);
	cout.precision(4);
	cout << 155.32 << endl;

	char name[100];

	cin >> name;
	cin.getline(name, sizeof(name));
	cout << name << endl;

	
}