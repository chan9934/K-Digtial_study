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
	cout << "OrangeBox 오브젝트 생성" << endl;
}
OrangeBox::~OrangeBox()
{
	cout << "OrangeBox 오브젝트 임무 종료" << endl;
}

int main()
{
	OrangeBox* pOrangeBox = new OrangeBox;
	delete pOrangeBox;

	return 0;
}