#ifndef DArray_h
#define DArray_h
using namespace std;

class DArray{
    int *iptr{};
    int size{};
    int capacity{};

public:
    DArray();
    void push_back(int);
    DArray& operator=(const DArray &obj);
    ~ DArray();
    int getSize()const;
    int getElement(int)const;
};
ostream& operator<<(ostream& out , const DArray &obj);
#endif
