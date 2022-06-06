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
//	// *1 bitset은 변수의 진법/진수에 관련된 라이브러리
//	// *2 ++a는 a자체가 1씩 커지는것
//	// *3 괄호를 사용하여 for 문이나 if문처럼 cord block으로 사용 할 수 있다.
//	// *4 비교하는 구문을 논리 연산자라 한다.
//	// *5 && 같은 경우 진행 방향이 왼쪽에서 오른쪽이다, 왼쪽부터 false면 오른쪽은 할 필요가 없어져, 오른쪽 연산이 true인지 false인지 알 수 없다. 이를 단락논리 (축약 논리)라고 한다.
//	// *6 --b면 -6이 되어야 하지만 a < 0가 이미 false 이므로 b의 계산이 안되었다.
//
//	{
//		// 비트 연산자
//		int num = 10;
//		cout << "2진수 표기 : " << bitset<32>(num) << endl; // *7
//		cout << "8진수 표기 : " << oct << num << endl;
//		cout << "10진수 표기 : " << dec << num << endl;
//		cout << "16진수 표기 : " << hex << num << endl;
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
//		cout << " x = " << x << " x1 = " << x1 << endl; //질문1 왜 10진수로 나왔다가 16진수로 나왔다가 지 멋대로 일까
//
//		char cx = 0b10010100;
//		cout << " cx = " << bitset<8>(cx) << endl;
//		cx = cx >> 2; // *12
//		cout << " cs = " << bitset<8>(cx) << endl;
//	}
//	// *7 bitset<비트 수>(변수)
//	// *8 비트단위 -> & and 연산, | or 연산, ^ 배타적 논리 합 xor
//	// *9 비트 x ^ y는 겹치는건 0 안겹치면 1
//	// *10 2진수의 음수 처리는 전체 2진수의 보수에서 1을 더한 값
//	// *10 NOT
//	// *11 x << 2; -> 왼쪽으로 2진수가 이동 0011 -> 1100
//	// *12 char은 8bit까지라서 8번째의 숫자가 오른쪽으로 이동할 때 맨 앞에 있는 비트 ( 8번쨰의 비트 )를 복사하여 이동한다.
//
//	{
//		//암묵적 형변환
//		int intVar = 7;
//		double doubleVar = 1.5;
//		float floatVar = 3.7f;
//
//		//intVar = doubleVar;
//
//		//floatVar = intVar;
//
//		cout <<  intVar << " " << doubleVar << " " << floatVar << endl; // 질문2
//
//		intVar = doubleVar + intVar * floatVar; // *13
//		cout << "intVar의 값은 " <<  intVar << endl; // *14 질문 3
//
//		// *13 자료형 우선순위 char -> int -> long -> float > double -> long double
//		// *14 1.intvar * floatvar -> float type, 2.doublevar + float type -> double type, 3.마지막 int type으로 변경
//
//	}
//
//	{
//		double d = 10.5;
//		int a = static_cast<int>(d);
//		cout << a << endl;
//		//static_cast : 실행 중에 형 검사를 하지 않으며, 컴파일 할 때 수식에 지정된 그대로 변환함 (자주 사용)
//		//dynamaic_cast : 기초 클래스와 파생 클래스 간의 포인터 또는 참조 형 변환이 프로그램 실행 중에 일어나도록 지시함 (더 무겁다)
//		//reinterpret_cast : 포인터를 다룸 자료형의 포인터나 정수 자료형으로, 또는 그 역으로 변환함 (강제로 바꾼다, 잘 안쓴다)
//		//const_cast : const 지정을 일시 해제함 (잘 안쓴다)
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
