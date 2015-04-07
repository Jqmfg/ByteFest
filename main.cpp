#include <iostream>
#include <vector>
#include <iterator>

int main(int argc, char** argv) {
	std::vector<int> tradingValues;
	std::vector<int> currentItems;
	int startingValue;
	int currentValue = startingValue;
	int numTrades;
	bool turnTime = true;
	
	while(!currentItems.empty()) {
		while(turnTime) {
			for(std::vector<int>::iterator itr = tradingValues.begin(); itr != tradingValues.end(); ++itr) {
				if(*itr < startingValue){
					++numTrades;
					currentValue -= *itr;
					turnTime = false;
				}
			}
		}
	}
}