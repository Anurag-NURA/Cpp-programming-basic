/*
Encapsulation :- Encapsulation is a method of making a complex system easier to handle for end users.  
                 The user need not worry about internal details and complexities of the system. 
                 Encapsulation is a process of wrapping the data and the code, that operate on the data into a single entity. 

Abstraction :- Hiding sensitive data from the user
               Abstraction is the concept of object-oriented programming that "shows" only essential attributes 
               and "hides" unnecessary information.

We can use encapsulation by using 'protected' which will help to derive the data to other classes but will not share 
with the outside classes 
*/


#include<iostream>
using namespace std;

class student
{
  private:
  long long number;
  void print_number()
  {
    cout<<"\n Phone number is: "<<number;
  }

  public:
  int roll;
  void print_roll()
  {
    cout<<"\n Roll number is: "<< roll;
  }

  protected:
  string name;
  void print_name()
  {
    cout<<"\n Name is: "<<name;
  }
};

int main()
{
  student A;
  cout<<"\n Enter roll number: "; 
  cin>>A.roll; 
  A.print_roll();

  return 0;  
}