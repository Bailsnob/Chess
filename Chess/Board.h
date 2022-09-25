#pragma once
#include <vector>
#include "Piece.h"

class Game;

class Board
{
public:
	Board(Game& game);//this and line 5 are a promise that it will included in game.cpp

private:
	Game& game;
	std::vector<Piece*> pieces;
};
