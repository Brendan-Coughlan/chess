#include "Knight.hpp"
#include "Config.hpp"

Knight::Knight(bool isWhite, Position position)
	: Piece(isWhite, position)
{
}

bool Knight::isValidMove(Position target) const
{
	if ((abs(target.rank - position.rank) == 2 && abs(target.file - position.file) == 1) ||
		(abs(target.rank - position.rank) == 1 && abs(target.file - position.file) == 2))
	{
		return true;
	}

	return false;
}

void Knight::move()
{
	// Knight movement logic
}

void Knight::render(sf::RenderWindow& window)
{
	const sf::Texture& texture =
		isWhite ? Config::WHITE_KNIGHT_TEXTURE
		: Config::BLACK_KNIGHT_TEXTURE;

	drawSprite(window, texture);
}
