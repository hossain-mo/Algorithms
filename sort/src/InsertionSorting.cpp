#include "InsertionSorting.h"
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