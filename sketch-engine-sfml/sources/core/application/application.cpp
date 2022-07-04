#include "application.hpp"

namespace sketch
{
	Application::Application(uint16_t wnd_width, uint16_t wnd_height, string wnd_title)
	{
		this->window_width = wnd_width;
		this->window_height = wnd_height;

		this->window_title = wnd_title;

		sf::VideoMode window_videomode(this->window_width, this->window_height);

		this->window_controller = new sf::RenderWindow(window_videomode, wnd_title);

		while (this->window_controller->isOpen())
		{
			sf::Event window_event;

			while (this->window_controller->pollEvent(window_event))
			{
				if (window_event.type == sf::Event::Closed)
				{
					this->window_controller->close();
				}
			}

			this->window_controller->clear();

			this->window_controller->display();

		}
	}
}