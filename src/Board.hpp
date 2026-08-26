#pragma once

#include "Piece.hpp"
#include "Pawn.hpp"
#include "Rook.hpp"
#include "Config.hpp"

class Board
{
public:
	Board();

	Piece* getPiece(Position position) const;

	bool movePiece(Position from, Position to);

	void render(sf::RenderWindow& window);

private:
	Piece* squares[Config::BOARD_SIZE][Config::BOARD_SIZE];
};