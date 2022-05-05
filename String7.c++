/*
Input Format

You are given two strings,  and , separated by a new line. Each string will consist of lower case Latin characters ('a'-'z').

Output Format

In the first line print two space-separated integers, representing the length of  and  respectively.
In the second line print the string produced by concatenating  and  ().
In the third line print two strings separated by a space,  and .  and  are the same as  and , respectively, 
except that their first characters are swapped.
*/

#include<iostream>
#include<string>
using namespace std;

int main()
{
    string s1, s2, s3;
    char temp;
    int i,j;

    cout<<"\n Enter 1st string: ";
    getline(cin,s1);

    cout<<"\n Enter 2nd string: ";
    getline(cin,s2);
   
    i = s1.length();
    j = s2.length();
    cout<<"\n length of 1st string: "<<i;
    cout<<"\n length of 2nd string: "<<j;

    s3 = s1 + s2;
    cout<<"\n After combining both strings: "<< s3;
    
    temp = s1[0];
    s1[0] = s2[0];
    s2[0] = temp;
    cout<<"\n After swapping first characters of both string: ";
    cout<<"\n "<< s1;
    cout<<"\n "<< s2;

    return 0;
}