
#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>

#include <iostream>
#include <random>

#include "core/graphics/graphics.hpp"
#include "core/input/input.hpp"
#include "core/application/application.hpp"

#include "game/gui/elements.hpp"
#include "game/utils/utils.hpp"

#include "game/constants.hpp"

using sketch::graphics::Animation;

using sketch::Application;

using beats::gui::Key;
using beats::gui::Note;

signed int main(void)
{
	Application game_controller(beats::window_width, beats::window_height, beats::default_title);

	game_controller.setApplicationTitle(beats::utils::window::generateRandomTitle(time(0)));

	game_controller.setApplicationMaxFPS(beats::beats_max_fps);

	//game_controller.setApplicationPosition();

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
	
	return EXIT_SUCCESS;
}