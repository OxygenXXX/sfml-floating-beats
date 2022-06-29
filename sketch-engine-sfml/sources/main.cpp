
#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>

#include <iostream>

#include "core/input/input.hpp"

signed int main(void)
{
	sf::RenderWindow window_controller(sf::VideoMode(1366, 768), "Hello");

	while (window_controller.isOpen())
	{
		sf::Event window_event;

		while (window_controller.pollEvent(window_event))
		{
			if (window_event.type == sf::Event::Closed)
			{
				window_controller.close();
			}
		}

		window_controller.clear();

		window_controller.display();
	}

	return EXIT_SUCCESS;
}