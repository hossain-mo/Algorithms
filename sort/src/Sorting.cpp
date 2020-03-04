#include "..\..\..\Project1\Project1\Sorting.h"

Sorting::Sorting()
{
    //ctor
}
void Sorting::setNumbers(int numbers[]){
for(int i=0;i<10;i++){
	this->numbers[i] = numbers[i];
}
    
}
void Sorting::swap(int first_index, int second_index){
    int temp = *(this->numbers + first_index);
    *(this->numbers + first_index)  = *(this->numbers + second_index);
    *(this->numbers + second_index) = temp;
}

Sorting::~Sorting()
{
    //dtor
}

