#include "problem1.h"
#include <iostream>
Base::Base(){
    cout<<"this is default constructor of base class"<<endl;
    object_formation=0;
}

derived1::derived1():Base(){
    cout<<"this is derived1 class default constructor"<<endl;
    derived1_object=0;
}

derived2::derived2():derived1(){
    cout<<"this is derived2 class constructor"<<endl;
    derived2_object=0;
}

Base::~Base(){
    cout<<"this is destructor of base class"<<endl;
    
}
derived1::~derived1(){
    cout<<"this is destructor of derived1"<<endl;
}

derived2::~derived2(){
    cout<<"this is derived2 destructor"<<endl;
}
