#include "application.hpp"

namespace sketch
{
	Application::Application(uint16_t wnd_width, uint16_t wnd_height, string wnd_title)
	{
		sf::VideoMode window_videomode(wnd_width, wnd_height);

		this->window_controller = new sf::RenderWindow(window_videomode, wnd_title);
	}
}