#include <iostream>
#include "Cell.h"
#include "Board.h"
using namespace std;

int main()
{
	int playerOne_Score = 0;
	int playerTwo_Score = 0;
	const char playerOne_Sign = 'X';
	const char playerTwo_sign = 'O';

	Board tempBoard;

	cout << "|" << tempBoard.getSign(0, 0) << "|" << tempBoard.getSign(0, 1) << "|" << tempBoard.getSign(0, 2) << "|" << endl;
	cout << "|" << tempBoard.getSign(1, 0) << "|" << tempBoard.getSign(1, 1) << "|" << tempBoard.getSign(1, 2) << "|" << endl;
	cout << "|" << tempBoard.getSign(2, 0) << "|" << tempBoard.getSign(2, 1) << "|" << tempBoard.getSign(2, 2) << "|" << endl;

	cout << "Player one's turn" << endl;
	cout << "Choose a cell: " << endl;
	
}
