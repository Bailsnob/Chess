#include <iostream>
#include "Knight.h"

Knight::Knight(Player* player, Position* pos)
	: Piece(player, pos)
{
	std::cout << "Knight()" << std::endl;
}
