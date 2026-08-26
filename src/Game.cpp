#include "Game.hpp"
#include "Config.hpp"

Game::Game()
{
	window.create(sf::VideoMode({ Config::WINDOW_WIDTH, Config::WINDOW_HEIGHT }), Config::WINDOW_TITLE);
	board[1][0] = &pawn; // Place a pawn at position (1, 0)
}

void Game::run()
{
	while (window.isOpen())
	{
		while (const std::optional<sf::Event> event = window.pollEvent())
		{
			if (event->is<sf::Event::Closed>())
				window.close();
		}

		render();
	}
}

void Game::render()
{
	window.clear(Config::BACKGROUND_COLOR);
	renderBoard();
	window.display();
}

void Game::renderBoard()
{
	for (unsigned int rank = 0; rank < Config::BOARD_SIZE; ++rank)
	{
		for (unsigned int file = 0; file < Config::BOARD_SIZE; ++file)
		{
			sf::RectangleShape square(sf::Vector2f(Config::SQUARE_SIZE, Config::SQUARE_SIZE));
			square.setPosition(sf::Vector2f(file * Config::SQUARE_SIZE, rank * Config::SQUARE_SIZE));
			square.setFillColor((rank + file) % 2 == 0 ? Config::LIGHT_SQUARE_COLOR : Config::DARK_SQUARE_COLOR);

			window.draw(square);


			if (board[rank][file] != nullptr)
			{
				board[rank][file]->render(window);
			}
		}
	}
}