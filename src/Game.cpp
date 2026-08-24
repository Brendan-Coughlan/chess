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
		window.display();
	}
}