#ifndef SORTING_H
#define SORTING_H


class Sorting
{
    public:
        Sorting();
        virtual ~Sorting();
        virtual void Sort()=0;
        void setNumbers(int numbers[]);
        void swap(int first_element,int second_element);
        int  numbers [10];
    protected:

    private:


};

#endif // SORTING_H
