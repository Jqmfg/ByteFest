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
	startingValue = 10;
	tradingValues.push_back(15);
	tradingValues.push_back(10);
	tradingValues.push_back(3);
	tradingValues.push_back(1);
	
	currentItems.push_back(startingValue);
	while(!currentItems.empty()) {
		currentValue = currentItems[0];
		currentItems.erase(currentItems.begin());
		for(std::vector<int>::iterator itr = tradingValues.begin(); itr != tradingValues.end();) {
			while(currentValue > *itr){
				currentValue -= *itr;
				if(*itr != 1)
					currentItems.push_back(*itr);
				++numTrades;
				std::cout << "currentValue = " << currentValue << " *itr = " << *itr << " numTrades = " << numTrades << std::endl;
				std::string dummy;
				std::getline(std::cin, dummy);
			}
			++itr;
			std::cout << "The currentItems list is: ";
			for(std::vector<int>::iterator mtr = currentItems.begin(); mtr != currentItems.end(); ++mtr) {
				std::cout << *mtr << " ";
			}
			std::cout << std::endl;
			std::string dummy;
			std::getline(std::cin, dummy);
		}
	}
	
	
	
	
//	currentItems.push_back(startingValue);
//	std::sort(tradingValues.begin(), tradingValues.end(), sortHighLow);
//	while(!currentItems.empty()) {
//		currentValue = currentItems[0];
//		currentItems.erase(currentItems.begin());
//		for(std::vector<int>::iterator itr = tradingValues.begin(); itr != tradingValues.end();) {
//			std::cout << "The current value of the iterator is " << *itr << std::endl;
//			std::cout << "The current value of currentValue is " << currentValue << std::endl;
//			if(*itr < currentValue){
//				++numTrades;
//				currentValue -= *itr;
//				if(*itr != 1)
//					currentItems.push_back(*itr);
//			}
//			else
//				++itr;
//		}
//	}
	std::cout << numTrades;
}