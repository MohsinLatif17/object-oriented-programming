
#ifndef derived2_h
#define derived2_h
#include "derived1.h"
using namespace std;

class derived2:public derived1{
    int derived2_p3{};
    
public:
    derived2();
    derived2(int p1,int p2, int p3);
    derived2(const derived2&);
    ~derived2();    
    void print()const;
    derived2& operator=(const derived2& );
    int getmember()const;
    void setValue(int);
};
ostream& operator<<(ostream& out, const derived2&rhs);
#endif
