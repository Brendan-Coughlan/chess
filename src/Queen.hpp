#pragma once

#include "Piece.hpp"

class Queen : public Piece
{
public:
	Queen(bool isWhite, Position position);
	bool isValidMove(Position target) const override;
	void move() override;
	void render(sf::RenderWindow& window) override;
};