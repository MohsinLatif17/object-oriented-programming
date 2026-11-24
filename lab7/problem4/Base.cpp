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


 Base::Base(const Base& rhs){
    base_p1=rhs.base_p1;
    cout<<"base class copy constructor";
 } 

 Base& Base::operator=(const Base& rhs){
    if(this!=&rhs){
         base_p1=rhs.base_p1;
    }
    return *this;

 }
 int Base:: getmember()const{
    return base_p1;
 }
 ostream& operator<<(ostream& out, const Base& rhs){
    out<<rhs.getmember();
    return out;
 }
