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
//	// �� �� : F
//
//	//// IF��
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
////����ġ��
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
//// a, b 2���� ���� �޾Ƽ� a - b�� 0���� ũ�� true ������ false
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
////	// a, b, c 3���� ���� �޾Ƽ� a + b�� c���� ũ�� a + b ������ c
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
//////���ڸ� �ϳ� �Է¹޾Ƽ�
//////1�̸� "Red" ���
//////2�̸� "Blue" ���
//////3�̸� "Black" ���
//////4�̸� "White" ���
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
//// �ֹι�ȣ ���ڸ� �Է�
//// ���ڰ� 7�ڸ��̰� �� ���ڸ� ���ڰ� 1, 3 �̸� "����"
//// ���ڰ� 7�ڸ��̰� �� ���ڸ� ���ڰ� 2, 4 �̸� "����"
//// �� ���� �ٸ� �� "�ܰ���"
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
//		cout << "����" << endl;
//		break;
//	case 2:
//		__fallthrough;
//	case 4:
//		cout << "����" << endl;
//		break;
//	default:
//		cout << "�ܰ���" << endl;
//		break;
//	}
//
//}
//else
//cout << "�ܰ���" << endl;
//}
//
//}