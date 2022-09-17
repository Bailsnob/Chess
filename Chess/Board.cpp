#include <iostream>
#include "Board.h"
#include "Rook.h"
#include "Bishop.h"
#include "Pawn.h"
#include "Queen.h"
#include "King.h"
#include "Knight.h"

Board::Board(Game* game)
	: game(game)
{
	std::cout << "Board()" << std::endl;

	//human's
	pieces.emplace_back((Piece*)(new Rook(game->getHumanPlayer(), nullptr)));
	pieces.emplace_back((Piece*)(new Rook(game->getHumanPlayer(), nullptr)));
	pieces.emplace_back((Piece*)(new Knight(game->getHumanPlayer(), nullptr)));
	pieces.emplace_back((Piece*)(new Knight(game->getHumanPlayer(), nullptr)));
	pieces.emplace_back((Piece*)(new Bishop(game->getHumanPlayer(), nullptr)));
	pieces.emplace_back((Piece*)(new Bishop(game->getHumanPlayer(), nullptr)));
	pieces.emplace_back((Piece*)(new King(game->getHumanPlayer(), nullptr)));
	pieces.emplace_back((Piece*)(new Queen(game->getHumanPlayer(), nullptr)));
	pieces.emplace_back((Piece*)(new Pawn(game->getHumanPlayer(), nullptr)));
	pieces.emplace_back((Piece*)(new Pawn(game->getHumanPlayer(), nullptr)));
	pieces.emplace_back((Piece*)(new Pawn(game->getHumanPlayer(), nullptr)));
	pieces.emplace_back((Piece*)(new Pawn(game->getHumanPlayer(), nullptr)));
	pieces.emplace_back((Piece*)(new Pawn(game->getHumanPlayer(), nullptr)));
	pieces.emplace_back((Piece*)(new Pawn(game->getHumanPlayer(), nullptr)));
	pieces.emplace_back((Piece*)(new Pawn(game->getHumanPlayer(), nullptr)));
	pieces.emplace_back((Piece*)(new Pawn(game->getHumanPlayer(), nullptr)));

	//computer's
	pieces.emplace_back((Piece*)(new Rook(game->getComputerPlayer(), nullptr)));
	pieces.emplace_back((Piece*)(new Rook(game->getComputerPlayer(), nullptr)));
	pieces.emplace_back((Piece*)(new Knight(game->getComputerPlayer(), nullptr)));
	pieces.emplace_back((Piece*)(new Knight(game->getComputerPlayer(), nullptr)));
	pieces.emplace_back((Piece*)(new Bishop(game->getComputerPlayer(), nullptr)));
	pieces.emplace_back((Piece*)(new Bishop(game->getComputerPlayer(), nullptr)));
	pieces.emplace_back((Piece*)(new King(game->getComputerPlayer(), nullptr)));
	pieces.emplace_back((Piece*)(new Queen(game->getComputerPlayer(), nullptr)));
	pieces.emplace_back((Piece*)(new Pawn(game->getComputerPlayer(), nullptr)));
	pieces.emplace_back((Piece*)(new Pawn(game->getComputerPlayer(), nullptr)));
	pieces.emplace_back((Piece*)(new Pawn(game->getComputerPlayer(), nullptr)));
	pieces.emplace_back((Piece*)(new Pawn(game->getComputerPlayer(), nullptr)));
	pieces.emplace_back((Piece*)(new Pawn(game->getComputerPlayer(), nullptr)));
	pieces.emplace_back((Piece*)(new Pawn(game->getComputerPlayer(), nullptr)));
	pieces.emplace_back((Piece*)(new Pawn(game->getComputerPlayer(), nullptr)));
	pieces.emplace_back((Piece*)(new Pawn(game->getComputerPlayer(), nullptr)));
}
