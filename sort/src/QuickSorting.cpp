#include "QuickSorting.h"
//need randomize list before apply it to choose median element as pivot each time to take O(n lg n)
QuickSorting::QuickSorting()
{
    //ctor
}

QuickSorting::~QuickSorting()
{
    //dtor
}
void QuickSorting::Sort(){

}
void QuickSorting::Sort(int low,int high){
    int pivot;
    if(low<high){
        pivot=this->partition(low,high);
        this->Sort(low,pivot-1);
        this->Sort(pivot+1,high);
    }
}
void QuickSorting::swap(int f_element,int s_element){
    int temp = *(this->numbers+f_element);
    *(this->numbers+f_element) = *(this->numbers+s_element);
    *(this->numbers+s_element) = temp;
}
int QuickSorting::partition(int low,int high){
    int pivot = *(this->numbers+high);
    int partitioning_index = low;
    for(int i=low;i<high;i++){
        if(*(this->numbers+i) < pivot){

            this->swap(i,partitioning_index);
            partitioning_index++;
        }
    }
    this->swap(partitioning_index,high);
    return partitioning_index;
}
