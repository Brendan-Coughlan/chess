#pragma once

#include <SFML/Graphics.hpp>
#include "Piece.hpp"

class Game
{
public:
    Game();
    void run();
	void render();
private:
	static constexpr sf::Color BACKGROUND_COLOR = sf::Color::White;
	static constexpr sf::Color LIGHT_SQUARE_COLOR = sf::Color(240, 217, 181);
	static constexpr sf::Color DARK_SQUARE_COLOR = sf::Color(181, 136, 99);

	static constexpr unsigned int WINDOW_WIDTH = 1280;
	static constexpr unsigned int WINDOW_HEIGHT = 720;
	static constexpr unsigned int BOARD_SIZE = 8;
	static constexpr unsigned int SQUARE_SIZE = (WINDOW_WIDTH - WINDOW_HEIGHT) / BOARD_SIZE;

	sf::RenderWindow window;
	Piece* board[BOARD_SIZE][BOARD_SIZE];

	void renderBoard();
};