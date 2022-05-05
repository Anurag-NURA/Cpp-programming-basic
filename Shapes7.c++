//program to print a double pyramid
/*
*      *
**    **
***  ***
********
*/

#include<iostream>
using namespace std;

int main()
{
  int i, j, k, row, space;
  
  cout<<"\n Enter number of rows: ";
  cin>>row;

  for(i=0; i<row; ++i)
  {
     for(j=0; j<i; ++j)//this loop is similar to half pyramid with height from the left
     {
         cout<<"* ";
     }

     space = 2 * row - 2 * i - 1;//this loop is for the order 8 -> 6 -> 4 -> 2 (if row = 5)

     for(k=1; k<space; ++k)
     {
         cout<<"- ";
     }

     for(j=0; j<i; ++j)//this loop is similar to half pyramid with height from the right
     {
         cout<<"* ";
     }
     cout<<endl;
  }
  return 0;
}