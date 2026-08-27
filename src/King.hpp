#pragma once

#include "Piece.hpp"

class King : public Piece
{
public:
	King(Color color, Position position);
	bool isValidMove(Position target) const override;
	void move() override;
	void render(sf::RenderWindow& window) override;
};