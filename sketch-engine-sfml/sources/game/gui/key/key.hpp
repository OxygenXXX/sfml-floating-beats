#pragma once

#include <SFML/Graphics.hpp>



namespace beats::gui
{
	class Key
	{
		public:

		Key(uint16_t k_width, uint16_t k_height, sf::Texture* k_texture);

		public:

		sf::RectangleShape key_rectangle;
	};
}

