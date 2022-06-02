/*
#include <iostream> // *1

int main(int argc, char* argv[])
{

	int a1 = 0;
	int a2(0);
	int a3 = { 0 }; // *3
	int a4{ 0 };

	int value1; // *2
	signed int value2;  // *4
	unsigned int value3;
	float value4;
	char c1;
	c1 = '\101';
	c1 = '\x41';

	value1 = 0b1001011; // *6
	value1 = 0123;
	value1 = 0x9f;



	std::cout << "This is value1 :";
	std::cin >> value1;



	std::cout << "Hello, World" << std::endl;
	std::cout << "There are " << value1 << " ways" << std::endl;
	std::cout << "I love you" << std::endl;
	std::cout << "A\nBC\nDEF\nG\tH" << std::endl; // *7

	return 0;
}
//항목정리
// *1 iostream은 C++에 저장되어있는 기본적인 라이브러리 이므로 <>를 사용, 다른 헤더파일 같은 경우는 " "를 사용한다.
// *2 int value1; -> int는 변수의 타입 지정 value1은 변수
// *3 변수 최신 초기화는 int a = { 0 }; or int a{ 0 };
// *4 signed는 양수 음수 둘다 표현 기본적으로 생략 되어 있다.
// *5 중요하진 않지만 10진수를 사용하여 문자 표현할 대 \를 앞에 붙이고, 16진수를 사용하여 문자 표현할때 \x를 붙인다.
// *6 2진수를 사용 할때는 앞에 0b, 8진수를 사용할 때 앞에 0, 16진수를 사용 할 때 앞에 0x (16진수 0123456789abcdef)
// *7 \n은 한칸 넘어갈 때 쓰인다, \t 탭

*/