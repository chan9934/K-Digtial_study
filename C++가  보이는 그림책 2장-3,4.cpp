#include <iostream>

using namespace std;

void ShowString(const char str[]);

int main()
{
	int result = 0;
	for (int i = 0; i <= 100; i++)
	{
		
		result += i;
	}
	cout << result << endl;

	


}
void ShowString(const char str[])
{
	cout << "String is" << str << endl;
	str[10] = '@';
	str[20] = '.';
}