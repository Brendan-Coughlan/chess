#pragma once

#include <SFML/Graphics.hpp>
#include "Position.hpp"

class Piece
{
public:
	Piece(Position position);
    virtual void move() = 0;
	virtual void render(sf::RenderWindow& window) = 0;
	Position getPosition() const;
	void setPosition(Position position);
protected:
	Position position;
};