#pragma once
#include "HumanPlayer.h"
#include "ComputerPlayer.h"
#include "Board.h"

class Game
{
public:
	Game();

	Board board;
	HumanPlayer human;
	ComputerPlayer computer;
};
