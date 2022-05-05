#include<iostream>
using namespace std;

struct student
{
   int age;
   string fname;
   string lname;
   int standard;
};

int main()
{
  struct student A;

  cout<<"\n Enter age: ";
  cin>>A.age; 
  cout<<"\n Enter First name: ";
  cin>>A.fname;
  cout<<"\n Enter Last name: ";
  cin>>A.lname;
  cout<<"\n Enter Student Standard: ";
  cin>>A.standard;

  cout<< A.age<<" "<<A.fname<<" "<<A.lname<<" "<<A.standard;

  return 0;
}