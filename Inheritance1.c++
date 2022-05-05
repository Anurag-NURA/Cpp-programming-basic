//Inheritance :- it is possible to inherit attributes and methods from one class to another 
/* 
Derived class(child) :- the class that inherits from another class
Base class(parent) :- the class being inherited from
*/
//1st type of inhertance is Single Inheritance 
/*In this type of inheritance one class will inherit attributes of other classe*/

//REMEMBER: Classes will only inherit public and protected attributes of other classes they cannot inherit private attributes

#include<iostream>
using namespace std;

class A
{
 public:
 void func()
 {
    cout<<"\n Inherited";
 }
};

class B : public A//Class A public and protected attributes will be passed to class B
{
  //public and protected attributes of 'A' will be inserted in 'B' as public attributes only   
};

int main()
{
   B b;
   b.func();
   return 0;
}