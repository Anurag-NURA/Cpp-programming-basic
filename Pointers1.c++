//Introduction to pointers
#include<iostream>
using namespace std;

int main()
{
  int a, *ptr;
  a = 22;
  cout<<"\n Address of 'a' is -------->"<< &a;
  cout<<"\n Value stores in 'a' is --->"<< a;
  cout<<"\n Address of ptr is -------->"<< &ptr;
  cout<<"\n Value stored in ptr is --->"<< ptr;
  
  ptr = &a;//sharing 'a' address with ptr 
  
  cout<<"\n\n After sharing address of 'a' wtih ptr: ";
  cout<<"\n Value stored in ptr is --->"<< ptr;
  cout<<"\n Value *ptr is pointing to->"<< *ptr;
 
 //we can also change value in 'a' with *ptr

 *ptr = 8;
 cout<<"\n\n After changing the value of *ptr:";
 cout<<"\n Value of 'a' is ----------->"<< a;
 cout<<"\n ";
 return 0;
}
/*IMPORTANT POINT -> if we can to store int data type values only in a int type pointer 
  same goes for char data type the pointer should be of char type and for double also
  the pointer data type should be also of a double type*/