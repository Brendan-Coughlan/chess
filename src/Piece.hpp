#pragma once

#include <SFML/Graphics.hpp>
#include "Position.hpp"
#include "Color.hpp"

class Piece
{
public:
	Piece(Color color, Position position);

	virtual bool isValidMove(Position target) const = 0;
    virtual void move() = 0;
	virtual void render(sf::RenderWindow& window) = 0;

	Color getColor() const;
	Position getPosition() const;

	void setPosition(Position position);
protected:
	Color color;
	Position position;

	void drawSprite(
		sf::RenderWindow& window,
		const sf::Texture& texture
	);
};