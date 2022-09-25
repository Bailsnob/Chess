#include <iostream>
#include "Game.h"

Game::Game()
	: board{ *this } //could have used parentheses; parentheses are diff than braces
	, human{ *this }
	, computer{ *this }
{
	//using parentheses is a copy constructor; makes difference when object being passed is large
	std::cout << "Game()" << std::endl;
}
