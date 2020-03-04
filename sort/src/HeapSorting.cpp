#include "..\..\..\Project1\Project1\HeapSorting.h"
#include "..\..\..\Project1\Project1\priority_queue.h"
#include <iostream>
//heap is in-place sorting algorithm take O(n lg n)
using namespace std;
HeapSorting::HeapSorting()
{
    //ctor
    this->pq = new priority_queue();

}

void HeapSorting::Sort(){
    this->make_heap();
    for(int i=0;i<10;i++){
        *(this->numbers+i) = this->extract_min();
    }
}
HeapSorting::~HeapSorting()
{
    //dtor

}
int HeapSorting::pq_parent(int node){
    return node==1 ? -1 : (int) (node/2);
}
int HeapSorting::pq_child(int node){
    return node*2;
}
void HeapSorting::pq_swap(int f_element,int s_element){
    int temp = this->pq->data[f_element];
    this->pq->data[f_element] = this->pq->data[s_element];
    this->pq->data[s_element] = temp;
}
// O(lg n)
void HeapSorting::bubble_up(int  pos){
    int parent = pq_parent(pos);
    if(parent == -1);
        //do nothing
    else if(this->pq->data[parent] > this->pq->data[pos]){
        this->pq_swap(parent,pos);
        this->bubble_up(parent);
    }
}
//O(n lg n)
void HeapSorting::pq_insert(int  item){
    if(this->pq->size <= 10){
        this->pq->size++;
        this->pq->data[this->pq->size] = item;
        this->bubble_up(this->pq->size);

    }else{
        cout<< "priority queue overflow";
    }
}
void HeapSorting::make_heap(){

    for(int i=0 ;i<10; i++){
      this->pq_insert(*(this->numbers+i));
    }

}
void HeapSorting::bubble_down(int pos){
    int child_pos = this->pq_child(pos);
    int min = pos;
    for(int i=0;i<=1;i++){
        if( child_pos+i <= this->pq->size){
            if(this->pq->data[min] > this->pq->data[child_pos+i])
                min = child_pos+i;
        }
    }
    if(pos != min){
        this->pq_swap(pos,min);
        this->bubble_down(min);
    }
}
int HeapSorting::extract_min(){
    int min = -1;
    if(this->pq->size<=0)
        cout<< "empty queue";
    else{
        min = this->pq->data[1];
        this->pq->data[1] = this->pq->data[this->pq->size];
        this->pq->size--;
        this->bubble_down(1);
    }
    return min;
}
