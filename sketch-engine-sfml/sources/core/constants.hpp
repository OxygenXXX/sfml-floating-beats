#pragma once

#include <cstdint>
#include <string>

namespace sketch
{
	const std::string engine_version = "v1.0.0a";

	constexpr uint16_t window_width = 1366;
	constexpr uint16_t window_height = 768;

	const uint16_t engine_max_fps = 480;

	const std::string window_title = "SKetch Engine " + engine_version;
}

