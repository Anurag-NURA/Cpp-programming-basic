//C++ program to print up-side down half pyramid (height from right side)
#include<iostream>
using namespace std;

int main()
{
  int i, j, k, num;

  cout<<"Enter height of pyramid: ";
  cin>>num;

  for(i=0; i<num; ++i)
  {
    
    for(k=0; k<i; ++k)//for i=0 this loop will be false and no space will be printed
    {
      cout<<" ";
    }  
    for(j=0; j<num-i; ++j)
    {
      cout<<"*";
    }
    cout<<endl;
  }
 return 0;
}