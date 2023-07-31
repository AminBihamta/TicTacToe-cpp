#include "Board.h"

Board::Board() {
	cells[0].setSign('1');
	cells[1].setSign('2');
	cells[2].setSign('3');
	cells[3].setSign('4');
	cells[4].setSign('5');
	cells[5].setSign('6');
	cells[6].setSign('7');
	cells[7].setSign('8');
	cells[8].setSign('9');
}

void Board::setSign(int index, char _sign) {
    cells[index].setSign(_sign);
}

char Board::getSign(int index) const {
	return cells[index].getSign();
}