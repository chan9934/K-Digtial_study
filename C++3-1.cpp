//#include <iostream>
//#include <array>
//#include <vector>
//
//using namespace std;
//
//int main()
//{
//	{
//		int myArray[5] = { 0 }; // *1
//		myArray[0] = 1; // *2
//		myArray[1] = 2;
//		myArray[2] = 3;
//		myArray[3] = 4;
//		myArray[4] = 5;
//		//myArray[5] <- 0���� ������ �ؼ� 5�� ���������Ƿ� ����.
//
//		int myArray1[] = { 1, 2, 3, 4 }; // *3
//		int myArray2[]{ 1, 2, 3, 4 };
//		int myArray3[5]{ 1, 2, 3 }; // *4
//
//	}
//	// *1 ���̺귯���� ������� �ʴ� ����� ���ô��� ��� (����)
//	// *2 ���� ���
//	// *3 �迭 4���� �����ȴ�.
//	// *4 ������ 4,5�� 0���� �ʱ�ȭ �ȴ�.
//
//	// 1 2 3 4
//	// 5 6 7 8
//	{
//		int myArray4[2][4] = { {1,2,3,4}, {5,6,7,8} };
//		int myArray9[3] = { 1,2,3 };
//		array<int, 3> arr = { 1, 5, 9 };  // *5
//		cout << arr[0] << endl;
//
//		int arraysize = arr.size();
//
//		cout << arr.size() << endl;
//
//		auto [a1, a2, a3] = arr;
//	}
//	// *5 array�� ���̺귯�� ���
//
//	{
//		vector<int> myVector = { 11, 22 };// *6
//		myVector.push_back(33);//{ 11, 22, 33 }; // *7
//		myVector.push_back(44);//{ 11, 22, 33, 44 };
//		
//	}
//	// *6 vectordml ���̺귯�� ���
//	// *7 �׸� �߰��� �� vector ���
//
//	{
//		vector<int> myVector = { 11, 22, 33 };
//
//		int vectorsize = myVector.size();
//		cout << "Vectorsize = " << vectorsize << endl;
//		int sum = 0;
//
//		for (int i = 0; i < myVector.size(); ++i)
//		{
//			sum += myVector[i]; // *8
//		}
//		// *8 i ? 0, 1, 2
//
//		for (int i : myVector)
//		{
//			sum += i; // *9
//		}
//		// *9 11, 22, 33
//		
//		for (auto iter = myVector.begin(); iter < myVector.end(); iter++)
//		{
//			sum += *iter; // *10
//		}
//
//		cout << "sum =  " << sum << endl;
//		// *10 �ּҰ�
//
//		int myArray[3] = { 11, 22, 33 };
//		//myArray�� ��� ���� 1�� ���غ��� (11, 22, 33) -> (12, 23, 34)
//		for (int& i : myArray)
//		{
//			i++;
//			cout << i << endl;
//		}
//
//		{
//			vector<int> myVector = { 11, 22, 33 };
//			int vectorSize = myVector.size();
//			cout << "VectorSize = " << vectorSize << endl;
//
//			int sum = 0;
//			int i = 0;
//			while (i, 3)
//			{
//				sum += myVector[i];
//				i++;
//			}
//				
//		}
//	
//
//	}
//
//	{
//	int sum = 0;
//	int i = 0;
//	
//	int selection{ 0 };
//	do
//	{
//		system("cls");
//		cout << "What do you like? : \n";
//		cout << "1) Red\n";
//		cout << "2) Blue\n";
//		cout << "3) Black\n";
//		cout << "4) White\n";
//		cin >> selection;
//	} 
//	while (4 > selection || selection > 0);
//	
//	cout << " you like " << selection << endl;
//
//	
//	
//	
//	
//	
//	}
//	{
//		do
//		{
//			system("cls");
//			int a, b{ 0 };
//			cout << "put number [A B} : \n";
//			cin >> a >> b;
//
//			cout << "A + B = " << a + b << endl;
//			cout << "Quit?(Y/N) : ";
//			char q = ' ';
//			cin >> q;
//			if (q == 'Y')
//			{
//
//				break;
//			}
//		} while (1);
//
//
//
//
//
//	}
//
//
//
//
//}