#ifndef problem1_h
#define problem1_h
using namespace std;
class Base{
    int object_formation{};
 public:
    Base();
    ~Base();
};


class derived1:public Base{
        int derived1_object{};
 public:
        derived1();
        ~derived1();
};


class derived2:public derived1{
    int derived2_object{};
public:
    derived2();
    ~derived2();
};
#endif
