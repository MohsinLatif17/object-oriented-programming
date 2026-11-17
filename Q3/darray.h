

#ifndef DARRAY_H
#define DARRAY_H
#include <iostream>
using namespace std;

class DArray {
private:
    int* arr{};
    int size{};
    int capacity{};

public:
    DArray();
    DArray(const DArray& obj);
    ~DArray();

    void push_back(int value);

    int size() const;
    int capacity() const;

    const int& operator[](int index) const;
    bool operator==(const DArray& obj) const;
};

ostream& operator<<(ostream& out, const DArray& obj);
#endif
