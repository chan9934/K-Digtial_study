#include <iostream>

using namespace std;

class OrangeBox
{
public:
	OrangeBox();

	~OrangeBox();

};

OrangeBox::OrangeBox()
{
	cout << "OrangeBox ������Ʈ ����" << endl;
}
OrangeBox::~OrangeBox()
{
	cout << "OrangeBox ������Ʈ �ӹ� ����" << endl;
}

int main()
{
	OrangeBox* pOrangeBox = new OrangeBox;
	delete pOrangeBox;

	return 0;
}