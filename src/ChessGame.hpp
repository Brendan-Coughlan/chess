#pragma once

#include "Board.hpp"
#include "Player.hpp"
#include "Color.hpp"
#include "Position.hpp"

class ChessGame
{
public:
    ChessGame();

	void init();

    bool makeMove(Position from, Position to);

    Board& getBoard();
    const Board& getBoard() const;

    Color getCurrentTurn() const;

private:
    Board board;

    Player whitePlayer;
    Player blackPlayer;

    Color currentTurn;
};