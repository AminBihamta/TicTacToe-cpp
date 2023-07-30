#include "Board.h"

Board::Board() {
	cells[0][0].setSign('1');
	cells[0][1].setSign('2');
	cells[0][2].setSign('3');
	cells[1][0].setSign('4');
	cells[1][1].setSign('5');
	cells[1][2].setSign('6');
	cells[2][0].setSign('7');
	cells[2][1].setSign('8');
	cells[2][2].setSign('9');
}

void Board::setSign(int x, int y, char _sign) {
	cells[x][y].setSign(_sign);
}

char Board::getSign(int x, int y) const {
	return cells[x][y].getSign();
}