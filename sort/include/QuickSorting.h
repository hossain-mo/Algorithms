#ifndef QUICKSORTING_H
#define QUICKSORTING_H
#include "Sorting.h"


class QuickSorting : public Sorting
{
    public:
        QuickSorting();
        virtual ~QuickSorting();
        void Sort(int low, int high);
        void Sort();
    protected:

    private:
        int partition(int low,int high);
        
};

#endif // QUICKSORTING_H
