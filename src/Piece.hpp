#pragma once

#include <SFML/Graphics.hpp>
#include "Position.hpp"

class Piece
{
public:
	Piece(Position position);
    virtual void move() = 0;
	virtual void render(sf::RenderWindow& window) = 0;
protected:
	Position position;
};