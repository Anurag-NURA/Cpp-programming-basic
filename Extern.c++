#include<iostream>
using namespace std;

int x = 50 ; //variable declared globally
int main()
{
   int x = 10;// variable declared locally
   {
      extern int x ;//extern syntax is for accessing variable globally
      cout<<"\n Global value for x : "<<x;
   }

   cout<<"\n Local value for x  : "<<x;

   return 0;
}