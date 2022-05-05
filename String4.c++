//Program to understand string and it's function 
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main()
{
   string s1, s2;
   int i;
   
   cout<<"\n Enter a string: ";
   getline(cin,s1);

   cout<<"\n Enter a sub string from the string: ";
   cin>>s2;
   
   
   //find() function
   i = s1.find(s2);//this funciton find the place of the sub string in a string 
   cout<<"\n Place of the sub string in the string: ";
   cout<< i;
   
   s1.clear();    
   s2.clear();
   
   cout<<"\n Enter a string: ";
   getline(cin, s1);
   cout<<"\n Enter string to be inserted: ";
   getline(cin, s2);
   cout<<"\n Enter the place where to insert: ";
   cin>>i;
   
   //Insert function ->this function inserts a string in another string at any place 
   cout<<"\n Before inserting: "<<s1<<endl;
   s1.insert(i, s2);//<string name>.insert(<string place>,<string to be inserted>)
   cout<<"\n After inserting: "<<s1<<endl;
   
   s1.clear();
   s2.clear();
   
   cout<<"\n Enter a number as a string: ";
   getline(cin,s1);
   
   i = stoi(s1); //stoi("string")->converts a string to integer
   cout<<"\n Intger type of the string is: "<<i;
   cout<<"\n Incremented value of the string: "<< i+1;
   
   cout<<"\n Converting integer back to string: ";
   s2 = to_string(i);//to_string(intger) -> converts intger value to string 
   cout<<s2;
   
   
   s1.clear();
   s2.clear();
   
   cout<<"\n Enter the string to sort: ";
   getline(cin,s1);
   cout<<"\n Before sorting string is: "<<s1;

   sort(s1.begin(), s1.end());//sorts the character of a string in ascending order 
   //IMPORTANT -> for the function to work #include<algorithm> had to be included
 
   cout<<"\n After sorting string is: " << s1;
   
   reverse(s1.begin(), s1.end());//sorts the character of a string in reverse order 
   cout<<"\n String in reverse order: " << s1;

   return 0;
}