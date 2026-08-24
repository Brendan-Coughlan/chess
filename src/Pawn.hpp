#pragma once

#include "Piece.hpp"

class Pawn : public Piece
{
public:
	Pawn(Position position);
    void move() override;
	void render(sf::RenderWindow& window) override;
};