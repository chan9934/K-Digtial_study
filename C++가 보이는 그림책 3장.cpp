#include <iostream>
#include <string>
using namespace std;

namespace Book
{
	namespace Title
	{
		char* title;
	}
}



int main()
{
	char* arr[100] = { };
	arr[1] = "COOKIE";
	Book::Title::title;


	cout << title << "  ��" << title << endl;

	return 0;
}