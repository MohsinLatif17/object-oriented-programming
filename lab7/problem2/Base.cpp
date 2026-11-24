#include "Base.h"
#include <iostream>
using namespace std;
Base::Base(){
  cout<<"this is base class default constructor"<<endl;
     base_p1=0;
}
Base::Base(int p1){
     base_p1=p1;
}
Base::~Base(){
    cout<<"this is destructor of base class"<<endl;
    
}

void Base::print1()const{
     cout<<base_p1;
}
