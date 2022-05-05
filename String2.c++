//program to understand string function 
#include<iostream>
#include<string.h>
using namespace std;

int main()
{
    string s1, s2;
    int i, count;

    cout<<"\n Enter half word: ";
    cin>>s1;
    cout<<"\n Enter other half: ";
    cin>>s2;

    s1.append(s2);//we can even use s1 = s1 + s2
   
    cout<<"\n After combining: "<<s1<<endl;
    
    
      
      count = s1.length(); //or use s1.size() to find the number of characters or spaces in the string

      for(i=0; i<count; ++i)
      {  //if we want to access any character in a string than 
         cout<<i+1<<" place character is: " << s1[i] <<endl;    
      }

    return 0;
}