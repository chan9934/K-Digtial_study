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
//// *1 enum ���� Ÿ���̶� �Ҹ���, enum ���� (ex: void PieceType1 chess)  chess�� ������ �ݵ�� enum�� �ش� �ϴ� ���� ���� �� �ִ�. �� ���� ���ɼ��� �ٿ��ش�.
//// *2 �Ϲ� enum type�� ���������� ������ �Ǿ��־� �ش� ������ �������� ���� ������ �ȵȴ�.
//// *3 enum class type�� ������ ���������� ������ �Ǿ��־� �ش� ������ �������ε� ���� ������ �����ϴ�, ������ enum class���� ������ ������ ��� �Ұ�� ����������(::)����Ͽ� �������� ����������Ѵ�.
//// *4 �Ϲ� enum �������� �ڵ����� ���������� �����Ǿ� �ٸ� enum �������� �ǹ̰� ���� �ʾƵ� �񱳰� �����ϴ�(������)
//// *5 �ݸ� enum class type�� �� ������ �������� ���� �ٸ� ������ ������ ����ȯ�� ������ Ÿ���� �޶� �񱳰� �Ұ����ϴ�(������ ���ɼ��� ���ܽ�Ų��.)
//// *6 enum class�� type�� �������� �ʾұ⿡ ����ȯ ���̴� ����� �ȵȴ�.
//// *7 �̷������� �� ��ȯ�� ���� type�� ��������� ����� ����
//// *8 ������ ������� ���ڰ� 1�� ����, ���� �ȳ����� 0���� ����
//// *9 �̷������� �� ��ȯ�� ���� �� �� �ִ�. �̰� ��� Ȱ���ϴ����� ���� �𸣰ڴ�.
//// *10 �ռ� ����ȭ ��Ų Employee type�� ������ Ȱ�� anEmployee��� �̸����� Employee�� ������ ����ϰ� ����
//// *11 ������ anEmployee�� .�� ����ϸ� ����ȭ �ߴ� ������ ��� �� �� �ִ�.(char type�� firstInitial ���� ������ �� �ִ�.)