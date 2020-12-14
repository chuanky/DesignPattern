#include <iostream>

class Log {
public:
	int errorLevel = 1;
	int warningLevel = 2;
	int infoLevel = 3;
private:
	int m_logLevel;
public:
	void Error(const char* message) {
		if (m_logLevel >= errorLevel) {
			std::cout << "[Error]: " << message << std::endl;
		}
	}

	void Warning(const char* message) {
		if (m_logLevel >= warningLevel) {
			std::cout << "[Warning]: " << message << std::endl;
		}
	}

	void Info(const char* message) {
		if (m_logLevel >= infoLevel) {
			std::cout << "[Info]: " << message << std::endl;
		}
	}

	void SetLogLevel(int level) {
		m_logLevel = level;
	}
};

int main() {
	Log log;
	log.SetLogLevel(log.errorLevel);

	log.Info("logging...");
	log.Warning("logging...");
	log.Error("logging");
}