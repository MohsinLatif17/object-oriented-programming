
#include "derived1.h"
#include "Base.h"
using namespace std;
#include <iostream>

derived1::derived1():Base(){  
     derived1_p2=0;
}

derived1::derived1(int p1, int p2):Base(p1){
    derived1_p2=p2;
}

derived1::~derived1(){
    cout<<"this is destructor of derived1"<<endl;
}
void derived1::print()const{
    Base::print();
    cout<<derived1_p2;
    
}
derived1::derived1(const derived1& rhs):Base(rhs){
    derived1_p2=rhs.derived1_p2;
    cout<<"copy constructor of derived1";
}

 derived1& derived1::operator=(const derived1& rhs){
    if(this!=&rhs){
         derived1_p2=rhs.derived1_p2;
         Base::operator=(rhs);
    }
    return *this;

 }
 int derived1::getmember()const{
    return derived1_p2;
 }
 ostream& operator<<(ostream& out, const derived1& rhs){
    out<<rhs.getmember();
    return out;

 }
