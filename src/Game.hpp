#pragma once

#include <SFML/Graphics.hpp>
#include "Piece.hpp"
#include "Pawn.hpp"
#include "Config.hpp"

class Game
{
public:
    Game();
    void run();
	void render();
private:
	Pawn pawn = Pawn({1, 0});

	sf::RenderWindow window;
	Piece* board[Config::BOARD_SIZE][Config::BOARD_SIZE]{};

	void renderBoard();
};