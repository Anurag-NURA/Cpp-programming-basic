//C program to understand static variable 

/*In static variables the lifetime of the variable remains all the time
it doesn't print any garbage value instead intialize with 0  */

#include<iostream>
using namespace std;

int sum(int i)
{
  static int s;
  s = s + i;
  return s;
}

int main()
{
  int i;
  for(i=0; i<5; ++i)
  {
    cout<< "\t "<< sum(i);
  }

  return 0;
} 

//Output will be :- 0 1 3 6 10