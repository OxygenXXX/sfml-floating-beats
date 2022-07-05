#pragma once

#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>

#include <cstdint>
#include <string>

#include "../constants.hpp"

using std::string;

namespace sketch
{
	class Application
	{
		public:

		Application(uint16_t wnd_width, uint16_t wnd_height, string wnd_title);

		void setApplicationSize(const sf::Vector2u& wnd_size);

		void setApplicationPosition(const sf::Vector2u& wnd_pos);

		void setApplicationTitle(const std::string wnd_title);

		void setApplicationMaxFPS(const uint16_t wnd_fps);

		public:

		sf::RenderWindow* window_controller;

		private:

		sf::Clock application_clocks;

		uint16_t window_width = window_width;
		uint16_t window_height = window_height;

		uint16_t window_position_x = 0;
		uint16_t window_position_y = 0;
		
		std::string window_title = window_title;

		uint16_t window_max_fps = engine_max_fps;
	};
}
