#include <iostream>
#include "Log.h"

void Log::error(const char* message) {
	if (m_logLevel >= Level::ERROR) {
		std::cout << "[Error]: " << message << std::endl;
	}
}

void Log::warning(const char* message) {
	if (m_logLevel >= Level::WARNING) {
		std::cout << "[Warning]: " << message << std::endl;
	}
}

void Log::info(const char* message) {
	if (m_logLevel >= Level::INFO) {
		std::cout << "[Info]: " << message << std::endl;
	}
}

void Log::setLevel(Level level) {
	m_logLevel = level;
}