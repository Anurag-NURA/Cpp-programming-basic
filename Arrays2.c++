//Sum of all elements in an array

#include<iostream>
using namespace std;


int Sum(int A[], int size)
{
  int i, sum=0;
  for(i=0; i<size; ++i)
  {
    sum = sum + A[i];
  }
  return sum;
}

int main()
{
  int A[] = {1, 4, 5, 23, 8};
  
  int size = sizeof(A)/sizeof(A[0]); 
  /* this is - size of entire array divide by the size of one element in an array 
    it will give us the total number of elements in the array*/
  
  for(int i=0; i<size; ++i)
  {
      cout<<"\t" << A[i];
  }
  
  int Total = Sum(A,size);   
  cout<<"\n Sum of all the elements in the array are: "<< Total;

  return 0;
}