
#include "DArray.h"
using namespace std;
DArray::DArray()
{
    size = 0;
    capacity = 0;
    arr=nullptr;
}


DArray::DArray(const DArray &obj)
{
    size = obj.size;
    capacity = obj.capacity;

    arr = new int[capacity];

    for(int i = 0; i < size; i++)
    {
        arr[i] = obj.arr[i];
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
        delete[] arr;

        size = obj.size;
        capacity = obj.capacity;

        arr = new int[capacity];

        for(int i = 0; i < size; i++)
        {
            arr[i] = obj.arr[i];
        }
    }

    return *this;
}


void DArray::push_back(int value)
{
    if(size < capacity)
    {
        arr[size] = value;
        size++;
    }
    else
    {      
        capacity = capacity * 2;

        int *temp = new int[capacity];
       
        for(int i = 0; i < size; i++)
        {
            temp[i] = arr[i];
        }
        delete[] arr;

      
        arr = temp;
        arr[size] = value;
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
    return arr[index];
}


const int& DArray::operator[](int index) const
{
    return arr[index];
}

ostream& operator<<(ostream &out, const DArray &obj)
{
    for(int i = 0; i < obj.size(); i++)
    {
        out << obj[i] << " ";
    }
    return out;
}
