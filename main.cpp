#include <iostream>
#include <vector>
#include <iterator>
#include <algorithm>
#include <string>

bool sortHighLow(int i, int j) {
	return j < i;
};

int main(int argc, char** argv) {
	std::vector<int> tradingValues;
	std::vector<int> currentItems;
	int startingValue;
	int currentValue;
	int numTrades = 0;
	bool turnTime = true;
	//temporary values
//	startingValue = 12849;
//	tradingValues.push_back(1);
	
	
	
	std::sort(tradingValues.begin(), tradingValues.end(), sortHighLow);
	currentItems.push_back(startingValue);
	while(!currentItems.empty()) {
		currentValue = currentItems[0];
		++numTrades;
		for(std::vector<int>::iterator itr = tradingValues.begin(); itr != tradingValues.end();) {
			while(currentItems[0] > *itr && currentValue >= *itr){
				currentValue -= *itr;
				if(*itr != 1) {
					currentItems.push_back(*itr);
				}
			}
			++itr;
		}
		currentItems.erase(currentItems.begin());
	}
	std::cout << numTrades;
}