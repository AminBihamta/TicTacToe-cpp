#include <iostream>
#include "Cell.h"
#include "Board.h"
using namespace std;

bool winnerChecker(Board tempBoard) {
	if (tempBoard.getSign(0, 0) == tempBoard.getSign(0, 1) &&
		tempBoard.getSign(0, 0) == tempBoard.getSign(0, 2) && tempBoard.getSign(0, 0) != ' ')
		return true;
	else if (tempBoard.getSign(1, 0) == tempBoard.getSign(1, 1) &&
		tempBoard.getSign(1, 0) == tempBoard.getSign(1, 2) && tempBoard.getSign(1, 0) != ' ')
		return true;
	else if (tempBoard.getSign(2, 0) == tempBoard.getSign(2, 1) &&
		tempBoard.getSign(2, 0) == tempBoard.getSign(2, 2) && tempBoard.getSign(2, 0) != ' ')
		return true;

	else if (tempBoard.getSign(0, 0) == tempBoard.getSign(1, 0) &&
		tempBoard.getSign(0, 0) == tempBoard.getSign(2, 0) && tempBoard.getSign(0, 0) != ' ')
		return true;
	else if (tempBoard.getSign(0, 1) == tempBoard.getSign(1, 1) &&
		tempBoard.getSign(0, 1) == tempBoard.getSign(2, 1) && tempBoard.getSign(0, 1) != ' ')
		return true;
	else if (tempBoard.getSign(0, 2) == tempBoard.getSign(1, 2) &&
		tempBoard.getSign(0, 2) == tempBoard.getSign(2, 2) && tempBoard.getSign(0, 2) != ' ')
		return true;

	else if (tempBoard.getSign(0, 0) == tempBoard.getSign(1, 1) &&
		tempBoard.getSign(0, 0) == tempBoard.getSign(2, 2) && tempBoard.getSign(0, 0) != ' ')
		return true;
	else if (tempBoard.getSign(0, 2) == tempBoard.getSign(1, 1) &&
		tempBoard.getSign(0, 2) == tempBoard.getSign(2, 0) && tempBoard.getSign(0, 2) != ' ')
		return true;

	return false;
}

