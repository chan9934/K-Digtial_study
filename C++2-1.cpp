//#include <iostream>
//#include <bitset> // *1
//
//using namespace std;
//
//int main()
//{
//	{
//		int a = 10;
//		int b = 0;
//
//		b = ++a; // *2
//
//		cout << "a = " << a << "b = " << b << endl;
//	} // *3
//
//	{
//		int a = 10;
//		int b = -5;
//		bool result = false;
//		result = (a > b) ? true : false; // *4
//		cout << result << endl;
//		result = (a == b) ? true : false;
//		cout << result << endl;
//		result = (a > 0 && b > 0) ? true : false;
//		cout << result << endl;
//		result = (a < 0 || b > 0) ? true : false;
//		cout << result << endl;
//		result = (a < 0 && --b > 0) ? true : false; // *5
//		cout << "result = " << boolalpha << result << noboolalpha << " b= " << b << endl; // *6
//		result = !(a > 0) ? true : false;
//
//		cout << "result = " << boolalpha << result << " b= " << b << endl;
//	}
//	// *1 bitset�� ������ ����/������ ���õ� ���̺귯��
//	// *2 ++a�� a��ü�� 1�� Ŀ���°�
//	// *3 ��ȣ�� ����Ͽ� for ���̳� if��ó�� cord block���� ��� �� �� �ִ�.
//	// *4 ���ϴ� ������ �� �����ڶ� �Ѵ�.
//	// *5 && ���� ��� ���� ������ ���ʿ��� �������̴�, ���ʺ��� false�� �������� �� �ʿ䰡 ������, ������ ������ true���� false���� �� �� ����. �̸� �ܶ��� (��� ��)��� �Ѵ�.
//	// *6 --b�� -6�� �Ǿ�� ������ a < 0�� �̹� false �̹Ƿ� b�� ����� �ȵǾ���.
//
//	{
//		// ��Ʈ ������
//		int num = 10;
//		cout << "2���� ǥ�� : " << bitset<32>(num) << endl; // *7
//		cout << "8���� ǥ�� : " << oct << num << endl;
//		cout << "10���� ǥ�� : " << dec << num << endl;
//		cout << "16���� ǥ�� : " << hex << num << endl;
//
//		int x = 0x35;
//		int y = 0xf0;
//
//		cout << "x = " << bitset<8>(x) << endl;
//		cout << "y = " << bitset<8>(y) << endl;
//		cout << "x & y = " << bitset<8>(x & y) << endl; // *8
//		cout << "x | y = " << bitset<8>(x | y) << endl;
//		cout << "x ^ y = " << bitset<8>(x ^ y) << endl; // *9
//		cout << "-x = " << bitset<8>(-x) << endl; // *10
//		cout << "~x = " << bitset<8>(~x) << endl; // *10
//
//		int x1 = x << 2;
//		cout << "x1 = " << bitset<8>(x1) << endl; // *11
//		cout << " x = " << x << " x1 = " << x1 << endl; //����1 �� 10������ ���Դٰ� 16������ ���Դٰ� �� �ڴ�� �ϱ�
//
//		char cx = 0b10010100;
//		cout << " cx = " << bitset<8>(cx) << endl;
//		cx = cx >> 2; // *12
//		cout << " cs = " << bitset<8>(cx) << endl;
//	}
//	// *7 bitset<��Ʈ ��>(����)
//	// *8 ��Ʈ���� -> & and ����, | or ����, ^ ��Ÿ�� �� �� xor
//	// *9 ��Ʈ x ^ y�� ��ġ�°� 0 �Ȱ�ġ�� 1
//	// *10 2������ ���� ó���� ��ü 2������ �������� 1�� ���� ��
//	// *10 NOT
//	// *11 x << 2; -> �������� 2������ �̵� 0011 -> 1100
//	// *12 char�� 8bit������ 8��°�� ���ڰ� ���������� �̵��� �� �� �տ� �ִ� ��Ʈ ( 8������ ��Ʈ )�� �����Ͽ� �̵��Ѵ�.
//
//	{
//		//�Ϲ��� ����ȯ
//		int intVar = 7;
//		double doubleVar = 1.5;
//		float floatVar = 3.7f;
//
//		//intVar = doubleVar;
//
//		//floatVar = intVar;
//
//		cout <<  intVar << " " << doubleVar << " " << floatVar << endl; // ����2
//
//		intVar = doubleVar + intVar * floatVar; // *13
//		cout << "intVar�� ���� " <<  intVar << endl; // *14 ���� 3
//
//		// *13 �ڷ��� �켱���� char -> int -> long -> float > double -> long double
//		// *14 1.intvar * floatvar -> float type, 2.doublevar + float type -> double type, 3.������ int type���� ����
//
//	}
//
//	{
//		double d = 10.5;
//		int a = static_cast<int>(d);
//		cout << a << endl;
//		//static_cast : ���� �߿� �� �˻縦 ���� ������, ������ �� �� ���Ŀ� ������ �״�� ��ȯ�� (���� ���)
//		//dynamaic_cast : ���� Ŭ������ �Ļ� Ŭ���� ���� ������ �Ǵ� ���� �� ��ȯ�� ���α׷� ���� �߿� �Ͼ���� ������ (�� ���̴�)
//		//reinterpret_cast : �����͸� �ٷ� �ڷ����� �����ͳ� ���� �ڷ�������, �Ǵ� �� ������ ��ȯ�� (������ �ٲ۴�, �� �Ⱦ���)
//		//const_cast : const ������ �Ͻ� ������ (�� �Ⱦ���)
//	}
//	
//
//
//
//}
//
//	
//
//
//
