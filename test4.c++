//C++ program to print Even Fibonacci numbers
#include<iostream>
using namespace std;
#define limit 4000000
int main()
{
  int n1 = 0, n2 = 1, n3;
  long long sum = 0;

  while(sum<limit)
  {
    n3 = n1 +n2;
    n1 = n2;
    n2 = n3;

    if(n3%2 == 0)
    {
      sum = sum + n3;
    }  
  }
  cout<<"\n Sum of "<<limit<<" is : "<<sum;
  return 0;
}