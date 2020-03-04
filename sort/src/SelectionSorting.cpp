#include "SelectionSorting.h"
//select sort take O(n^2) in worst and average case, O(n) in best
//work by select min element and add it in its order
SelectionSorting::SelectionSorting()
{
    //ctor
}

SelectionSorting::~SelectionSorting()
{
    //dtor
}
void SelectionSorting::Sort() {
    for (int i = 0; i < 10; i++) {
        for (int j = i+1; j < 10; j++) {
            if (*(this->numbers + i) > * (this->numbers + j)) {
                this->swap(i, j);
            }
        }
    }
}