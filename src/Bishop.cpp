#include "Bishop.hpp"
#include "Config.hpp"

Bishop::Bishop(Color color, Position position)
	: Piece(color, position)
{
}

bool Bishop::isValidMove(Position target) const
{
	if (abs(target.rank - position.rank) == abs(target.file - position.file))
		return true;

	return false;
}

void Bishop::move()
{
	// Bishop movement logic
}

void Bishop::render(sf::RenderWindow& window)
{
	const sf::Texture& texture =
		getColor() == Color::White ? Config::WHITE_BISHOP_TEXTURE
		: Config::BLACK_BISHOP_TEXTURE;

	drawSprite(window, texture);
}
