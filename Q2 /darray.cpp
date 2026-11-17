
#include "DArray.h"
using namespace std;
DArray::DArray()
{
    size = 0;
    capacity = 0;
    iptr=nullptr;
}


DArray::DArray(const DArray &obj)
{
    size = obj.size;
    capacity = obj.capacity;

    iptr = new int[capacity];

    for(int i{}; i < size; ++i)
    {
        iptr[i] = obj.iptr[i];
    }
}


DArray::~DArray()
{
    delete[] arr;
}


DArray& DArray::operator=(const DArray &obj)
{
    if(this != &obj)
    {
        

        size = obj.size;
        capacity = obj.capacity;

        iptr = new int[capacity];

        for(int i{}; i < size; ++i)
        {
            iptr[i] = obj.iptr[i];
        }
    }

    return *this;
}


void DArray::push_back(int value)
{
    if(size < capacity)
    {
        iptr[size] = value;
        size++;
    }
    else
    {      
        capacity = capacity * 2;

        int *temp = new int[capacity];
       
        for(int i{}; i < size; ++i)
        {
            temp[i] = iptr[i];
        }
        delete[] iptr;

      
        iptr = temp;
        iptr[size] = value;
        size++;
    }
}


int DArray::size() const
{
    return size;
}


int DArray::capacity() const
{
    return capacity;
}


int& DArray::operator[](int index)
{
    return iptr[index];
}




ostream& operator<<(ostream &out, const DArray &obj)
{
    for(int i{}; i < obj.size(); ++i)
    {
        out << obj[i] << " ";
    }
    return out;
}
