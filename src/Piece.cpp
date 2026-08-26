#include "Piece.hpp"

Piece::Piece(Position position)
    : position(position)
{
}

Position Piece::getPosition() const
{
	return position;
}

void Piece::setPosition(Position position)
{
	this->position = position;
}