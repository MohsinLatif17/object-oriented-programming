
#ifndef DARRAY_H
#define DARRAY_H

#include <iostream>
using namespace std;

class DArray
{
private:
    int *arr{};
    int size{};
    int capacity{};

public:
   
    DArray();
     void push_back(int value);
    ~DArray();

    DArray& operator=(const DArray &obj);
   

    int size() const;
    int capacity() const;
    
    int& operator[](int index);
    
};
ostream& operator<<(ostream &out, const DArray &obj);
#endif
