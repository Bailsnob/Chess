#include <iostream>
#include "Board.h"
#include "Rook.h"
#include "Bishop.h"
#include "Pawn.h"
#include "Queen.h"
#include "King.h"
#include "Knight.h"
#include "Game.h"

Board::Board(Game& game)
	: game{ game }
{
	std::cout << "Board()" << std::endl;

	//human's
	pieces.emplace_back((Piece*)(new Rook(game.human, nullptr)));
	pieces.emplace_back((Piece*)(new Rook(game.human, nullptr)));
	pieces.emplace_back((Piece*)(new Knight(game.human, nullptr)));
	pieces.emplace_back((Piece*)(new Knight(game.human, nullptr)));
	pieces.emplace_back((Piece*)(new Bishop(game.human, nullptr)));
	pieces.emplace_back((Piece*)(new Bishop(game.human, nullptr)));
	pieces.emplace_back((Piece*)(new King(game.human, nullptr)));
	pieces.emplace_back((Piece*)(new Queen(game.human, nullptr)));
	pieces.emplace_back((Piece*)(new Pawn(game.human, nullptr)));
	pieces.emplace_back((Piece*)(new Pawn(game.human, nullptr)));
	pieces.emplace_back((Piece*)(new Pawn(game.human, nullptr)));
	pieces.emplace_back((Piece*)(new Pawn(game.human, nullptr)));
	pieces.emplace_back((Piece*)(new Pawn(game.human, nullptr)));
	pieces.emplace_back((Piece*)(new Pawn(game.human, nullptr)));
	pieces.emplace_back((Piece*)(new Pawn(game.human, nullptr)));
	pieces.emplace_back((Piece*)(new Pawn(game.human, nullptr)));

	//computer's
	pieces.emplace_back((Piece*)(new Rook(game.computer, nullptr)));
	pieces.emplace_back((Piece*)(new Rook(game.computer, nullptr)));
	pieces.emplace_back((Piece*)(new Knight(game.computer, nullptr)));
	pieces.emplace_back((Piece*)(new Knight(game.computer, nullptr)));
	pieces.emplace_back((Piece*)(new Bishop(game.computer, nullptr)));
	pieces.emplace_back((Piece*)(new Bishop(game.computer, nullptr)));
	pieces.emplace_back((Piece*)(new King(game.computer, nullptr)));
	pieces.emplace_back((Piece*)(new Queen(game.computer, nullptr)));
	pieces.emplace_back((Piece*)(new Pawn(game.computer, nullptr)));
	pieces.emplace_back((Piece*)(new Pawn(game.computer, nullptr)));
	pieces.emplace_back((Piece*)(new Pawn(game.computer, nullptr)));
	pieces.emplace_back((Piece*)(new Pawn(game.computer, nullptr)));
	pieces.emplace_back((Piece*)(new Pawn(game.computer, nullptr)));
	pieces.emplace_back((Piece*)(new Pawn(game.computer, nullptr)));
	pieces.emplace_back((Piece*)(new Pawn(game.computer, nullptr)));
	pieces.emplace_back((Piece*)(new Pawn(game.computer, nullptr)));
}
