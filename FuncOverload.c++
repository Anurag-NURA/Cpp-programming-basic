//Program to understand function overloading 
/*
Function overloading is a feature of c++ where two or more 
functions can have the same name but different parameters.

Function overloading can be considered as an example of polymorphism feature in c++

An overlaod function must have:
-> Different type of parameters
-> Different number of parameters
-> Different sequence of parameters 
*/
#include<iostream>
using namespace std;

int sum(int a, int b)
{
    return(a+b);
}

double sum(int a, double b)
{
    return (a+b);
}

int main()
{
    int x,y;
    double q;

    cout<<"\n Enter any number: ";
    cin>>x>>y>>q;

    cout<<sum(x,y);
    cout<<"\n";
    cout<<sum(x,q);

    return 0;
}