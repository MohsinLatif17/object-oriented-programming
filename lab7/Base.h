#ifndef Base_h
#define Base_h
using namespace std;
#include <iostream>
class Base{
    int base_p1{};
 public:
    Base();
    Base(int p1);
    Base(const Base & );
    ~Base();
  
     Base& operator=(const Base& );
    int getmember()const;
};
ostream& operator<<(ostream&, const Base&);
#endif
