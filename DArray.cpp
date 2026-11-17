#include <iostream>
#include "DArray.h"
using namespace std;

DArray::DArray() : iptr(nullptr), size(0), capacity(0) {}

DArray& DArray::operator=(const DArray& obj) {
    if (this != &obj) {
        delete[] iptr;

        size = obj.size;
        capacity = obj.capacity;
        iptr = (capacity > 0) ? new int[capacity] : nullptr;

        for (int i = 0; i < size; ++i) {
            iptr[i] = obj.iptr[i];
        }
    }
    return *this;
}

void DArray::push_back(int value) {
    if (size == capacity) {
        int newCapacity{} ;
        if (capacity == 0){
            newCapacity=1;
        } else{
            newCapacity=capacity * 2;
        }
        int* temp = new int[newCapacity];

        for (int i = 0; i < size; ++i) {
            temp[i] = iptr[i];
        }

        delete[] iptr;
        iptr = temp;
        capacity = newCapacity;
    }

    iptr[size++] = value;
}

ostream& operator<<(ostream& out, const DArray& obj) {
    for (int i = 0; i < obj.getSize(); ++i) {
        out << obj.getElement(i) << " ";
    }
    return out;
}

DArray::~DArray() {
    delete[] iptr;
}

int DArray::getSize() const {
    return size;
}

int DArray::getElement(int index) const {
    if (index >= 0 && index < size) {
        return iptr[index];
    }
    return 0;
}



