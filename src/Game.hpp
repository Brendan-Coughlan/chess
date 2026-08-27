#pragma once

#include <SFML/Graphics.hpp>
#include "ChessGame.hpp"
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
	void handleClick(sf::Vector2i mousePosition);
private:
	void handleEvents();
	void handleMouseClick(sf::Vector2i mousePosition);

	void render();
	void drawChessboard();

	sf::RenderWindow window;
	ChessGame chessGame;
};