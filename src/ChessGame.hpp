#pragma once

#include "Board.hpp"
#include "Player.hpp"
#include "Color.hpp"
#include "Position.hpp"

class ChessGame
{
public:
    ChessGame();

    bool makeMove(Position from, Position to);

    const Board& getBoard() const;

private:
    Board board;

    Player whitePlayer;
    Player blackPlayer;

    Color currentTurn;
};