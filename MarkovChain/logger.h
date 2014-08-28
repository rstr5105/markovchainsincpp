#include <iostream>
#include <fstream>
#include <ctime>
#include <cstdio>

#pragma once
class Logger
{
public:
	//ctor & dtor
	Logger();
	~Logger();
	//methods
	Logger* Instance();
	void Log(std::string msg);
private:
	//members
	static Logger* pInstance;
	std::ofstream logFile;
	std::string path;
	//methods
	struct tm getTime();

};

