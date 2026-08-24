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
	window.draw(sf::CircleShape(20)); // Placeholder for pawn rendering
}
