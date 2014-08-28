#pragma once
#include <vector>
#include <map>
#include <string>

class markovchain
{
public:
	//ctor & detour
	markovchain();
	virtual ~markovchain();
	//methods
	void genChains(std::vector<std::string>);
	std::map<std::string, std::map<std::string, int>> getChains();
	void printChains();

private:
	//members
	std::map<std::string, std::map<std::string, int>>chains;

	//methods

};

