//Dynamic memory allocation in an array
#include<iostream>
using namespace std;

int main()
{
  int size, *ptr;

  cout<<"\n Enter size of array: ";
  cin>>size;

  ptr = new int[size]; //<pointer name> = new <data-type><[size of array]>
  
  cout<<"\n Enter items: ";
  for(int i=0; i<size; ++i)
  {
    cin>>ptr[i];
  }
  
  cout<<"\n Your dynamic array is: ";
  for(int i=0; i<size; ++i)
  {
    cout<<ptr[i]<<"\t";
  }

  return 0;
}