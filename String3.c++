//program to understand string and it's function

#include<iostream>
#include<string>
using namespace std;

int main()
{
  string name, name2;
  
  cout<<"\n Enter your name: ";
  getline(cin, name);
  cout<<"\n Entered name is: "<< name;

  name.clear(); //this funciton clear all the string entered in the string name
  
  cout<<"\n Enter 1st name: ";
  getline(cin,name);
  cout<<"\n Entered name is: "<< name;

  cout<<"\n Enter 2nd name: ";
  getline(cin,name2);
  cout<<"\n Entered name is: "<< name2;   
  
  cout<<"\n After compairing 1st string with 2nd string: ";
  if(name.compare(name2) ==  0)//this function compares two strings and prints 0 if they are equal in size or 1 if not
  {
      cout<<"\n Strings are equal"<<endl;
  }
  else
  {
      cout<<"\n Strings are not equal"<<endl;
  }

  cout<<"\n Checking if string 'name' is empty or not";
  if(!name.empty()) // string.empty() -> this function checks if a string is empty or not
  {
    cout<<"\n String 'name' is not empty "<<endl;
  }
  else
  {
    cout<<"\n String 'name' is empty "<<endl;
  }
  
  name.clear();
  name2.clear();
  int place, many; 
  
  cout<<"\n Enter a name: ";
  getline(cin,name);
  cout<<"\n Enter place of character to be deleted from the string: ";
  cin>>place;
  cout<<"\n Enter till how much place the chracter to be deleted: ";
  cin>>many;
  
  //erase() function
  name.erase(place, many); //<string name>.erase(enter the place,how many character to be deleted)
  
  cout<<"\n String 'name' after editing: "<<name;

  return 0;
}
