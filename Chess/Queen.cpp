#include <iostream>
#include "Queen.h"

Queen::Queen(Player& player, Position* pos)
	: Piece(player, pos)
{
	std::cout << "Queen()" << std::endl;
}
