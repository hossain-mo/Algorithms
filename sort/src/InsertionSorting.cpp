#include "InsertionSorting.h"
// insertion sort take O(n^2) in worst and average case, O(n) in best
//work by devide array to 2 parts insert from (unsorted part to sorted part in order place)
InsertionSorting::InsertionSorting() {

}
InsertionSorting::~InsertionSorting() {

}
void InsertionSorting::Sort() {
	for (int i = 1; i < 10; i++) {
		for (int j = i-1; i >= 0; i--) {
			if (*(this->numbers+i)<*(this->numbers+j)) {
				this->swap(i,j);
				i--;
			}
		}
	}
}