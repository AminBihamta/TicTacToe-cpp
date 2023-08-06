#include <iostream>
#include <string>
#include "Cell.h"
#include "Board.h"
using namespace std;





bool winnerChecker(Board tempBoard) {

	int x = 0;
	int y = 1;
	int z = 2;

	for (int i = 0; i < 3; i++) {
		if (tempBoard.getSign(x) == tempBoard.getSign(y) && tempBoard.getSign(x) == tempBoard.getSign(z) && tempBoard.getSign(x) != ' ') {
			return true;
		}
		else {
			x += 3;
			y += 3;
			z += 3;
		}
	}

	x = 0;
	y = 3;
	z = 6;


	for (int i = 0; i < 3; i++) {
		if (tempBoard.getSign(x) == tempBoard.getSign(y) && tempBoard.getSign(x) == tempBoard.getSign(z) && tempBoard.getSign(x) != ' ') {
			return true;
		}
		else {
			x++;
			y++;
			z++;
		}
	}

	if (tempBoard.getSign(0) == tempBoard.getSign(4) && tempBoard.getSign(0) == tempBoard.getSign(8) && tempBoard.getSign(0) != ' ') {
		return true;
	}

	if (tempBoard.getSign(2) == tempBoard.getSign(4) && tempBoard.getSign(2) == tempBoard.getSign(6) && tempBoard.getSign(2) != ' ') {
		return true;
	}

	return false;
}

void ticTacToePrinter() {
	system("cls");

	cout << R"(

		 ________  __            ________                      ________                     
		|        \|  \          |        \                    |        \                    
		 \$$$$$$$$ \$$  _______  \$$$$$$$$  ______    _______  \$$$$$$$$  ______    ______  
		   | $$   |  \ /       \   | $$    |      \  /       \   | $$    /      \  /      \ 
		   | $$   | $$|  $$$$$$$   | $$     \$$$$$$\|  $$$$$$$   | $$   |  $$$$$$\|  $$$$$$\
		   | $$   | $$| $$         | $$    /      $$| $$         | $$   | $$  | $$| $$    $$
		   | $$   | $$| $$_____    | $$   |  $$$$$$$| $$_____    | $$   | $$__/ $$| $$$$$$$$
		   | $$   | $$ \$$     \   | $$    \$$    $$ \$$     \   | $$    \$$    $$ \$$     \
		    \$$    \$$  \$$$$$$$    \$$     \$$$$$$$  \$$$$$$$    \$$     \$$$$$$   \$$$$$$$
		                                                                                    
                                                                                    
                                                                                    

)";

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

			ticTacToePrinter();

			cout << "Current Round: " << roundCount << endl;
			cout << "Player one's score: " << playerOne_Score << endl;
			cout << "Player two's score: " << playerTwo_Score << endl;
			cout << endl;


			cout << "|" << tempBoard.getSign(0) << "|" << tempBoard.getSign(1) << "|" << tempBoard.getSign(2) << "|" << endl;
			cout << "|" << tempBoard.getSign(3) << "|" << tempBoard.getSign(4) << "|" << tempBoard.getSign(5) << "|" << endl;
			cout << "|" << tempBoard.getSign(6) << "|" << tempBoard.getSign(7) << "|" << tempBoard.getSign(8) << "|" << endl;

			if (currentPlayer == 1)
				cout << "Player one's turn" << endl;
			else
				cout << "Player two's turn" << endl;
			L1:
			cout << "Choose a cell: ";
			int chosenCell = 0;
			// TODO: Wrong Input Handling
			cin >> chosenCell;

			if (tempBoard.getSign(chosenCell - 1) != 'X' && tempBoard.getSign(chosenCell - 1) != 'O') {
				if (currentPlayer == 1) {
					tempBoard.setSign(chosenCell - 1, playerOne_Sign);
					currentPlayer = 2;
				}
				else {
					tempBoard.setSign(chosenCell - 1, playerTwo_Sign);
					currentPlayer = 1;
				}
			}
			else {
				cout << endl << "Cell already occupied. ";
				goto L1;
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
		cin.ignore();
		cin.get();

		if (playerOne_Score >= 2)
			break;
		else if (playerTwo_Score >= 2)
			break;

		roundCount++;
	}

	ticTacToePrinter();

	if (playerOne_Score >= 2)
		cout << "Overall winner: player one";
	else
		cout << "Overall winner: player two";
	
}
