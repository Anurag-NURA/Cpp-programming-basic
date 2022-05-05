//C++ program to us pointer in arrays
#include<iostream>
#include<conio.h>
using namespace std;

int main()
{   
 int A[] = {2, 4, 5, 6, 7, 8};
 system("cls");
 cout<< "\n Array address of 1st location using A -------->"<< A ;
 cout<< "\n Array address of 1st location using &A[0] ---->"<< &A[0];
 cout<< "\n Array element at 1st location using *A ------->"<< *A;
 cout<< "\n Array element at 1st location using A[0] ----->"<< A[0];

/*
 If we want to access data stored in array at i position than 
  we will use *A + i for it or A[i] 
*/ 

 return 0;
}

