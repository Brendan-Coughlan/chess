#include "King.hpp"
#include "Config.hpp"

King::King(bool isWhite, Position position)
	: Piece(isWhite, position)
{
}

bool King::isValidMove(Position target) const
{
	if (abs(target.rank - position.rank) <= 1 && abs(target.file - position.file) <= 1)
		return true;

	return false;
}

void King::move()
{
	// King movement logic
}

void King::render(sf::RenderWindow& window)
{
	const sf::Texture& texture =
		isWhite ? Config::WHITE_KING_TEXTURE
		: Config::BLACK_KING_TEXTURE;

	drawSprite(window, texture);
}
