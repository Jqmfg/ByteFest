#include <iostream>
#include <vector>
#include <iterator>
#include <algorithm>

bool sortHighLow(int i, int j) {
	return j < i;
};

int main(int argc, char** argv) {
	std::vector<int> tradingValues;
	std::vector<int> currentItems;
	int startingValue;
	int currentValue = startingValue;
	int numTrades = 0;
	bool turnTime = true;
	//temporary values
	startingValue = 120;
	tradingValues.push_back(15);
	tradingValues.push_back(8);
	tradingValues.push_back(5);
	tradingValues.push_back(62);
	tradingValues.push_back(1);
	
	std::sort(tradingValues.begin(), tradingValues.end(), sortHighLow);
	while(currentItems.empty()) {
		std::cout << "test1" << std::endl;
		currentValue = *currentItems.begin();
		std::cout << "test2" << std::endl;
		currentItems.erase(currentItems.begin());
		std::vector<int>::iterator itr = tradingValues.begin();
		while(itr != tradingValues.end()) {
			if(*itr < currentValue){
				std::cout << "test";
				++numTrades;
				currentValue -= *itr;
				if(*itr != 1)
					currentItems.push_back(*itr);
			}
			else
				++itr;
		}
	}
	std::cout << numTrades;
}