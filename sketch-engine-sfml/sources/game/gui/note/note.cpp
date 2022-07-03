#include "note.hpp"

namespace beats::gui
{
	Note::Note(sf::Vector2f n_size, float n_speed, sf::Texture* n_texture)
	{
		this->note_rectangle.setSize(n_size);
		this->note_rectangle.setTexture(n_texture);

		this->note_speed = n_speed;
	}

	void Note::updateNote(float delta_time)
	{
		sf::Vector2f note_pos = this->note_rectangle.getPosition();

		note_pos.y = note_pos.y + (this->note_speed* delta_time);

		std::cout << this->note_speed * delta_time << " ";

		std::cout << this->note_rectangle.getPosition().x << " " << this->note_rectangle.getPosition().y << std::endl;
		
		this->note_rectangle.setPosition(note_pos);

		std::cout << this->note_rectangle.getPosition().x << " " << this->note_rectangle.getPosition().y << std::endl;
	}
}