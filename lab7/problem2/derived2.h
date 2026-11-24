
#ifndef derived2_h
#define derived2_h
#include "derived1.h"
using namespace std;

class derived2:public derived1{
    int derived2_p3{};
    
public:
    derived2();
    derived2(int p1,int p2, int p3);
    ~derived2();    
    void print()const;
};
#endif
