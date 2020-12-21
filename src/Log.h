#pragma once

class Log {
public:
	enum class Level {
		ERROR = 0, WARNING, INFO
	};
private:
	Level m_logLevel;
public:
	void error(const char* message);

	void warning(const char* message);

	void info(const char* message);

	void setLevel(Level level);
};