#include <iostream>
#include "Piece.h"

// TODO: temporary for testing
//Piece::Piece()
//{
//	std::cout << "Piece()" << std::endl;
//}

Piece::Piece(Player& player, Position* pos)
	: player(player), pos(pos)
{
	std::cout << "Piece()" << std::endl;
}
