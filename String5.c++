//Program to convert a string to upper case or lower case  
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main()
{
   string s1;

   cout<<"\n Enter String : ";
   getline(cin,s1);

   //converting string into upper case
   cout<<"\n In Upper case format: ";
   for(int i=0; i<s1.length(); ++i)
   {
       if( s1[i]>= 'a' && s1[i]<= 'z')
       {
          s1[i] = s1[i] - 32;
       }
   }
   cout<<s1;

   //converting string in lower case
   cout<<"\n In lower case format: ";
    for(int i=0; i<s1.length(); ++i)
    {
        if( s1[i]>= 'A' && s1[i]<= 'Z')
        {
            s1[i] = s1[i] + 32;
        }
    }
    cout<<s1;

   //Another way of converting any string to lower or upper case is thorugh inbuilt function
   transform(s1.begin(), s1.end(), s1.begin(), ::toupper);
   cout<<"\n After using inbulit function: ";
   cout<<"\n In upper case : "<<s1;
   
   transform(s1.begin(), s1.end(), s1.begin(), ::tolower);
   cout<<"\n In lower case : "<<s1;

   return 0;
}

/* 
if we minus char 'a' with 'A' we will get 32 
that means and small character is 32 bit bigger than it's Capital character  

Transform function converts strings into upper and lower case entirely and from specific places also

transform(<String>.begin, <String>.end(), <String>.begin(), ::to<lower/upper>)
           --------------------------      --------------   ------------------ 
            /                                       \                         \
          /                                          \                         this is for the type of operation
     this is for selecting the string              this is to tell from 
                                              where we have to start capitalising   
*/
