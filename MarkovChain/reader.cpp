#include <fstream>
#include <vector>
#include <sstream>
#include <algorithm>
#include <iterator>
#include <regex>

#include "reader.h"

#include "logger.h"
#include "markovchain.h"



#define sLog Logger::Instance()

using namespace std;
Reader::Reader(string path, MarkovChain& mC) {
	//ctor
	this->mC = mC;
	//in.open(path);
	vector<string> test = parseForChainGen(path);
	for (string s : test){
		cout << s << endl;
	}
	//read();
	//mC.genChains(outPut);
}

Reader::~Reader() {
	//dtor
}

void Reader::read() {
	/*if (!in.is_open()) {
		sLog->Log("Error Opening File");
	}
	else {
		sLog->Log("Opened File!");
		for (string line; getline(in, line);) {
			parseForChainGen(line);
		}
	}
	//when done, send it to mC;
	*/
}

vector<string> Reader::parseForChainGen(string s){
	regex e("\\p{Punct}");
	regex digits("\\d+");
	string s1 = s;
	regex_replace(s1, e, "");
	s1 = regex_replace(s1, digits, "");
	vector<string>output;
	istringstream iss(s1);
	copy(istream_iterator<string>(iss),
		istream_iterator<string>(),
		back_inserter(output));
	return output;
}
