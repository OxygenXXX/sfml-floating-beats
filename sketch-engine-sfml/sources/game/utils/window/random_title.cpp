#include "../../constants.hpp"

#include "../utils.hpp"

#include <random>

namespace beats::utils::window
{
	std::string generateRandomTitle(uint32_t title_seed)
	{
		srand(title_seed);

		uint16_t title_pointer = rand() % window_titles.size();
		
		return window_titles[title_pointer];
	}
}