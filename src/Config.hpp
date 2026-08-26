#pragma once

#include <SFML/Graphics.hpp>

namespace Config
{
	static constexpr sf::Color BACKGROUND_COLOR = sf::Color::White;
	static constexpr sf::Color LIGHT_SQUARE_COLOR = sf::Color(238, 238, 210);
	static constexpr sf::Color DARK_SQUARE_COLOR = sf::Color(118, 150, 86);

    inline sf::Texture WHITE_PAWN_TEXTURE;
    inline sf::Texture WHITE_ROOK_TEXTURE;
    inline sf::Texture WHITE_KNIGHT_TEXTURE;
    inline sf::Texture WHITE_BISHOP_TEXTURE;
    inline sf::Texture WHITE_QUEEN_TEXTURE;
    inline sf::Texture WHITE_KING_TEXTURE;

    inline sf::Texture BLACK_PAWN_TEXTURE;
    inline sf::Texture BLACK_ROOK_TEXTURE;
    inline sf::Texture BLACK_KNIGHT_TEXTURE;
    inline sf::Texture BLACK_BISHOP_TEXTURE;
    inline sf::Texture BLACK_QUEEN_TEXTURE;
    inline sf::Texture BLACK_KING_TEXTURE;

	static constexpr const char* WINDOW_TITLE = "Chess";
	static constexpr unsigned int WINDOW_WIDTH = 1280;
	static constexpr unsigned int WINDOW_HEIGHT = 720;
	static constexpr unsigned int BOARD_SIZE = 8;
	static constexpr float SQUARE_SIZE = WINDOW_HEIGHT / BOARD_SIZE;
	static constexpr float PIECE_SIZE = SQUARE_SIZE;
	static constexpr float PIECE_OFFSET = (SQUARE_SIZE - PIECE_SIZE) / 2;
}