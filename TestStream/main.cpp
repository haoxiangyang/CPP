/*comments are welcome via email: bruceadi@hotmail.com*/
//
//start of header file
//
#include <string>
#include <fstream>
#include <sstream>
#include <iostream>

#define LOG_LEVEL__DEBUG 0
#define LOG_LEVEL_INFO  1
#define LOG_LEVEL_WARN  2
#define LOG_LEVEL_ERROR 3
#define LOG_LEVEL_COUNT 4

//default log level
#ifndef LOG_LEVEL
#define LOG_LEVEL LOG_LEVEL__DEBUG
#endif


#define LOG_HEAD "["<< __FUNCTION__ << " at " << __FILE__ << ":" << __LINE__ << "]"  

#if LOG_LEVEL >  LOG_LEVEL_DEBUG
#define LOG_DEBUG(msg) ; 
#else
#define LOG_DEBUG(msg) Logger<LogWriter>(LogWriter::instance()).get() << LOG_HEAD << "[DEBUG]["<< msg <<"]";
#endif


#if LOG_LEVEL >  LOG_LEVEL_INFO
#define LOG_INFO(msg) ; 
#else
#define LOG_INFO(msg) Logger<LogWriter>(LogWriter::instance()).get() << LOG_HEAD << "[INFO]["<< msg << "]";
#endif

#if LOG_LEVEL >  LOG_LEVEL_WARN
#define LOG_WARN(msg) ; 
#else
#define LOG_WARN(msg) Logger<LogWriter>(LogWriter::instance()).get() << LOG_HEAD << "[WARN]["<< msg << "]";
#endif


#if LOG_LEVEL >  LOG_LEVEL_ERROR
#define LOG_ERROR(msg) ; 
#else
#define LOG_ERROR(msg) Logger<LogWriter>(LogWriter::instance()).get() << LOG_HEAD << "[ERROR]["<< msg << "]";
#endif


template <typename LogWriter>
class Logger
{
public:
	Logger(LogWriter& logWriter) : logWriter_(logWriter) {}
	~Logger()
	{
		oss_ << std::endl;
		logWriter_.write(oss_.str());
	}
	std::ostringstream& get() { return oss_; }
private:
	LogWriter & logWriter_;
	std::ostringstream oss_;
};

class LogWriter
{
public:
	void write(std::string const& msg);
	static LogWriter& instance()
	{
		static LogWriter writer;
		return writer;
	}
private:
	~LogWriter() {};
};
/**to control how to write logs, one should just change the implementention**/
inline void LogWriter::write(std::string const& msg) { std::cerr << msg; }
//
//end of header file
//

int magic()
{
	return 89777;
}

#include "FunctionTemplate.h"
#include "ClassTemplate.h"

int main()
{
	LOG_INFO("start");
	int mg = magic();
	if (mg > 56)
	{
		LOG_WARN("mg: " << mg << " > 56");
	}
	LOG_INFO("exit");


	int result = square<int>(2);
	std::cout << result << std::endl;

	cout << square<std::string>("44") << endl;

	nPrint<string, 4>("test");

	multPrint<>("test");


	std::string name;

	ClassTemplate<int> ct;
	cout << "sum:" << ct.add(12, 13) << endl;

	std::cin >> name;
	return 0;
}