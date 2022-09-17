#include <iostream>
#include "Rook.h"

Rook::Rook(Player* player, Position* pos)
	: Piece(player, pos)
{
	std::cout << "Rook()" << std::endl;
}
