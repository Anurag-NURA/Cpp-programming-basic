//2nd type of inheritance is Multiple Inheritance 
/*
 In this type of inheritance one class will inherit attributes of more than one class

    Class A     Class B
       \         / 
        \      /
         \   /
       Class C
*/
#include<iostream>
using namespace std;

class A
{
  public:
  void Afunc()
  {
     cout<<"\n Func A Inherited "; 
  }
};

class B
{
  public:
  void Bfunc()
  {
      cout<<"\n Func B Inherited ";
  }
};

class C : public A, public B
{ 
  public:
};

int main()
{ 
    C c;
    c.Afunc();
    c.Bfunc();

    return 0;
}