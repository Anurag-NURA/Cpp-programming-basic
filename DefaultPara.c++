//Default parameters in Functions
/*
A default is a value provided in function declaration that is
automatically assigned by the compiler if caller of the function 
doesn't provide a value for the argument with default value. 

for example: 
int sum (int x, int y, int z=0 , int w=0)
{
    retrun (x+y+z+w);
}
*/

#include<iostream>
using namespace std;

int sum(int a, int b, int c=0, int d=5)
{
    return (a+b+c+d);
}

int main()
{
   int w,x,y,z;
   cout<<"\n Enter any numbers: ";
   cin>>w>>x>>y>>z;

   cout<<"\n Sum of " << w <<" " << x <<" "<< y<<" "<< z <<"----->" <<sum(w,x,y,z);
   cout<<"\n Sum of " << w <<" " << x <<" "<<"0" << " 5"<<"----->" <<sum(w,x) ;   
   return 0;
}