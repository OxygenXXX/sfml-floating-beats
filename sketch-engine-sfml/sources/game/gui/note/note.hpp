#pragma once

#include <SFML/Graphics.hpp>

#include <iostream>

namespace beats::gui
{
	class Note
	{
		public:

		Note(sf::Vector2f n_size, float n_speed, sf::Texture* n_texture);

		//void displayNote();
		void updateNote(float delta_time);

		public:

		sf::RectangleShape note_rectangle;

		private:

		float note_speed = 0.0f;
	};
}

