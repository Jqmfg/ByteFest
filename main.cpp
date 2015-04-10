#include <iostream>
#include <vector>
#include <iterator>
#include <algorithm>
#include <string>
#include <fstream>

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
	int numTests;
	std::string numTestsString;
	//temporary values
//	startingValue = 12849;
//	tradingValues.push_back(1);
	
	//file input
	std::ifstream tradingPost("trading_post.in");
	if(!tradingPost.is_open()) {
		std::cout << "Couldn't find the file" << std::endl;
		std::cout << "Please place the file in the same directory as the executable" << std::endl;
	}
	else {
		std::string tmp;
		tradingPost.getline()
		
	}
	
	
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
	std::cin.get();
}