#pragma once

class Game;//forward declaration

class Player
{
public:
	Player(Game& game);

	Game& game;
};
