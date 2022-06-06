//#include <iostream>
//#include <bitset>
//#include <string>
//
//using namespace std;
//
//int main()
//{
//	//네모 그리기
//	{
//		string star10 = { "* * * * * * * * * *"};
//		string star2 = {"*                 *"};
//
//		{for (int a = 1; a <= 10; a++)
//			if (a == 1)
//			{
//				cout << star10 << endl;
//			}
//
//			else if (a > 1 && a < 10)
//			{
//				cout << star2 << endl;
//			}
//
//			else
//			{
//				cout << star10 << endl;
//			}
//		}
//		
//		{for (int a = 1; a <= 10; a++)
//			switch (a)
//			{
//			case 1:
//				__fallthrough;
//			case 10:
//				cout << star10 << endl;
//				break;
//			default:
//				cout << star2 << endl;
//				break;
//			}
//		}
//	}

	//{
	//	// a, b 2개의 값을 받아서 16진수로 a + b 출력
	//	int a, b = { 0 };
	//	cout << "A is ? ";
	//	cin >> a;
	//	cout << "B is ? ";
	//	cin >> b;

	//	cout << "16진수 (A + B) = " << hex << uppercase << a + b << endl; // *1
	//}
	//// *1 uppercase의 값은 16진수를 대문자로 만든다.

	//{
	//	// a, b 2개의 값을 받아서 a - b가 0 보다 크면 true 작으면 false
	//	int a, b = { 0 };
	//	cout << "A is ? ";
	//	cin >> a;
	//	cout << "B is ? ";
	//	cin >> b;

	//	bool result = { (a - b) > 0 };

	//	cout << boolalpha << result << endl; // *2
	//}
	//// *2 bool 값은 true / false 값으로만 나와, 논리 연산일 경우 맞으면 true 틀리면 false, 값만 나오는 경우 0 제외 true 0은 false
	//{
	//	// a, b, c 3개의 값을 받아서 a + b가 c보다 크면 a + b 작으면 c
	//	int a, b, c = { 0 };
	//	cout << "A is ? ";
	//	cin >> a;
	//	cout << "B is ? ";
	//	cin >> b;
	//	cout << "C is ? ";
	//	cin >> c;

	//	if ((a + b) > c)
	//	{
	//		cout << a + b << endl;
	//	}
	//	else
	//	{
	//		cout << c << endl;
	//	}

	//}

	//{
	//	// (2진법 10101010 + 8진법 111 - 16진법 ff) 결과 출력
	//	int a = { 0b10101010 };
	//	int b = { 0111 };
	//	int c = { 0xff };


	//	cout << dec << a + b - c << endl; // *3
	//}
	//// *3 int a, int b, int c는 알아서 10진수로 바뀌어 계산이 된다.

//	{
//		// a, b, c 3개의 값을 받아서
//		// a는 c보다 작다
//		// a는 b보다 크다
//		// 위에 2개의 조건식이 참이면 true
//		// 하나라도 거짓이면 false
//
//		int a, b, c = { 0 };
//		cout << "A is ? ";
//		cin >> a;
//		cout << "B is ? ";
//		cin >> b;
//		cout << "C is ? ";
//		cin >> c;
//
//
//		if ((a < c) && (a > b))
//			cout << "true" << endl;
//
//		else
//			cout << "false" << endl;
//
//
//		
//	}
//}