#include "Pawn.hpp"
#include "Config.hpp"

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
	sf::CircleShape pawn = sf::CircleShape(Config::PIECE_SIZE / 2);
	pawn.setPosition({getPosition().rank * Config::SQUARE_SIZE + Config::PIECE_OFFSET, getPosition().file * Config::SQUARE_SIZE + Config::PIECE_OFFSET});
	window.draw(pawn);
}
