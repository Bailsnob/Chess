#include <iostream>
#include "Player.h"
#include "Game.h"

Player::Player(Game& game)
	: game{ game }
{
	std::cout << "Player()" << std::endl;
}
