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
			// TODO: TicTacToe ASCII Art
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

			cout << "Choose a cell: ";
			int chosenCell = 0;
			cin >> chosenCell;
			// TODO: Duplicate input handling

			if (currentPlayer == 1) {
				if (chosenCell == 1)
					tempBoard.setSign(0, 0, playerOne_Sign);
				else if (chosenCell == 2)
					tempBoard.setSign(0, 1, playerOne_Sign);
				else if (chosenCell == 3)
					tempBoard.setSign(0, 2, playerOne_Sign);
				else if (chosenCell == 4)
					tempBoard.setSign(1, 0, playerOne_Sign);
				else if (chosenCell == 5)
					tempBoard.setSign(1, 1, playerOne_Sign);
				else if (chosenCell == 6)
					tempBoard.setSign(1, 2, playerOne_Sign);
				else if (chosenCell == 7)
					tempBoard.setSign(2, 0, playerOne_Sign);
				else if (chosenCell == 8)
					tempBoard.setSign(2, 1, playerOne_Sign);
				else if (chosenCell == 9)
					tempBoard.setSign(2, 2, playerOne_Sign);
				currentPlayer = 2;
			}
			else {
				if (chosenCell == 1)
					tempBoard.setSign(0, 0, playerTwo_Sign);
				else if (chosenCell == 2)
					tempBoard.setSign(0, 1, playerTwo_Sign);
				else if (chosenCell == 3)
					tempBoard.setSign(0, 2, playerTwo_Sign);
				else if (chosenCell == 4)
					tempBoard.setSign(1, 0, playerTwo_Sign);
				else if (chosenCell == 5)
					tempBoard.setSign(1, 1, playerTwo_Sign);
				else if (chosenCell == 6)
					tempBoard.setSign(1, 2, playerTwo_Sign);
				else if (chosenCell == 7)
					tempBoard.setSign(2, 0, playerTwo_Sign);
				else if (chosenCell == 8)
					tempBoard.setSign(2, 1, playerTwo_Sign);
				else if (chosenCell == 9)
					tempBoard.setSign(2, 2, playerTwo_Sign);
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
