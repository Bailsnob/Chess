#pragma once
#include "Player.h"

class Game;//forward declaration

class HumanPlayer : public Player
{
public:
	HumanPlayer(Game& game);//note: you can do an inline forward declaration in this case in front of "Game&"

private:

};
