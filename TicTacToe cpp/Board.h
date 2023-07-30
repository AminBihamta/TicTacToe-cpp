#pragma once
#include "Cell.h"
class Board : public Cell
{
private:
	Cell cells[3][3];
public:
	Board();
	void setSign(int x, int y, char _sign);
	char getSign(int x, int y) const;


};

