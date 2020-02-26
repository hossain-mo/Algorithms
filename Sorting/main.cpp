#include <iostream>
#include "Sorting.h"
#include "HeapSorting.h"
using namespace std;

int main()
{
    HeapSorting* obj =  new HeapSorting();
    int arr[10]={8,7,10,3,2,6,1,5,9,4};
    obj->setNumbers(arr);
    obj->Sort();
    int *secArr;
    secArr = (obj->getNumbers());
    for(int i=0;i<10;i++){

        cout<< *(secArr + i);
    }
    return 0;
}
