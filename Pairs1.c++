#include<iostream>
using namespace std;

int main()
{
    //pair function pairs to different type of data type items in one 
    pair<int, char> p1; //pair <1st data-type, 2nd data-type> any name;

    cout<<"\n Enter integer: ";
    cin>>p1.first;
    cout<<"\n Enter character: ";
    cin>>p1.second;
    cout<<"\n The pair is: "<< p1.first<<", "<< p1.second;
    
    return 0;
}