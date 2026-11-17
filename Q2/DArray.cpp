#include "DArray.h"

DArray::DArray() {

size = 0;

capacity = 2;

arr = new int[capacity];

}

DArray::~DArray() {

delete[] arr;

}

void DArray::push_back(int value) {

if (size == capacity) {

capacity = capacity * 2;

int* temp = new int[capacity];

for (int i = 0; i < size; i++) {

temp[i] = arr[i];

}

delete[] arr;

arr = temp;

}

arr[size] = value;

size++;

}

DArray& DArray::operator=(const DArray& obj) {

if (this != &obj) {

delete[] arr;

size = obj.size;

capacity = obj.capacity;

arr = new int[capacity];

for (int i = 0; i < size; i++) {

arr[i] = obj.arr[i];

}

}

return *this;

}

ostream& operator<<(ostream& out, const DArray& obj) {

for (int i = 0; i < obj.size; i++) {

out << obj.arr[i] << " ";

}

return out;

}
