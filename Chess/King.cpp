#include <iostream>
#include "King.h"

King::King(Player& player, Position* pos)
	: Piece(player, pos)
{
	std::cout << "King()" << std::endl;
}
