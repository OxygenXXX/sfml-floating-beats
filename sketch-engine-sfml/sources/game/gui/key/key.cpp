#include "key.hpp"

namespace beats::gui
{
	Key::Key(uint16_t k_width, uint16_t k_height, sf::Texture* k_texture)
	{
		this->key_rectangle.setSize(sf::Vector2f(k_width, k_height));

		this->key_rectangle.setTexture(k_texture, false);
	}
}