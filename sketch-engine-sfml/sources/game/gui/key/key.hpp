#pragma once

#include <SFML/Graphics.hpp>

namespace beats::gui
{
	class Key
	{
		public:

		Key();
		~Key();

		private:

		sf::Sprite key_sprite;
	};
}

