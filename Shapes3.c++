//C++ program to print up-side down half pyramid (height from left side)
#include<iostream>
using namespace std;

int main()
{
  int i, j, num;

  cout<<"Enter height of pyramid: ";
  cin>>num;

  for(i=0; i<=num; ++i)
  {
    for(j=0; j<=num-i; ++j)//(num-i) because with increase in row stars will be decreasing
    {
      cout<<"*";
    }
    cout<<endl;
  }
 return 0;
}