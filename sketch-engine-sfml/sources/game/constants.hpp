#pragma once

#include <cstdint>

#include <string>
#include <vector>

namespace beats
{
	const uint16_t window_width = 1366;
	const uint16_t window_height = 768;

	const uint16_t beats_max_fps = 480;

	const std::string game_version = "v1.0.0";

	const std::string default_title = "Floating Beats " + game_version;

	const std::vector<std::string> window_titles =
	{
		default_title + " - made by OxygenXXX",
		default_title + " - have a nice day",
		default_title + " - this wonderful world",
		default_title + " - better luck next time",
		default_title + " - do you like candies?",
	};
}

