//C++ program to print a half pyramid (height from left side)

#include<iostream>
using namespace std;

int main()
{
  int i, j, num;
  
  cout<<"Enter height of pyramid: ";
  cin>>num;
  
  for(i=0; i<num; ++i)
  {
      for(j=0; j<=i; ++j)
      {
          cout<<"* ";
      }
      cout<<endl;
  }
  return 0;
}
