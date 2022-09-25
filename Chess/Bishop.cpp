#include <iostream>
#include "Bishop.h"

Bishop::Bishop(Player& player, Position* pos)
	: Piece(player, pos)
{
	std::cout << "Bishop()" << std::endl;
}
