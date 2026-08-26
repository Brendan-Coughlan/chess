#pragma once

#include <SFML/Graphics.hpp>
#include "Piece.hpp"
#include "Pawn.hpp"
#include "Board.hpp"
#include "Config.hpp"

class Game
{
public:
    Game();
	void init();
    void run();
	void render();
private:
	sf::RenderWindow window;
	Board board;

	void drawChessboard();
};