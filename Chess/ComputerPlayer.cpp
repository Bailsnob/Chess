#include "ComputerPlayer.h"
#include "Rook.h"
#include "Bishop.h"
#include "Pawn.h"
#include "Queen.h"
#include "King.h"
#include "Knight.h"

ComputerPlayer::ComputerPlayer()
{
	pieces.emplace_back(
		new Rook(this, nullptr),
		new Rook(this, nullptr),
		new Knight(this, nullptr),
		new Knight(this, nullptr),
		new Bishop(this, nullptr),
		new Bishop(this, nullptr),
		new Pawn(this, nullptr),
		new Pawn(this, nullptr),
		new Pawn(this, nullptr),
		new Pawn(this, nullptr),
		new Pawn(this, nullptr),
		new Pawn(this, nullptr),
		new Pawn(this, nullptr),
		new Pawn(this, nullptr),
		new King(this, nullptr),
		new Queen(this, nullptr));
}
