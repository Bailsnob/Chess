#pragma once
#include <vector>
#include "Piece.h"

class Piece;

class Player
{
public:
	Player();

protected:
	std::vector<Piece*> pieces;

};
