#include <iostream>
#include <cstdio>
#include <vector>

#include "logger.h"
#include "markovchain.h"


#define slog Logger::Instance()

using namespace std;
int main(){
	printf("Hello World!\n");

	vector<string>test;

	//slog->Log("System Running!");
	
	MarkovChain mC;
	vector<string> vec;
	vec.push_back("Hello");
	vec.push_back("how");
	vec.push_back("are");
	vec.push_back("you");
	vec.push_back("today");
	mC.genChains(vec);
	vec.clear();
	vec.push_back("Hello");
	vec.push_back("choclate");
	mC.genChains(vec);
	vec.clear();
	vec.push_back("how");
	vec.push_back("does");
	vec.push_back("it");
	vec.push_back("do");
	vec.push_back("that");
	mC.genChains(vec);
	vec.clear();
	vec.push_back("how");
	vec.push_back("about");
	vec.push_back("this");
	mC.genChains(vec);
	vec.clear();
	vec.push_back("does");
	vec.push_back("it");
	vec.push_back("work");
	mC.genChains(vec);
	vec.clear();
	vec.push_back("how");
	vec.push_back("does");
	vec.push_back("it");
	vec.push_back("work");
	vec.push_back("now");
	mC.genChains(vec);
	vec.clear();
	mC.printChains();

	

	printf("\n\n\n\n\n\n\n\nPress Enter/Return to Continue!");
	cin.get();

}