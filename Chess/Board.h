#pragma once
#include <vector>
#include "Piece.h"
#include "Game.h"

class Game;

class Board
{
public:
	Board(Game* game);

private:
	Game* game;
	std::vector<Piece*> pieces;
};
