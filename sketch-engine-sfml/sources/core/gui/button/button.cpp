#include "button.hpp"

namespace sketch::gui
{
	Button::Button(Vector2f btn_size, string btn_text, Color bg_color, Color fg_color)
	{
		this->button_text.setString(btn_text);
		this->button_text.setFillColor(fg_color);

		this->button_shape.setSize(btn_size);
		this->button_shape.setFillColor(bg_color);
	}

	void Button::setTextFont(const sf::Font& btn_font)
	{
		this->button_text.setFont(btn_font);
	}

	void Button::setTextSize(const uint16_t btn_fsize)
	{
		this->button_text.setCharacterSize(btn_fsize);
	}

	void Button::setTextColor(const sf::Color fg_color)
	{
		this->button_text.setFillColor(fg_color);
	}

	void Button::setBackgroundColor(const sf::Color bg_color)
	{
		this->button_shape.setFillColor(bg_color);
	}

	void Button::setButtonPosition(const sf::Vector2f& btn_pos)
	{
		this->button_shape.setPosition(btn_pos);

		sf::FloatRect shape_bounds = this->button_shape.getGlobalBounds();
		sf::FloatRect text_bounds = this->button_text.getGlobalBounds();

		float text_xpos = (btn_pos.x + shape_bounds.width / 2) - (text_bounds.width / 2);
		float text_ypos = (btn_pos.y + shape_bounds.height / 2) - (text_bounds.height / 2);

		this->button_text.setPosition({text_xpos, text_ypos});
	}

	void Button::displayButton(sf::RenderWindow& render_window)
	{
		render_window.draw(this->button_shape);
		render_window.draw(this->button_text);
	}

	bool Button::isButtonHovered(sf::RenderWindow& render_window)
	{
		float mouse_xpos = (float)sf::Mouse::getPosition(render_window).x;
		float mouse_ypos = (float)sf::Mouse::getPosition(render_window).y;

		float button_xpos_min = this->button_shape.getPosition().x;
		float button_ypos_min = this->button_shape.getPosition().y;

		float button_xpos_max = this->button_shape.getPosition().x + this->button_shape.getLocalBounds().width;
		float button_ypos_max = this->button_shape.getPosition().y + this->button_shape.getLocalBounds().height;

		if (mouse_xpos > button_xpos_min && mouse_xpos < button_xpos_max)
		{
			if (mouse_ypos > button_ypos_min && mouse_ypos < button_ypos_max)
			{
				return true;
			}

			return false;
		}

		return false;
	}
}