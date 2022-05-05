//Pointers as function argument 

#include<iostream>
using namespace std;

void Increment(int *ptr)
{
 *ptr = *ptr + 1;
}

int main()
{
    int a;
    a = 10;
    cout<<"\n Before Increment 'a' is : "<< a;

    Increment(&a);
    cout<<"\n After Increment 'a' is :"<< a;

    return 0;
}

/* Output will be 
first a = 10 and then a = 11, it happened because it was done by
call by reference. In call by value we pass the value but in call
by reference we passes the address of the value which can be altered 
in any other function call*/