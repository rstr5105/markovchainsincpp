#include <iostream>
#include <cstdio>
#include <vector>

#include "logger.h"
#include "markovchain.h"
#include "reader.h"

#define slog Logger::Instance()

void init();
void exit();

using namespace std;
int main(){
	init();
	MarkovChain mC;
	vector<string>test;
	Reader rdr("This 1$ a test", mC);

	exit();
}
void init(){
	printf("Hello World!\n");
}

void exit(){
	printf("\n\n\n\n\n\n\n\nPress Enter/Return to Continue!");
	cin.get();
}