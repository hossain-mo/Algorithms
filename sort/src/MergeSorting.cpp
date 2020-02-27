#include "MergeSorting.h"
#include <iostream>
#include <queue>
using namespace std;
MergeSorting::MergeSorting()
{
    //ctor
}

MergeSorting::~MergeSorting()
{
    //dtor
}
void MergeSorting::Sort(){

}
void MergeSorting::Sort(int low, int high){
        int middle;
        if(high> low){
            middle = (low + high) / 2;
            this->Sort(low,middle);
            this->Sort(middle+1,high);
            this->merge(low,middle,high);
        }
}
void MergeSorting::merge(int low, int middle, int high){
    queue <int>buffer1;
    queue <int>buffer2;
    for(int i=low;i<=middle;i++)
        buffer1.push(*(this->numbers+i));
    for(int i=middle+1;i<=high;i++)
        buffer2.push(*(this->numbers+i));
    int itr = low;
    while(!buffer1.empty() && !buffer2.empty()){
        if(buffer1.front() <= buffer2.front()){
            *(this->numbers+itr) = buffer1.front();buffer1.pop();itr++;
        }else{
            *(this->numbers+itr) = buffer2.front();buffer2.pop();itr++;
        }

    }
     while(!buffer1.empty() ){
            *(this->numbers+itr) = buffer1.front();buffer1.pop();itr++;
    }
    while(!buffer2.empty() ){
            *(this->numbers+itr) = buffer2.front();buffer2.pop();itr++;
    }

}
