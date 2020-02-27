#include <iostream>
#include "Sorting.h"
#include "HeapSorting.h"
#include "MergeSorting.h"
using namespace std;

int main()
{
    HeapSorting* obj =  new HeapSorting();
    int arr[10]={8,7,10,3,2,6,1,5,9,4};
    for(int i=0 ;i<10; i++){
            cout<< arr[i]<< " ";
    }cout<<endl;
    obj->setNumbers(arr);
    obj->Sort();
    cout<< "apply heap sort\n";
    for(int i=0 ;i<10; i++){
            cout<< arr[i]<< " ";
    }cout<<endl;
    int arr2[10]={8,7,10,3,2,6,1,5,9,4};
    MergeSorting* obj2 =  new MergeSorting();
    obj2->setNumbers(arr2);
    obj2->Sort(0,9);
    cout<< "apply merge sort\n";
     for(int i=0 ;i<10; i++){
            cout<< arr2[i]<< " ";
    }cout<<endl;
    return 0;
}
