#include <iostream>

using namespace	std;

int sum(int a, int b, int x = 0, int y = 0, int z = 0);

int main()
{
	sum(1, 3);
	sum(1, 3, 5);
	sum(1, 4, 6, 7);

	return 0;
}

int sum(int a, int b, int x = 0, int y = 0, int z = 0)
{
	return (a + b + z + x + y);

}
