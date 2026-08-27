#pragma once

#include "Piece.hpp"

class Knight : public Piece
{
public:
	Knight(Color color, Position position);
	bool isValidMove(Position target) const override;
	void move() override;
	void render(sf::RenderWindow& window) override;
};