#include "Cell.h"

Cell::Cell() {
	sign = ' ';
}

void Cell::setSign(char _sign) {
	sign = _sign;
}

char Cell::getSign() const {
	return sign;
}