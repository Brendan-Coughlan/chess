#pragma once

#include "Piece.hpp"

class Pawn : public Piece
{
public:
	Pawn(Color color, Position position);
	bool isValidMove(Position target) const override;
    void move() override;
	void render(sf::RenderWindow& window) override;
};