
#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>

#include <iostream>

#include <random>

#include "core/input/input.hpp"
#include "core/graphics/graphics.hpp"

#include "core/application/application.hpp"

#include "game/gui/elements.hpp"

#include "game/constants.hpp"

#include "game/utils/utils.hpp"

using sketch::graphics::Animation;

using sketch::Application;

using beats::gui::Key;
using beats::gui::Note;

signed int main(void)
{
	srand(time(0));

	/*
	sf::RenderWindow window_controller(sf::VideoMode(1366, 768), "Hello");

	*/

	Application game_controller(beats::window_width, beats::window_height, beats::default_window_title);

	game_controller.window_controller->setTitle(beats::utils::generateRandomTitle());

	/*

	sf::Texture mania_key_texture;

	if (!mania_key_texture.loadFromFile("mania_btn.png"))
	{
		std::cout << "Unable to load player texture!";
	}

	Note mania_note1({ 70.0f, 70.0f }, 10.0f, &mania_key_texture);

	mania_note1.note_rectangle.setPosition({ 200.0f, 150.0f });

	*/

	//Key mania_key1(200, 200, &mania_key_texture);

	//mania_key1.key_rectangle.setPosition(500, 500);

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

	while (game_controller.window_controller->isOpen())
	{
		delta_time = game_timer.restart().asSeconds();

		sf::Event window_event;

		while (game_controller.window_controller->pollEvent(window_event))
		{
			if (window_event.type == sf::Event::Closed)
			{
				game_controller.window_controller->close();
			}
		}

	}

		/*

		animator.updateAnimation(2, delta_time);

		player_rect.setTextureRect(animator.texture_rect);

		*/

		//mania_note1.updateNote(delta_time);

		//window_controller.clear();

		//window_controller.draw(mania_key1.key_rectangle);

		//window_controller.draw(mania_note1.note_rectangle);

		/*

		window_controller.draw(player_rect);

		*/

		//window_controller.display();
	//}
	
	return EXIT_SUCCESS;
}