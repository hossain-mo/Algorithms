#include "BubbleSorting.h"
//bubble sort take O(n^2) in worst and average , O(n) in best
//this algo buuble max element in last index 
BubbleSorting::BubbleSorting() {

}
BubbleSorting::~BubbleSorting() {

}
void BubbleSorting::Sort() {
	for (int i = 1; i < 10; i++) {
		for (int j = 0; j <  10-i ; j++) {
			if (*(this->numbers + j) > * (this->numbers + j+1)) {
				this->swap(j, j+1);
			}
		}
	}
}
