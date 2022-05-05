//C++ program to understand call by reference

#include<iostream>
using namespace std;

void Increment(int a)
{
  a = a + 1;  
}

int main()
{
  int a;
  a=10;
  Increment(a);
  cout<<a;
  return 0;
}
/*Output will be 10 because it was call by value in which the lifetime
  of a  function is till the time it is executed and it will not effect
  the value present in the main function*/

  