#pragma once

#include "Piece.hpp"

class Rook : public Piece
{
public:
	Rook(Color color, Position position);
	bool isValidMove(Position target) const override;
	void move() override;
	void render(sf::RenderWindow& window) override;
};