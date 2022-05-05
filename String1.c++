//Program to understand strings in c++
#include<iostream>
using namespace std;

int main()
{
    //string for one word input only as a string
    
    string s1;
    cout<<"\n Enter one word name: ";
    cin>>s1;
    cout<<s1; 
    
    
    //string for repeating a particular character
    
    string s2(5, 'n'); //string <string name> (<number of times>, <the character in single quotes - '\0'>)
    cout<<s2;
    
     
    //string for storing a sentence 
    
    string s3;
    cout<<"\n Enter a name: ";
    getline(cin, s3);
    cout<<s3;
     
    return 0;
}