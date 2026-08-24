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
	static constexpr unsigned int WINDOW_WIDTH = 1280;
	static constexpr unsigned int WINDOW_HEIGHT = 720;
	static constexpr unsigned int BOARD_SIZE = 8;

	sf::RenderWindow window;
	Piece* board[BOARD_SIZE][BOARD_SIZE];
};