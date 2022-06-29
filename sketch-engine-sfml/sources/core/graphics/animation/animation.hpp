#pragma once

#include <SFML/Graphics.hpp>

using sf::Texture;
using sf::Vector2u;

namespace sketch::graphics
{
	class Animation
	{
		public:

		Animation(Texture* obj_texture, Vector2u sp_counter, float fr_time);
		~Animation();

		public:

		sf::IntRect texture_rect;

		private:

		sf::Vector2u sprites_counter;
		sf::Vector2u current_sprite;

		float animation_total_time = 0.0f;
		float frame_switch_time = 0.0f;
	};
}
