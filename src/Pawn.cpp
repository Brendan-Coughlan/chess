#include "Pawn.hpp"

Pawn::Pawn(Position position)
    : Piece(position)
{
}

void Pawn::move()
{
    // Pawn movement logic
}

void Pawn::render(sf::RenderWindow& window)
{
	sf::CircleShape pawn = sf::CircleShape(20);
	pawn.setPosition(sf::Vector2f(getPosition().rank , getPosition().file));
	window.draw(pawn);
}
