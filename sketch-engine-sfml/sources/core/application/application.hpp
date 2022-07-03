#pragma once

#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>

#include <cstdint>
#include <string>

using std::string;

namespace sketch
{
	class Application
	{
		public:

		Application(uint16_t wnd_width, uint16_t wnd_height, string wnd_title);



		private:

		sf::RenderWindow* window_controller;

	};
}
