#include <iostream>
#include "Game.hpp"
#include "Config.hpp"

Game::Game()
{
	window.create(sf::VideoMode({ Config::WINDOW_WIDTH, Config::WINDOW_HEIGHT }), Config::WINDOW_TITLE);
}

void Game::init()
{
	if (!Config::WHITE_PAWN_TEXTURE.loadFromFile("assets/white_pawn.png"))
	{
		std::cerr << "Error loading white pawn texture!" << std::endl;
	}

	if (!Config::BLACK_PAWN_TEXTURE.loadFromFile("assets/black_pawn.png"))
	{
		std::cerr << "Error loading black pawn texture!" << std::endl;
	}

	if (!Config::WHITE_ROOK_TEXTURE.loadFromFile("assets/white_rook.png"))
	{
		std::cerr << "Error loading white rook texture!" << std::endl;
	}

	if (!Config::BLACK_ROOK_TEXTURE.loadFromFile("assets/black_rook.png"))
	{
		std::cerr << "Error loading black rook texture!" << std::endl;
	}

	if (!Config::WHITE_KNIGHT_TEXTURE.loadFromFile("assets/white_knight.png"))
	{
		std::cerr << "Error loading white knight texture!" << std::endl;
	}

	if (!Config::BLACK_KNIGHT_TEXTURE.loadFromFile("assets/black_knight.png"))
	{
		std::cerr << "Error loading black knight texture!" << std::endl;
	}

	if (!Config::WHITE_BISHOP_TEXTURE.loadFromFile("assets/white_bishop.png"))
	{
		std::cerr << "Error loading white bishop texture!" << std::endl;
	}

	if (!Config::BLACK_BISHOP_TEXTURE.loadFromFile("assets/black_bishop.png"))
	{
		std::cerr << "Error loading black bishop texture!" << std::endl;
	}

	if (!Config::WHITE_QUEEN_TEXTURE.loadFromFile("assets/white_queen.png"))
	{
		std::cerr << "Error loading white queen texture!" << std::endl;
	}

	if (!Config::BLACK_QUEEN_TEXTURE.loadFromFile("assets/black_queen.png"))
	{
		std::cerr << "Error loading black queen texture!" << std::endl;
	}

	if (!Config::WHITE_KING_TEXTURE.loadFromFile("assets/white_king.png"))
	{
		std::cerr << "Error loading white king texture!" << std::endl;
	}

	if (!Config::BLACK_KING_TEXTURE.loadFromFile("assets/black_king.png"))
	{
		std::cerr << "Error loading black king texture!" << std::endl;
	}
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
	drawChessboard();
	board.render(window);
	window.display();
}

void Game::drawChessboard()
{
	for (unsigned int rank = 0; rank < Config::BOARD_SIZE; ++rank)
	{
		for (unsigned int file = 0; file < Config::BOARD_SIZE; ++file)
		{
			sf::RectangleShape square(sf::Vector2f(Config::SQUARE_SIZE, Config::SQUARE_SIZE));
			square.setPosition(sf::Vector2f(file * Config::SQUARE_SIZE, rank * Config::SQUARE_SIZE));
			square.setFillColor((rank + file) % 2 == 0 ? Config::LIGHT_SQUARE_COLOR : Config::DARK_SQUARE_COLOR);

			window.draw(square);
		}
	}
}