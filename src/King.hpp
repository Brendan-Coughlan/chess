#pragma once

#include "Piece.hpp"

class King : public Piece
{
public:
	King(bool isWhite, Position position);
	bool isValidMove(Position target) const override;
	void move() override;
	void render(sf::RenderWindow& window) override;
};