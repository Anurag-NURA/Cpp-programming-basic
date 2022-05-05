//C++ program to print Fibonacci series

#include<iostream>
using namespace std;

int main()
{
    int n1 = 0, n2 = 1, n3, number;
    cout<<"\n Enter the number of series: ";
    cin>>number;
    
    cout<<"\t "<<n1 << "\t"<<n2;// for printing first two number, i.e. 0 and 1

    for(int i=2; i<number; ++i)
    {
      n3 = n1 + n2;
      cout<<"\t"<< n3;
      n1 = n2;
      n2 = n3;
    }

    return 0;
}