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
    print1();
    print2();
    cout<<derived2_p3;
}
