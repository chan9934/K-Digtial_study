﻿//#include <iostream>
//
//using namespace std;
//
//struct SalesRec
//{
//	char pID[10];
//	int dYear, dMonth, dData;
//	char deliverAddr[40];
//};
//
//// 배열에 각배열 번호의 값을 넣어주고 전부 합한 값을 반환
//double GetArraySum(double arr[], int n);
//void printsum(double sum);
//
//// 분산 구하기
//double variance(double arr[], int n);
//
//// 두개의 수를 서로 바꾸기
//inline void Swapvalues(int& x, int& y);
//
//void PrSalesRec(SalesRec& srec);
//
//
////시간 t1에 t2를 더한다.
//void AddTime(TimeRec& t1, const TimeRec& t2);
//
//int main()
//{
//	{
//		// 배열에 각배열 번호의 값을 넣어주고 전부 합한 값을 반환
//		double a[50], b[100];
//		double sum = 0;
//
//		sum = GetArraySum(a, 50);
//
//		printsum(sum);
//
//
//		sum = GetArraySum(b, 100);
//
//		printsum(sum);
//	}
//
//	{
//		// 두개의 수를 서로 바꾸기
//		int a, b = { 0 };
//		cout << "두개의 수를 입력하세요 : ";
//		cin >> a >> b;
//		Swapvalues(a, b);
//		cout << "a = " << a << " b = " << b << endl;
//
//	/*	inline 함수란?
//		- 함수 호출 절차를 따르지 않고 함수 호출 위치에 함수의 처리 문장이 삽입되게 번역하도록 선언된 함수
//			-함수를 사용함으로써 얻을 수 있는 모듈화의 장점을 살리면서, 함수 호출에 따른 부수적인 처리시간이 생략됨
//			-함수 호출 루틴으로부터 함수로 넘어가는 부분의 코드 최적화가 가능해짐
//			-매우 빈번히 호출되며 빠른 실행이 요구되는 함수를 inline 함수로 선언하면 성능을 높이는데 도움이 됨
//			inline 함수로 선언하더라도 반드시 inline으로 반영되는 것은 아님
//			inline 선언을 무시하고 일반 함수로 번역하는 경우
//			-함수가 너무 큰 경우
//			- 순환 호출(recursive call)을 하는 경우, 재귀 함수
//			- 프로그램에 내에서 그 함수에 대한 포인터를 사용하는 경우, 콜백 함수*/
//		
//	}
//
//	{
//		SalesRec stRec;
//		strcpy_s(stRec.pID, "123456789");
//		stRec.dYear = 2022;
//		stRec.dMonth = 6;
//		stRec.dData = 8;
//		strcpy_s(stRec.deliverAddr, "경기도 부천");
//		PrSalesRec(stRec);
//	}
//	{
//		
//		TimeRec time1 = { 2, 20 };
//		TimeRec time2 = { 1, 55 };
//
//		cout << time1.hours << "시간 " << time1.minutes << "분 + ";
//		cout << time2.hours << "시간 " << time2.minutes << "분 = ";
//		AddTime(time1, time2);
//		cout << time1.hours << "시간 " << time1.minutes << "분" << endl;
//
//		cout << time1.hours << "시간 " << time1.minutes << "분 + ";
//		cout << time2.hours << "시간 " << time2.minutes << "분 = ";
//		AddTime(time1, 210);
//		cout << time1.hours << "시간 " << time1.minutes << "분" << endl;
//
//
//	}
//
//	
//
//
//}
//
//// 배열에 각배열 번호의 값을 넣어주고 전부 합한 값을 반환
//double GetArraySum(double arr[], int n)
//{
//	double sum = 0;
//	for (int i = 0; i < n; ++i)
//	{
//		
//		arr[i] = i;
//		sum += arr[i];
//	}
//
//	return sum;
//}
//
//void printsum(double sum)
//{
//	cout << "Sum = " << sum << endl;
//}
//
//// 분산 구하기
//double variance(double arr[], int n)
//{
//	double sum = 0, sqSum = 0;
//	for (int i = 0; i < n; ++i)
//	{
//		sum += arr[i];
//		sqSum += arr[i] * arr[i];
//	}
//	double result = (sqSum / n) - (sum / n * n);
//	return result;
//}
//
//// 두개의 수를 서로 바꾸기
//inline void Swapvalues(int& x, int& y)
//{
//	int temp = x;
//	x = y;
//	y = temp;
//}
//
//void PrSalesRec(SalesRec& srec)
//{
//	cout << "품목코드 : " << srec.pID << endl;
//	cout << "배달일자 : " << srec.dYear << "년 " << endl;
//	cout << srec.dMonth << "월 " << srec.dData << "일" << endl;
//	cout << "배달주소 : " << srec.deliverAddr << endl;
//}
//
//void PrSalesRec(SalesRec& srec)//4Byte, 8Byte
//{
//	cout << "품목코드 : " << srec.pID << endl;
//	cout << "배달일자 : " << srec.dYear << "년 " << endl;
//	cout << srec.dMonth << "월 " << srec.dData << "일" << endl;
//	cout << "배달주소 : " << srec.deliverAddr << endl;
//}
//
////시간 t1에 t2를 더한다.
//void AddTime(TimeRec& t1, const TimeRec& t2)
//{
//	t1.minutes += t2.minutes;
//	t1.hours += t2.hours + (t1.minutes / 60);
//	t1.minutes %= 60;
//}
//
////시간 t1에 minutes 분을 더한다
//void AddTime(TimeRec& t1, int minutes)
//{
//	t1.minutes += minutes;
//	t1.hours += (t1.minutes / 60);
//	t1.minutes %= 60;
//}