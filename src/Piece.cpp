#pragma once

#include "Piece.hpp"
#include "Config.hpp"

Piece::Piece(bool isWhite, Position position)
    : isWhite(isWhite), position(position)
{
}

bool Piece::getIsWhite() const
{
	return isWhite;
}

Position Piece::getPosition() const
{
	return position;
}

void Piece::setPosition(Position position)
{
	this->position = position;
}

void Piece::drawSprite(
    sf::RenderWindow& window,
    const sf::Texture& texture)
{
    sf::Sprite sprite(texture);

    sprite.setPosition({
        position.rank * Config::SQUARE_SIZE + Config::PIECE_OFFSET,
        position.file * Config::SQUARE_SIZE + Config::PIECE_OFFSET
        });

    const sf::Vector2u textureSize = texture.getSize();

    sprite.setScale({
        Config::PIECE_SIZE / static_cast<float>(textureSize.x),
        Config::PIECE_SIZE / static_cast<float>(textureSize.y)
        });

    window.draw(sprite);
}