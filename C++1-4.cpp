//#include <iostream>
//#include "employeestruct.h"
//
//using namespace std;
//
//enum PieceType1 // *1
//{
//	PieceTypeKing = 1,
//	PieceTypeQueen,
//	PieceTypeRook = 10,
//	PieceTypePawn
//
//};
//
//enum PieceType2 // *1
//{
//	PieceTypeKing2 = 1,
//	PieceTypeQueen2,
//	PieceTypeRook2 = 10,
//	PieceTypePawn2 // *8
//
//};
//
//enum class PieceType3
//{
//	King = 1,
//	Queen,
//	Rook = 10,
//	Pawn
//	
//};
//
//enum class PieceType4 : unsigned long // * 9
//{
//	King4 = 1,
//	Queen4,
//	Rook4 = 10,
//	Pawn4
//};
//
//class PieceTypeRook
//{};
//
//class Rook
//{};
//
//class king
//{};
//
//class king4
//{};
//
//int main()
//{
//
//
//
//	PieceType1 myPiece = PieceTypeRook;
//	int a = myPiece;
//
//	//PieceTypeRook r;// *2
//	
//
//
//	cout << myPiece << endl;
//
//	Rook r;// *3
//
//	PieceType1 myPiece1 = PieceTypeKing;
//	PieceType2 myPiece2 = PieceTypeKing2;
//
//	myPiece1 == myPiece2; // *4
//
//	PieceType3 Piece = PieceType3::Rook;
//
//	PieceType3 myPiece3 = PieceType3::King;
//	PieceType4 myPiece4 = PieceType4::King4;
//
//	// myPiece3 == myPiece4 // *5
//
//	
//
//
//	// cout << Piece << endl; // *6
//	int Piece1{ static_cast<int>(Piece) };
//
//	cout << Piece1 << endl; // *7
//
//	Employee anEmployee; // *10
//	anEmployee.firstInitial = 'M'; // * 11
//	anEmployee.lastInitial = 'G';
//	anEmployee.employeeNumber = 42;
//	anEmployee.salary = 80000;
//
//	cout << "Employee: " << anEmployee.firstInitial << anEmployee.lastInitial << endl;
//	cout << "Number: " << anEmployee.employeeNumber << endl;
//	cout << "Salary: $" << anEmployee.salary << endl;
//
//
//}
//
//
//
//
//
//
//
//
//// *1 enum 열거 타입이라 불리며, enum 사용시 (ex: void PieceType1 chess)  chess의 변수는 반드시 enum에 해당 하는 값만 넣을 수 있다. 즉 버그 가능성을 줄여준다.
//// *2 일반 enum type은 전역변수로 지정이 되어있어 해당 변수의 네임으로 변수 생성이 안된다.
//// *3 enum class type의 변수는 지역변수로 지정이 되어있어 해당 변수의 네임으로도 변수 생성이 가능하다, 하지만 enum class에서 지정한 변수를 사용 할경우 접근지정자(::)사용하여 스코프를 지정해줘야한다.
//// *4 일반 enum 열거형은 자동으로 정수형으로 설정되어 다른 enum 열거형과 의미가 같지 않아도 비교가 가능하다(문제점)
//// *5 반면 enum class type의 더 엄격한 열거형은 서로 다른 열거형 끼리의 형변환이 없는한 타입이 달라 비교가 불가능하다(버그의 가능성을 차단시킨다.)
//// *6 enum class는 type이 정해지지 않았기에 형변환 없이는 출력이 안된다.
//// *7 이런식으로 형 변환을 통해 type을 설정해줘야 출력이 가능
//// *8 변수의 순서대로 숫자가 1씩 증가, 숫자 안넣으면 0부터 시작
//// *9 이런식으로 형 변환을 설정 할 수 있다. 이걸 어떻게 활용하는지는 아직 모르겠다.
//// *10 앞서 구조화 시킨 Employee type의 변수를 활용 anEmployee라는 이름으로 Employee의 구조를 사용하겠 선언
//// *11 선언한 anEmployee에 .을 사용하면 구조화 했던 변수를 사용 할 수 있다.(char type의 firstInitial 등을 가져올 수 있다.)