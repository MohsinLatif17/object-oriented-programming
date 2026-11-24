
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
void derived1::print2()const{
    cout<<derived1_p2;
}
