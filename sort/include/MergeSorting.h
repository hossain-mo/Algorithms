#ifndef MERGESORTING_H
#define MERGESORTING_H
#include "Sorting.h"

class MergeSorting : public Sorting
{
    public:
        MergeSorting();
        virtual ~MergeSorting();
        void Sort(int low, int high);
        void Sort();

    protected:

    private:
        void merge(int low, int middle, int high);
};

#endif // MERGESORTING_H
