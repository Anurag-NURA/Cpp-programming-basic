//Typcasting in pointers
#include<iostream>
using namespace std;

//we can compare two pointers of two different data types with type casting method

int main()
{
  int a, *ptr;
  a = 25;
  ptr = &a;
  char *ptr1;// this pointer is a character type

  cout<<"\n Address of ptr(int) is ------>"<< &ptr;
  cout<<"\n Address stored in ptr is ---->"<< ptr;
  cout<<"\n Value accessed by *ptr is --->"<< *ptr;
  cout<<"\n Size of int type is --------->"<< sizeof(int);
  
  ptr1 = (char*)ptr; //type casting
  
  cout<<"\n\n After type casting: ";
  cout<<"\n Address of ptr1(char) is ----->"<< &ptr1;
  cout<<"\n Addess of ptr through ptr1 is->"<< ptr1;
  cout<<"\n Value accessed though ptr1 is->"<< *ptr1;
  cout<<"\n Size of char is -------------->"<< sizeof(char);
}
