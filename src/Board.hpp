#pragma once

#include "Piece.hpp"
#include "Pawn.hpp"
#include "Rook.hpp"
#include "Config.hpp"

class Board
{
public:
	Board();

	void createPiece(Piece* piece, Position position);

	Piece* getPiece(Position position) const;
	
	bool isValidMove(Position from, Position to) const;

	bool movePiece(Position from, Position to);

	void drawPieces(sf::RenderWindow& window);

private:
	Piece* squares[Config::BOARD_SIZE][Config::BOARD_SIZE];
};