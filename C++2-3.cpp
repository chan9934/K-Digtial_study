//#include <iostream>
//#include <bitset>
//#include <string>
//
//using namespace std;
//
//int main()
//{
//	//�׸� �׸���
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
	//	// a, b 2���� ���� �޾Ƽ� 16������ a + b ���
	//	int a, b = { 0 };
	//	cout << "A is ? ";
	//	cin >> a;
	//	cout << "B is ? ";
	//	cin >> b;

	//	cout << "16���� (A + B) = " << hex << uppercase << a + b << endl; // *1
	//}
	//// *1 uppercase�� ���� 16������ �빮�ڷ� �����.

	//{
	//	// a, b 2���� ���� �޾Ƽ� a - b�� 0 ���� ũ�� true ������ false
	//	int a, b = { 0 };
	//	cout << "A is ? ";
	//	cin >> a;
	//	cout << "B is ? ";
	//	cin >> b;

	//	bool result = { (a - b) > 0 };

	//	cout << boolalpha << result << endl; // *2
	//}
	//// *2 bool ���� true / false �����θ� ����, �� ������ ��� ������ true Ʋ���� false, ���� ������ ��� 0 ���� true 0�� false
	//{
	//	// a, b, c 3���� ���� �޾Ƽ� a + b�� c���� ũ�� a + b ������ c
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
	//	// (2���� 10101010 + 8���� 111 - 16���� ff) ��� ���
	//	int a = { 0b10101010 };
	//	int b = { 0111 };
	//	int c = { 0xff };


	//	cout << dec << a + b - c << endl; // *3
	//}
	//// *3 int a, int b, int c�� �˾Ƽ� 10������ �ٲ�� ����� �ȴ�.

//	{
//		// a, b, c 3���� ���� �޾Ƽ�
//		// a�� c���� �۴�
//		// a�� b���� ũ��
//		// ���� 2���� ���ǽ��� ���̸� true
//		// �ϳ��� �����̸� false
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