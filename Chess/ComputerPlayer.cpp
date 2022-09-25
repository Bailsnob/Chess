#include <iostream>
#include "ComputerPlayer.h"
#include "Game.h"

ComputerPlayer::ComputerPlayer(Game& game)
	: Player{ game }//calling upon player constructor to hold game reference
{
	std::cout << "ComputerPlayer()" << std::endl;

}
