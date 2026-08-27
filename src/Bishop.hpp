#pragma once

#include "Piece.hpp"

class Bishop : public Piece
{
public:
	Bishop(Color color, Position position);
	bool isValidMove(Position target) const override;
	void move() override;
	void render(sf::RenderWindow& window) override;
};