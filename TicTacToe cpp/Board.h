#pragma once
#include "Cell.h"
class Board : public Cell
{
private:
	Cell cells[9];
public:
	Board();
	void setSign(int index, char _sign);
	char getSign(int index) const;
};

