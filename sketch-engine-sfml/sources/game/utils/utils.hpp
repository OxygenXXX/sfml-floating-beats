#pragma once

#include <cstdint>
#include <string>

namespace beats::utils
{
	namespace window
	{
		std::string generateRandomTitle(uint32_t title_seed);
	}
}