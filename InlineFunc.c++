//Program to understand Inline function 
/*
If a function is inline, the compiler places a copy of the code of 
that function at each point where the function is called at compile time.
*/

#include<iostream>
using namespace std;

inline int add(int a, int b)
{
   return (a+b);
}

int main()
{
  int x, y, sum;
  cout<<"\n Enter any two number: ";
  cin>>x>>y;

  sum = add(x,y);
  cout<<"\n Result: "<<sum;
  return 0;
}


  