#ifndef SORTING_H
#define SORTING_H


class Sorting
{
    public:
        Sorting();
        virtual ~Sorting();
        virtual void Sort()=0;
        void setNumbers(int *numbers);
        int* numbers;
    protected:

    private:


};

#endif // SORTING_H
