//program to print a rectangle

#include<iostream>
using namespace std;

int main()
{
    int length, breadth;

    cout<<"\n Enter lenght of the rectangle: ";
    cin>>length;
    cout<<"\n Enter breadth of the rectangle: ";
    cin>>breadth;
    cout<<"\n";
    
    for(int i=1; i<=length; ++i)
    {
        for(int j=1; j<=breadth; ++j)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
    return 0;
}