int main()
{
	int playerOne_Score = 0;
	int playerTwo_Score = 0;
	const char playerOne_Sign = 'X';
	const char playerTwo_Sign = 'O';
	int roundCount = 1;
	int currentPlayer = 1;


	while (roundCount < 4) {

		Board tempBoard;
		while (!winnerChecker(tempBoard)) {

			system("cls");

			cout << "Current Round: " << roundCount << endl;
			cout << "Player one's score: " << playerOne_Score << endl;
			cout << "Player two's score: " << playerTwo_Score << endl;
			cout << endl;


			cout << "|" << tempBoard.getSign(0, 0) << "|" << tempBoard.getSign(0, 1) << "|" << tempBoard.getSign(0, 2) << "|" << endl;
			cout << "|" << tempBoard.getSign(1, 0) << "|" << tempBoard.getSign(1, 1) << "|" << tempBoard.getSign(1, 2) << "|" << endl;
			cout << "|" << tempBoard.getSign(2, 0) << "|" << tempBoard.getSign(2, 1) << "|" << tempBoard.getSign(2, 2) << "|" << endl;

			if (currentPlayer == 1)
				cout << "Player one's turn" << endl;
			else
				cout << "Player two's turn" << endl;
			L1:
			cout << "Choose a cell: ";
			int chosenCell = 0;
			cin >> chosenCell;

			if (currentPlayer == 1) {

				switch (chosenCell) {
				case 1:
					if (tempBoard.getSign(0, 0) != 'X' && tempBoard.getSign(0, 0) != 'O') {
						tempBoard.setSign(0, 0, playerOne_Sign);
					}
					else {
						cout << endl << "Cell already occupied. ";
						goto L1;
					}
					break;
				case 2:
					if (tempBoard.getSign(0, 1) != 'X' && tempBoard.getSign(0, 1) != 'O') {
						tempBoard.setSign(0, 1, playerOne_Sign);
					}
					else {
						cout << endl << "Cell already occupied. ";
						goto L1;
					}
					break;
				case 3:
					if (tempBoard.getSign(0, 2) != 'X' && tempBoard.getSign(0, 2) != 'O') {
						tempBoard.setSign(0, 2, playerOne_Sign);
					}
					else {
						cout << endl << "Cell already occupied. ";
						goto L1;
					}
					break;
				case 4:
					if (tempBoard.getSign(1, 0) != 'X' && tempBoard.getSign(1, 0) != 'O') {
						tempBoard.setSign(1, 0, playerOne_Sign);
					}
					else {
						cout << endl << "Cell already occupied. ";
						goto L1;
					}
					break;
				case 5:
					if (tempBoard.getSign(1, 1) != 'X' && tempBoard.getSign(1, 1) != 'O') {
						tempBoard.setSign(1, 1, playerOne_Sign);
					}
					else {
						cout << endl << "Cell already occupied. ";
						goto L1;
					}
					break;
				case 6:
					if (tempBoard.getSign(1, 2) != 'X' && tempBoard.getSign(1, 2) != 'O') {
						tempBoard.setSign(1, 2, playerOne_Sign);
					}
					else {
						cout << endl << "Cell already occupied. ";
						goto L1;
					}
					break;
				case 7:
					if (tempBoard.getSign(2, 0) != 'X' && tempBoard.getSign(2, 0) != 'O') {
						tempBoard.setSign(2, 0, playerOne_Sign);
					}
					else {
						cout << endl << "Cell already occupied. ";
						goto L1;
					}
					break;
				case 8:
					if (tempBoard.getSign(2, 1) != 'X' && tempBoard.getSign(2, 1) != 'O') {
						tempBoard.setSign(2, 1, playerOne_Sign);
					}
					else {
						cout << endl << "Cell already occupied. ";
						goto L1;
					}
					break;
				case 9:
					if (tempBoard.getSign(2, 2) != 'X' && tempBoard.getSign(2, 2) != 'O') {
						tempBoard.setSign(2, 2, playerOne_Sign);
					}
					else {
						cout << endl << "Cell already occupied. ";
						goto L1;
					}
					break;
				}
				currentPlayer = 2;
			}
			else {
				switch (chosenCell) {
				case 1:
					if (tempBoard.getSign(0, 0) != 'X' && tempBoard.getSign(0, 0) != 'O') {
						tempBoard.setSign(0, 0, playerTwo_Sign);
					}
					else {
						cout << endl << "Cell already occupied. ";
						goto L1;
					}
					break;
				case 2:
					if (tempBoard.getSign(0, 1) != 'X' && tempBoard.getSign(0, 1) != 'O') {
						tempBoard.setSign(0, 1, playerTwo_Sign);
					}
					else {
						cout << endl << "Cell already occupied. ";
						goto L1;
					}
					break;
				case 3:
					if (tempBoard.getSign(0, 2) != 'X' && tempBoard.getSign(0, 2) != 'O') {
						tempBoard.setSign(0, 2, playerTwo_Sign);
					}
					else {
						cout << endl << "Cell already occupied. ";
						goto L1;
					}
					break;
				case 4:
					if (tempBoard.getSign(1, 0) != 'X' && tempBoard.getSign(1, 0) != 'O') {
						tempBoard.setSign(1, 0, playerTwo_Sign);
					}
					else {
						cout << endl << "Cell already occupied. ";
						goto L1;
					}
					break;
				case 5:
					if (tempBoard.getSign(1, 1) != 'X' && tempBoard.getSign(1, 1) != 'O') {
						tempBoard.setSign(1, 1, playerTwo_Sign);
					}
					else {
						cout << endl << "Cell already occupied. ";
						goto L1;
					}
					break;
				case 6:
					if (tempBoard.getSign(1, 2) != 'X' && tempBoard.getSign(1, 2) != 'O') {
						tempBoard.setSign(1, 2, playerTwo_Sign);
					}
					else {
						cout << endl << "Cell already occupied. ";
						goto L1;
					}
					break;
				case 7:
					if (tempBoard.getSign(2, 0) != 'X' && tempBoard.getSign(2, 0) != 'O') {
						tempBoard.setSign(2, 0, playerTwo_Sign);
					}
					else {
						cout << endl << "Cell already occupied. ";
						goto L1;
					}
					break;
				case 8:
					if (tempBoard.getSign(2, 1) != 'X' && tempBoard.getSign(2, 1) != 'O') {
						tempBoard.setSign(2, 1, playerTwo_Sign);
					}
					else {
						cout << endl << "Cell already occupied. ";
						goto L1;
					}
					break;
				case 9:
					if (tempBoard.getSign(2, 2) != 'X' && tempBoard.getSign(2, 2) != 'O') {
						tempBoard.setSign(2, 2, playerTwo_Sign);
					}
					else {
						cout << endl << "Cell already occupied. ";
						goto L1;
					}
					break;
				}

				currentPlayer = 1;

			}

		}

		system("cls");
		if (currentPlayer == 2) {
			cout << "Player 1 won" << endl << endl;
			playerOne_Score++;
		}
		else {
			cout << "Player 2 won" << endl << endl;
			playerTwo_Score++;
		}
		string tempInput;
		cout << "Press enter to continue";
		cin >> tempInput;

		if (playerOne_Score >= 2)
			break;
		else if (playerTwo_Score >= 2)
			break;

		roundCount++;
	}

	system("cls");

	if (playerOne_Score >= 2)
		cout << "Overall winner: player one";
	else
		cout << "Overall winner: player two";
	
}
