#include<iostream>
using namespace std;

class student
{  
  public:
  string name;
  long long phone;
  int age;
  
  student()
  {

  }
  
  student(string n, long long p, int a)
  {
      name = n ;
      phone = p ;
      age = a ;
  }

  void print()
  {
      cout<<"\n Name -------> "<<name;
      cout<<"\n Age --------> "<<age;
      cout<<"\n phone no ---> "<<phone;
  }

  void read()
  {
      cout<<"\n Enter Name: ";
      cin>>name;
      cout<<"\n Enter Age: ";
      cin>>age;
      cout<<"\n Enter Phone number: ";
      cin>>phone;
  }
};

int main()
{
   student A("Anurag", 9924834133, 19);
   A.print();
    
   student B;
   B.read();
   B.print();
   
   return 0; 
}