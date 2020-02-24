#include <iostream>
#include "HeapSorting.h"
using namespace std;

int main()
{
    HeapSorting obj =  HeapSorting();
    int arr[10]={1,2,3,4,5,6,7,8,9,10};
    obj.setNumbers(arr);
    for(int i=0;i<10;i++){
    int *secArr;
    secArr = (obj.getNumbers());
        cout<< *(secArr + i);
    }
    return 0;
}
