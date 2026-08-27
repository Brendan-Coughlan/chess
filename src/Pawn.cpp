#include "Pawn.hpp"
#include "Config.hpp"

Pawn::Pawn(Color color, Position position)
    : Piece(color, position)
{
}

bool Pawn::isValidMove(Position target) const
{
	if (getColor() == Color::White)
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
        getColor() == Color::White ? Config::WHITE_PAWN_TEXTURE
        : Config::BLACK_PAWN_TEXTURE;

    drawSprite(window, texture);
}
