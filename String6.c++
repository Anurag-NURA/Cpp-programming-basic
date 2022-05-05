#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

void frequnecy(string s)//IMPORTANT!!!
{
    int freq[26];//26 because there 26 character in english alphabets

    for(int i=0; i<26; ++i)
    {
       freq[i] = 0;
    }
    /*
    this loop will increment according to the alphabet location, for example
    b will be at location 1 and freq[1] item will be incremented according to 
    the frequnecy of the alphabet 
    */
    for(int i=0; i<s.length(); ++i)
    {
       freq[s[i]-'a']++; 
    }
    
    //now it will check whose frequency is the most 

    char ans = 'a';
    int maxF = 0;

    for(int i=0; i<26; i++)
    {
        if(freq[i] > maxF)
        {
            maxF = freq[i]; // this will keep updating according to largest element in the above loop
            ans = i + 'a'; 
            /* 
            this will be representing that character, if it is a ans = a, if it is c than ans  = 2 + 'a' = 'c'
            */
        }
    }
    cout<<"\n Maximum frequency is of " << ans <<" and is repeated in the string " << maxF <<" times.";
}

//this function will convert intger entered in string to largest and smallest number
void convert(string s)
{
   cout<<"\n After converting: ";
    reverse(s.begin(), s.end());
    cout<<"\n Largest number that the string can be converted to  : "<<s;

    sort(s.begin(), s.end());
    cout<<"\n Smallest number that the string can be converted to : "<<s;
}

int main()
{
    string s1, s2;
    
    cout<<"\n Enter a string: ";
    getline(cin, s1);
    cout<<"\n Entered string: "<<s1;
    convert(s1);
    
    cout<<"\n Enter a string: ";
    getline(cin, s2);
    cout<<"\n Entered string: "<<s1;
    frequnecy(s2);

    return 0;
}