#include <iostream>
#include "Pawn.h"

Pawn::Pawn(Player* player, Position* pos)
	: Piece(player, pos)
{
	std::cout << "Pawn()" << std::endl;
}
