#pragma once

#include <chrono>

typedef std::chrono::duration<double, std::chrono::seconds::period> TimeSeconds;
typedef std::chrono::time_point<std::chrono::high_resolution_clock, TimeSeconds> TimePoint;

static inline TimePoint now() {
	return std::chrono::high_resolution_clock::now();
}

