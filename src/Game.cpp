#include "Game.hpp"

Game::Game()
{
}

void Game::run()
{
}

void Game::render()
{
	window.create(sf::VideoMode({ WINDOW_WIDTH, WINDOW_HEIGHT }), "Chess");
	
	while (window.isOpen())
	{
		while (const std::optional<sf::Event> event = window.pollEvent())
		{
			if (event->is<sf::Event::Closed>())
				window.close();
		}
		window.clear(BACKGROUND_COLOR);
		renderBoard();
		window.display();
	}
}

void Game::renderBoard()
{
	for (unsigned int rank = 0; rank < BOARD_SIZE; ++rank)
	{
		for (unsigned int file = 0; file < BOARD_SIZE; ++file)
		{
			sf::RectangleShape square(sf::Vector2f(SQUARE_SIZE, SQUARE_SIZE));
			square.setPosition(sf::Vector2f(file * SQUARE_SIZE, rank * SQUARE_SIZE));
			square.setFillColor((rank + file) % 2 == 0 ? LIGHT_SQUARE_COLOR : DARK_SQUARE_COLOR);

			if (board[rank][file] != nullptr)
			{
				//board[rank][file]->render(window);
			}
			window.draw(square);
		}
	}
}