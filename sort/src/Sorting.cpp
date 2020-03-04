#include "Sorting.h"

Sorting::Sorting()
{
    //ctor
}
void Sorting::setNumbers(int numbers[]){
    for (int i = 0; i < 10; i++) {
        this->numbers[i] = numbers[i];
    }
}
void Sorting::swap(int first_element, int second_element) {
    int temp = *(this->numbers + first_element);
    *(this->numbers + first_element) = *(this->numbers + second_element);
    *(this->numbers + second_element) = temp;
}
Sorting::~Sorting()
{
    //dtor
}

