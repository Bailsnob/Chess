#include <iostream>
#include "HumanPlayer.h"
#include "Rook.h"
#include "Bishop.h"
#include "Pawn.h"
#include "Queen.h"
#include "King.h"
#include "Knight.h"

HumanPlayer::HumanPlayer()
{
	std::cout << "HumanPlayer()" << std::endl;

	pieces.emplace_back((Piece*)(new Rook(this, nullptr)));
	pieces.emplace_back((Piece*)(new Rook(this, nullptr)));
	pieces.emplace_back((Piece*)(new Knight(this, nullptr)));
	pieces.emplace_back((Piece*)(new Knight(this, nullptr)));
	pieces.emplace_back((Piece*)(new Bishop(this, nullptr)));
	pieces.emplace_back((Piece*)(new Bishop(this, nullptr)));
	pieces.emplace_back((Piece*)(new King(this, nullptr)));
	pieces.emplace_back((Piece*)(new Queen(this, nullptr)));
	pieces.emplace_back((Piece*)(new Pawn(this, nullptr)));
	pieces.emplace_back((Piece*)(new Pawn(this, nullptr)));
	pieces.emplace_back((Piece*)(new Pawn(this, nullptr)));
	pieces.emplace_back((Piece*)(new Pawn(this, nullptr)));
	pieces.emplace_back((Piece*)(new Pawn(this, nullptr)));
	pieces.emplace_back((Piece*)(new Pawn(this, nullptr)));
	pieces.emplace_back((Piece*)(new Pawn(this, nullptr)));
	pieces.emplace_back((Piece*)(new Pawn(this, nullptr)));
}
