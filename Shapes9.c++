//program to print a hollow ractangle

#include<iostream>
using namespace std;

int main()
{
    int length, breadth, i, j;

    cout<<"\n Enter length of rectangle : ";
    cin>>length;
    cout<<"\n Enter breadth of rectangle: ";
    cin>>breadth;
    cout<<"\n";
    
    for(i=1; i<=length; ++i)
    {
        for(j=1; j<=breadth; ++j)
        {
            if(i == 1 || i == length || j ==1 || j == breadth)
            {
               cout<<"* ";
            }
            else
            {
               cout<<"  ";
            }
        }
        cout<<endl;
    }
    return 0;
}