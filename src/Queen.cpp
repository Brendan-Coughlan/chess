#include "Queen.hpp"
#include "Config.hpp"

Queen::Queen(Color color, Position position)
	: Piece(color, position)
{
}

bool Queen::isValidMove(Position target) const
{
	if (abs(target.rank - position.rank) == abs(target.file - position.file) || target.rank == position.rank || target.file == position.file)
		return true;

	return false;
}

void Queen::move()
{
	// Queen movement logic
}

void Queen::render(sf::RenderWindow& window)
{
	const sf::Texture& texture =
		getColor() == Color::White ? Config::WHITE_QUEEN_TEXTURE
		: Config::BLACK_QUEEN_TEXTURE;

	drawSprite(window, texture);
}
