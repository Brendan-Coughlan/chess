#include "Pawn.hpp"
#include "Config.hpp"

Pawn::Pawn(bool isWhite, Position position)
    : Piece(isWhite, position)
{
}

bool Pawn::isValidMove(Position target) const
{
	if (isWhite)
	{
		if (target.rank == position.rank - 1 && target.file == position.file)
			return true;
		if (position.rank == 6 && target.rank == 4 && target.file == position.file)
			return true;
	}
	else
	{
		if (target.rank == position.rank + 1 && target.file == position.file)
			return true;
		if (position.rank == 1 && target.rank == 3 && target.file == position.file)
			return true;
	}

	return false;
}

void Pawn::move()
{
    // Pawn movement logic
}

void Pawn::render(sf::RenderWindow& window)
{
    const sf::Texture& texture =
        isWhite ? Config::WHITE_PAWN_TEXTURE
        : Config::BLACK_PAWN_TEXTURE;

    drawSprite(window, texture);
}
