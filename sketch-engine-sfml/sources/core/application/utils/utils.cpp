#include "../application.hpp"

namespace sketch
{
	void Application::setApplicationSize(const sf::Vector2u& wnd_size)
	{
		this->window_width = wnd_size.x;
		this->window_height = wnd_size.y;

		this->window_controller->setSize({ this->window_width, this->window_height });
	}
	
	void Application::setApplicationPosition(const sf::Vector2u& wnd_pos)
	{
		this->window_position_x = wnd_pos.x;
		this->window_position_y = wnd_pos.y;

		this->window_controller->setPosition({ this->window_position_x, this->window_position_y });
	}

	void Application::setApplicationTitle(const std::string wnd_title)
	{
		this->window_title = wnd_title;

		this->window_controller->setTitle(this->window_title);
	}
	
	void Application::setApplicationMaxFPS(const uint16_t wnd_fps)
	{
		this->window_max_fps = wnd_fps;

		this->window_controller->setFramerateLimit(this->window_max_fps);
	}
}