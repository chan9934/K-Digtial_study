#include <iostream>

using namespace std;

struct SalesRec
{
	char pID[10];
	int dYear, dMonth, dData;
	char deliverAddr[40];
};

struct TimeRec
{
	int hours;
	int minutes;
};

double GetArraySum(double arr[], int n);

void printsum(double sum);

int main()
{
	double a[50], b[100];
	double sum{ 0 };

	sum = GetArraySum(a, 50);

	printsum(sum);

	SalesRec stRec;
	strcpy_s(stRec.pID, "123456789");
}

double GetArraySum(double arr[], int n)
{
	double sum{ 0 };
	for (int i = 0; i < n; ++i)
	{
		arr[i] = i;
		sum += i;
		
	}
	return sum;
}

void printsum(double sum)
{
	cout << sum << endl;
}

void PrSalesRec(SalesRec srec)
{
	cout << srec.pID << endl;
	cout << srec.dYear << endl;
	cout << srec.dMonth << srec.dData << endl;
	cout << srec.dData << endl;
}
