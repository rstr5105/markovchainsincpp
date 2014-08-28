//Standard Includes
#include <iostream>
#include <fstream>
#include <ctime>
#include <cstdio>

//Local Includes
#include "logger.h"



using namespace std;
Logger* Logger::pInstance = NULL;

Logger* Logger::Instance() {
	if (!pInstance) {
		pInstance = new Logger;
	}
	return pInstance;
}

Logger::Logger() {
	//ctor
	char mbstr[100];
	strftime(mbstr, 100, "%Y-%m-%d", &getTime());
	string timestamp(mbstr);
	this->path = ".\\Logs\\" + timestamp;
	logFile.open(path, ofstream::app);

}

Logger::~Logger() {
	//dtor
}

void Logger::Log(string msg) {

	char mbstr[100];

	strftime(mbstr, 100, "%H-%M-%S", &getTime());
	string outMsg(mbstr);
	outMsg = outMsg + "::  " + msg + "\n";
	if (logFile.is_open()) {
		logFile << outMsg.c_str();
	}


}
struct tm Logger::getTime(){
	time_t now = time(0);
	struct tm timeInfo;
	localtime_s(&timeInfo, &now);
	return timeInfo;
}