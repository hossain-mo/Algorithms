#ifndef SORTING_H
#define SORTING_H


class Sorting
{
    public:
        Sorting();
        virtual ~Sorting();
        virtual int Sort();
        void setNumbers(int *numbers);
        int* getNumbers();

    protected:

    private:
    int* numbers;
    protected:

    private:
};

#endif // SORTING_H
