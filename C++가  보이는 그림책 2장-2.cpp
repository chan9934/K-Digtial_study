#include <iostream>
using namespace std;

int max(int a, int b, int c);
int main()
{
	int a, b, c;
	cout << "���� 3�� �Է� " << endl;
	cin >> a >> b >> c;
	cout << "���� ū ����" << max(a, b, c) << "�Դϴ�" << endl;
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