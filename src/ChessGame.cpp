#include "ChessGame.hpp"

ChessGame::ChessGame()
    : whitePlayer(Color::White),
    blackPlayer(Color::Black),
    currentTurn(Color::White)
{
}

void ChessGame::init()
{
    // Set up the initial chess position here.
}

Board& ChessGame::getBoard()
{
    return board;
}

const Board& ChessGame::getBoard() const
{
    return board;
}

Color ChessGame::getCurrentTurn() const
{
	return currentTurn;
}

bool ChessGame::makeMove(Position from, Position to)
{
    Piece* piece = board.getPiece(from);

    if (piece == nullptr)
        return false;

    // Is it the correct player's turn?
    if (piece->getColor() != currentTurn)
        return false;

    // Ask the board/piece whether the move is possible
    if (!piece->isValidMove(to))
        return false;

    // Actually move it
    board.movePiece(from, to);

    // Switch player
    currentTurn =
        currentTurn == Color::White
        ? Color::Black
        : Color::White;

    return true;
}