#include "derived1.h"
#include "Base.h"
#include "derived2.h"
#include <iostream>
using namespace std;

derived2::derived2():derived1(){
     derived2_p3=0;
}

derived2::derived2(int p1,int p2,int p3):derived1(p1,p2){
    derived2_p3=p3;

}

derived2::~derived2(){
    cout<<"this is derived2 destructor"<<endl;
}

void derived2:: print() const{
   derived1:: print();
    cout<<derived2_p3;
}

 derived2::derived2(const derived2& rhs):derived1(rhs){
    
    derived2_p3=rhs.derived2_p3;
    cout<<"this is copy constructor of derived2";
 } 

 derived2& derived2::operator=(const derived2 & rhs){
    if(this!=&rhs){
    derived1::operator=(rhs);
     derived2_p3=rhs.derived2_p3;
    }
    return *this;

 }
 int derived2::getmember()const{
    return derived2_p3;
 }
 ostream& operator<<(ostream& out, const derived2& rhs){
    out<<rhs.getmember();
    return out;
 }
void derived2::setValue(int p3){
    derived2_p3=p3;
}
