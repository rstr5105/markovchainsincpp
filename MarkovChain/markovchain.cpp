#include "markovchain.h"

using namespace std;
MarkovChain::MarkovChain(){

}

MarkovChain::~MarkovChain(){

}
void MarkovChain::genChains(vector<string> msg) {
	for (int i = 0; i < msg.size() - 1; i++) {
		string priKey = msg[i];
		string nextKey = msg[i + 1];
		map<string, int> tmpMap;
		//if chains does not contain the primary key,
		//create a new temp map, and insert next key,
		//with a value of 1, at the primary key.
		if (chains.count(priKey) == 0) {
			tmpMap[nextKey] = 1;
			chains[priKey] = tmpMap;
		}
		//if chains DOES contain prikey
		//set tmpMap to chains[priKey]
		else {
			tmpMap = chains[priKey];
			//check tmpMap for nextkey, if it does not contain it,
			//add it to the list with a value of 1, and set chains[priKey]
			if (tmpMap.count(nextKey) == 0) {
				tmpMap[nextKey] = 1;
			}
			//if it Does Contain it, increment it by one.
			else {
				tmpMap[nextKey] += 1;
			}
			//now send tmpMap back to chains[priKey]
			chains[priKey] = tmpMap;
		}
	}
}
void MarkovChain::printChains() {
	map<string, map<string, int>>::iterator iter1;
	map<string, int>::iterator iter2;
	for (iter1 = chains.begin(); iter1 != chains.end(); iter1++){
		printf("====%s\n", iter1->first.c_str());
		for (iter2 = iter1->second.begin(); iter2 != iter1->second.end(); iter2++){
			printf("\t++++%s\t%i\n", iter2->first.c_str(), iter2->second);
		}
	}


}