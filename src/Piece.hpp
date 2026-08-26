#pragma once

#include <SFML/Graphics.hpp>
#include "Position.hpp"

class Piece
{
public:
	Piece(bool isWhite, Position position);

	virtual bool isValidMove(Position target) const = 0;
    virtual void move() = 0;
	virtual void render(sf::RenderWindow& window) = 0;

	bool getIsWhite() const;
	Position getPosition() const;

	void setPosition(Position position);
protected:
	bool isWhite;
	Position position;

	void drawSprite(
		sf::RenderWindow& window,
		const sf::Texture& texture
	);
};