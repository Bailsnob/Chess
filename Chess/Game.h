#pragma once
#include "HumanPlayer.h"
#include "ComputerPlayer.h"
#include "Board.h"

class Board;

class Game
{
public:
	Game();
	Player* getHumanPlayer() {return (Player*) & human; }
	Player* getComputerPlayer() { return (Player*) & computer; }

private:
	Board* board;
	HumanPlayer human;
	ComputerPlayer computer;
//	friend class Board;
};
