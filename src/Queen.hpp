#pragma once

#include "Piece.hpp"

class Queen : public Piece
{
public:
	Queen(Color color, Position position);
	bool isValidMove(Position target) const override;
	void move() override;
	void render(sf::RenderWindow& window) override;
};