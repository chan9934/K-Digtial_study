//#include <iostream>
//using namespace std;
//
//int main()
//{
//	/*int score = { 0 };
//	cin >> score;*/
//
//	// 100 ~ 90 : A
//	// 90 ~ 80 : B
//	// 80 ~ 70 : C
//	// 70 ~ 60 : D
//	// 60 ~ 50 : E
//	// 그 외 : F
//
//	//// IF문
//	//{
//	//	if (score >= 90 && score <= 100)
//	//	{
//	//		cout << "A" << endl;
//	//	}
//
////	else if (score >= 80 && score <= 90)
////	{
////		cout << "B" << endl;
////	}
//
////	else if (score >= 70 && score <= 80)
////	{
////		cout << "C" << endl;
////	}
//
////	else if (score >= 60 && score <= 70)
////	{
////		cout << "D" << endl;
////	}
//
////	else if (score >= 50 && score <= 60)
////	{
////		cout << "E" << endl;
////	}
//
////	else
////	{
////		cout << "F" << endl;
////	}
////}
//
////스위치문
///*{
//	score /= 10;
//
//	switch (score)
//	{
//	case 10:
//		__fallthrough;
//	case 9:
//		cout << "A" << endl;
//		break;
//	case 8:
//		cout << "B" << endl;
//		break;
//	case 7:
//		cout << "C" << endl;
//		break;
//	case 6:
//		cout << "D" << endl;
//		break;
//	case 5:
//		cout << "E" << endl;
//		break;
//	default:
//		cout << "F" << endl;
//		break;
//	}
//}*/
//
//// a, b 2개의 값을 받아서 a - b가 0보다 크면 true 작으면 false
//
///*{
//	int a, b = { 0 };
//	cout << "A is ? ";
//	cin >> a;
//	cout << "B is ? ";
//	cin >> b;
//
//	switch ((a - b) > 0)
//	{
//	case 1:
//		cout << "true" << endl;
//		break;
//
//	case 0:
//		cout << "false" << endl;
//		break;
//	}
//}*/
//
////	// a, b, c 3개의 값을 받아서 a + b가 c보다 크면 a + b 작으면 c
////{
////int a, b, c = { 0 };
////cout << "A is ? ";
////cin >> a;
////cout << "B is ? ";
////cin >> b;
////cout << "C is ? ";
////cin >> c;
//
////switch ((a + b > c))
////{
////case 1:
////	cout << a + b << endl;
////	break;
//
////default:
////	cout << c << endl;
////	break;
////}
//
//
////}
//
////{
//////숫자를 하나 입력받아서
//////1이면 "Red" 출력
//////2이면 "Blue" 출력
//////3이면 "Black" 출력
//////4이면 "White" 출력
////
////int a = { 0 };
////cin >> a;
////switch (a)
////{
////case 1:
////	cout << "Red" << endl;
////	break;
////case 2:
////	cout << "Blue" << endl;
////	break;
////case 3:
////	cout << "Black" << endl;
////	break;
////case 4:
////	cout << "White" << endl;
////	break;
////
////
////}
////}
//
//{
//// 주민번호 뒷자리 입력
//// 숫자가 7자리이고 맨 앞자리 숫자가 1, 3 이면 "남자"
//// 숫자가 7자리이고 맨 앞자리 숫자가 2, 4 이면 "여자"
//// 그 밖의 다른 건 "외계인"
//
//int a = { 0 };
//
//cin >> a;
//if (a >= 1000000 && a < 9999999)
//{
//	a /= 1000000;
//
//	switch (a)
//	{
//	case 1:
//		__fallthrough;
//	case 3:
//		cout << "남자" << endl;
//		break;
//	case 2:
//		__fallthrough;
//	case 4:
//		cout << "여자" << endl;
//		break;
//	default:
//		cout << "외계인" << endl;
//		break;
//	}
//
//}
//else
//cout << "외계인" << endl;
//}
//
//}