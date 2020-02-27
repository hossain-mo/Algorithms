#ifndef HEAPSORTING_H
#define HEAPSORTING_H
#include "Sorting.h"
#include "priority_queue.h"

class HeapSorting : public Sorting
{
    public:
        priority_queue* pq;
        HeapSorting();
        virtual ~HeapSorting();
        void Sort();
    protected:

    private:

        int  pq_parent(int node);
        int  pq_child (int node);
        void pq_insert(int item);
        void bubble_up(int pos);
        void bubble_down(int pos);

        void pq_swap(int f_element,int s_element);
        void make_heap();
        int extract_min();
};

#endif // HEAPSORTING_H
