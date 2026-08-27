#include "Rook.hpp"
#include "Config.hpp"

Rook::Rook(Color color, Position position)
	: Piece(color, position)
{
}

bool Rook::isValidMove(Position target) const
{
	if (target.rank == position.rank || target.file == position.file)
	{
		return true;
	}

	return false;
}

void Rook::move()
{
	// Rook movement logic
}

void Rook::render(sf::RenderWindow& window)
{
	const sf::Texture& texture =
		getColor() == Color::White ? Config::WHITE_ROOK_TEXTURE
		: Config::BLACK_ROOK_TEXTURE;

	drawSprite(window, texture);
}
