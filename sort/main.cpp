#include <iostream>
#include "Sorting.h"
#include "HeapSorting.h"
#include "MergeSorting.h"
#include "QuickSorting.h"
#include "SelectionSorting.h"
#include "BubbleSorting.h"
#include "InsertionSorting.h"
using namespace std;

int main()
{
    HeapSorting* heap_obj = new HeapSorting();
    int arr[10] = { 8,7,10,3,2,6,1,5,9,4 };
    for (int i = 0; i < 10; i++) {
        cout << arr[i] << " ";
    }cout << endl;
    heap_obj->setNumbers(arr);
    heap_obj->Sort();
    cout << "apply heap sort\n";
    for (int i = 0; i < 10; i++) {
        cout << *(heap_obj->numbers + i) << " ";
    }cout << endl;
    
    MergeSorting* merge_obj = new MergeSorting();
    merge_obj->setNumbers(arr);
    merge_obj->Sort(0, 9);
    cout << "apply merge sort\n";
    for (int i = 0; i < 10; i++) {
        cout << *(merge_obj->numbers + i) << " ";
    }cout << endl;
    QuickSorting* quick_obj = new QuickSorting();
    quick_obj->setNumbers(arr);
    quick_obj->Sort(0, 9);
    cout << "apply merge sort\n";
    for (int i = 0; i < 10; i++) {
        cout << *( quick_obj->numbers + i) << " ";
    }cout << endl;
    SelectionSorting* selection_obj = new SelectionSorting();
    selection_obj->setNumbers(arr);
    selection_obj->Sort();
    cout << "apply selection sort\n";
    for (int i = 0; i < 10; i++) {
        cout << *( selection_obj->numbers + i) << " ";
    }cout << endl;
    BubbleSorting* bubble_obj = new BubbleSorting();
    bubble_obj->setNumbers(arr);
    bubble_obj->Sort();
    cout << "apply bubble sort\n";
    for (int i = 0; i < 10; i++) {
        cout << *(bubble_obj->numbers + i) << " ";
    }cout << endl;
    InsertionSorting* insertion_obj = new InsertionSorting();
    insertion_obj->setNumbers(arr);
    insertion_obj->Sort();
    cout << "apply insertion sort\n";
    for (int i = 0; i < 10; i++) {
        cout << *(insertion_obj->numbers + i) << " ";
    }cout << endl;
    return 0;
}
