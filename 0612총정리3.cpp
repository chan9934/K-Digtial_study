//#include <iostream>
//#include <array>
//#include <vector>
//
//using namespace std;
//
//const double PI - 3.141592;
//
//struct C2dType
//{
//	double x, y;
//};
//
//struct CircleType
//{
//	C2dType center;
//	double radius;
//};
//
//double circleArea(CircleType c)
//{
//	return c.radius * c.radius * PI;
//}
//
//double getDistance(CircleType c1, CircleType c2)
//{
//	double dx = c1.center.x - c2.center.x;
//	double dy = c1.center.y - c2.center.y;
//	double dCntr = sqrt(dx * dx + dy * dy);
//	return dCntr;
//}
//
//bool Isoverlapped(CircleType c1, CircleType c2)
//{
//	double distance = getDistance(c1, c2);
//	return (distance < c1.radius + c2.radius);
//}
//
//int main()
//{
//	/*int myArray[5]{ 0 };
//	myArray[0] = 1;
//	myArray[1] = 2;
//	myArray[2] = 3;
//	myArray[3] = 4;
//	myArray[4] = 5;
//
//	int myArray1[] = { 1,2,3,4 };
//	int myArray2[5] = { 1,2,3 };
//
//	int myArray3[][3]
//	{
//		{1,2,3},
//		{4,5,6}
//	};
//
//	array<int, 3> arr = { 1,2,3 };
//	int arraySize = arr.size();
//	arr[0] = { 1 };
//
//	auto [a1, a2, a3] = arr;
//
//	vector<int> myVector = { 11, 22 };
//	myVector.push_back(33);
//	myVector.push_back(44);
//	{
//		vector<int> myVector{ 11, 22 ,33 };
//
//		int vectorsize = myVector.size();
//		cout << vectorsize << endl;
//		int sum = 0;
//
//		for (int i = 0; i < vectorsize; i++)
//		{
//			sum += myVector[i];
//		}
//		cout << sum << endl;
//
//		for (int i : myVector)
//		{
//			sum += i;
//		}
//		for (auto i = myVector.begin(); i < myVector.end(); i++)
//		{
//			sum += *i;
//		}
//	}*/
//
//	//int selection{ 0 };
//
//	//do
//	//{
//	//	int a, b{ 0 };
//	//	cin >> a >> b;
//	//	cout << a + b << endl;
//	//	cout << "Quit?(Y/N) : ";
//	//	char q = ' ';
//	//	cin >> q;
//	//	if (q == 'Y')
//	//	{
//	//		break;
//	//	}
//	//} while (1);
//
//	//c++3-2
//
//	CircleType c1, c2;
//	c1.center.x = 10;
//	c1.center.y = 10;
//	c1.radius = 10;
//	
//	c2.center.x = 30;
//	c2.center.y = 30;
//	c2.radius = 10;
//	bool bIsOverlapped = Isoverlapped(c1, c2);
//	cout << "IsOverlapped = " << boolalpha << bIsOverlapped << endl;
//
//
//
//
//}