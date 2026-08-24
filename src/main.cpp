#include <SFML/Graphics.hpp>

int main()
{
	sf::RenderWindow window( sf::VideoMode( { 600, 400 } ), "Chess" );
	sf::RectangleShape shape( sf::Vector2f( 100.f, 100.f ) );
	shape.setFillColor(sf::Color(255, 0, 0));
	shape.setPosition(sf::Vector2f(10.f, 10.f));

	while ( window.isOpen() )
	{
		while ( const std::optional event = window.pollEvent() )
		{
			if ( event->is<sf::Event::Closed>() )
				window.close();
		}

		window.clear(sf::Color::Black);
		window.draw( shape );
		window.display();
	}
}
