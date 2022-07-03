
#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>

#include <iostream>

#include "core/input/input.hpp"
#include "core/graphics/graphics.hpp"

#include "game/gui/elements.hpp"

using sketch::graphics::Animation;
using beats::gui::Key;

signed int main(void)
{
	sf::RenderWindow window_controller(sf::VideoMode(1366, 768), "Hello");

	sf::Texture mania_key_texture;

	if (!mania_key_texture.loadFromFile("mania_btn.png"))
	{
		std::cout << "Unable to load player texture!";
	}

	Key mania_key1(200, 200, &mania_key_texture);

	mania_key1.key_rectangle.setPosition(500, 500);

	/*

	sf::RectangleShape player_rect(sf::Vector2f(100.0f, 150.0f));

	sf::Texture player_texture;

	if (!player_texture.loadFromFile("example_tux.jpg"))
	{
		std::cout << "Unable to load player texture!";
	}

	player_rect.setTexture(&player_texture);

	Animation animator(&player_texture, sf::Vector2u(3, 9), 0.3f);

	*/

	float delta_time = 0.0f;

	sf::Clock game_timer;

	while (window_controller.isOpen())
	{
		delta_time = game_timer.restart().asSeconds();

		sf::Event window_event;

		while (window_controller.pollEvent(window_event))
		{
			if (window_event.type == sf::Event::Closed)
			{
				window_controller.close();
			}
		}

		/*

		animator.updateAnimation(2, delta_time);

		player_rect.setTextureRect(animator.texture_rect);

		*/

		window_controller.clear();

		window_controller.draw(mania_key1.key_rectangle);

		/*

		window_controller.draw(player_rect);

		*/

		window_controller.display();
	}

	return EXIT_SUCCESS;
}