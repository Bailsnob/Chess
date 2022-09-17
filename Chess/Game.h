#pragma once
#include "HumanPlayer.h"
#include "ComputerPlayer.h"
#include "Board.h"

class Game
{
public:
	Game();

private:
	HumanPlayer human;
	ComputerPlayer computer;
	Board board;
};
