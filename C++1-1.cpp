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
//�׸�����
// *1 iostream�� C++�� ����Ǿ��ִ� �⺻���� ���̺귯�� �̹Ƿ� <>�� ���, �ٸ� ������� ���� ���� " "�� ����Ѵ�.
// *2 int value1; -> int�� ������ Ÿ�� ���� value1�� ����
// *3 ���� �ֽ� �ʱ�ȭ�� int a = { 0 }; or int a{ 0 };
// *4 signed�� ��� ���� �Ѵ� ǥ�� �⺻������ ���� �Ǿ� �ִ�.
// *5 �߿����� ������ 10������ ����Ͽ� ���� ǥ���� �� \�� �տ� ���̰�, 16������ ����Ͽ� ���� ǥ���Ҷ� \x�� ���δ�.
// *6 2������ ��� �Ҷ��� �տ� 0b, 8������ ����� �� �տ� 0, 16������ ��� �� �� �տ� 0x (16���� 0123456789abcdef)
// *7 \n�� ��ĭ �Ѿ �� ���δ�, \t ��

*/