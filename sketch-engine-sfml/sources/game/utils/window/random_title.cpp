#include "random_title.hpp"

namespace beats::utils
{
	std::string generateRandomTitle()
	{
		uint8_t window_titles_count = window_titles.size();

		uint8_t window_title_pointer = rand() % window_titles_count;

		std::string window_selected_title = window_titles[window_title_pointer];

		return window_selected_title;
	}
}