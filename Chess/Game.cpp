#include <iostream>
#include "Game.h"

Game::Game()
	: board(new Board(this))
{
	std::cout << "Game()" << std::endl;
}
