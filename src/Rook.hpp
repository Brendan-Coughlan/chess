#pragma once

#include "Piece.hpp"

class Rook : public Piece
{
public:
	Rook(bool isWhite, Position position);
	bool isValidMove(Position target) const override;
	void move() override;
	void render(sf::RenderWindow& window) override;
};