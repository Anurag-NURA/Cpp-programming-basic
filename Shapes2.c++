//C++ program to print a half pyramid (height from right side)
#include<iostream>
using namespace std;

int main()
{
 int i, j, k, num;
 
 cout<<"Enter height of pyramid: ";
 cin>>num;

 for(i=0; i<num; ++i)
 {
     for(j=0; j<=num-i; ++j)//(num-i) because with increase in row the space will be decreasing 
     {
         cout<<" ";
     }
     for(k=0; k<=i; ++k)
     {
         cout<<"*";
     }
     cout<<endl;
 }
 return 0;
}