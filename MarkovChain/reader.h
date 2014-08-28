#pragma once
#include <fstream>
#include <vector>
#include <sstream>
#include <algorithm>
#include <iterator>
#include <regex>


#include "logger.h"
#include "markovchain.h"
class Reader
{
public:
	Reader(std::string path, MarkovChain& mC);
	~Reader();
private:
	//members
	MarkovChain mC;
	std::ifstream in;
	void read();

	std::vector<std::string> parseForChainGen(std::string s);
};

