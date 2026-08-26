#pragma once

#include <SFML/Graphics.hpp>

namespace Config
{
	static constexpr sf::Color BACKGROUND_COLOR = sf::Color::White;
	static constexpr sf::Color LIGHT_SQUARE_COLOR = sf::Color(240, 217, 181);
	static constexpr sf::Color DARK_SQUARE_COLOR = sf::Color(181, 136, 99);

	static constexpr const char* WINDOW_TITLE = "Chess";
	static constexpr unsigned int WINDOW_WIDTH = 1280;
	static constexpr unsigned int WINDOW_HEIGHT = 720;
	static constexpr unsigned int BOARD_SIZE = 8;
	static constexpr float SQUARE_SIZE = WINDOW_HEIGHT / BOARD_SIZE;
	static constexpr float PIECE_SIZE = SQUARE_SIZE * 0.8;
	static constexpr float PIECE_OFFSET = (SQUARE_SIZE - PIECE_SIZE) / 2;
}