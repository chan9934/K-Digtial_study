#include <iostream>

using namespace std;

enum class PieceType4 : unsigned long
{
	King4 = 1,
	Queen4,
	Rook4 = 10,
	Pawn4
};

int main()
{
	PieceType4 myPiece4 = PieceType4::Rook4;

	cout << myPiece4 << endl;

	return 0;
}