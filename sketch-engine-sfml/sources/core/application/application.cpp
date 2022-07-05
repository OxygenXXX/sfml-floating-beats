#include "application.hpp"

namespace sketch
{
	Application::Application(uint16_t wnd_width, uint16_t wnd_height, string wnd_title)
	{
		this->window_width = wnd_width;
		this->window_height = wnd_height;

		this->window_title = wnd_title;

		sf::VideoMode window_videomode(this->window_width, this->window_height);

		this->window_controller = new sf::RenderWindow(window_videomode, this->window_title);
	}
}