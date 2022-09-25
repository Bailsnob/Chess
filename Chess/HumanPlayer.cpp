#include <iostream>
#include "HumanPlayer.h"
#include "Game.h"

HumanPlayer::HumanPlayer(Game& game)
	: Player{ game }
{
	std::cout << "HumanPlayer()" << std::endl;

	
}
