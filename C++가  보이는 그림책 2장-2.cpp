#include <iostream>
using namespace std;

int max(int a, int b, int c);
int main()
{
	int a, b, c;
	cout << "숫자 3개 입력 " << endl;
	cin >> a >> b >> c;
	cout << "가장 큰 수는" << max(a, b, c) << "입니다" << endl;
	return 0;
}

int max(int a, int b, int c)
{
	int max;
	if (a < b) max = b;
	else max = a;
	if (max < c) max = c;
	return max;
}