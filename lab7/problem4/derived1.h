#ifndef derived1_h
#define derived1_h
#include "Base.h"

using namespace std;

class derived1:public Base{
    int derived1_p2{};
    
public:
    derived1();
    derived1(int p1,int p2);
    derived1(const derived1&);
    ~derived1();
   
  derived1& operator=(const derived1& );
  int getmember()const;
};
ostream& operator<<(ostream& out, const derived1&rhs);
#endif
