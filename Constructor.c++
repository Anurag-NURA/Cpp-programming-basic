//C++ program to understand different type constructors

#include<iostream>
using namespace std;

class student
{
  private:
   string name;

  public:
    int age;
    bool gender;
  
  student() //default constructor
  { 
    cout<<"\n Default constructor"<<endl;
  }

  student(string s, int a, bool g)//parameterised constructor
  {   
      cout<<"\n Parameterised Constructor"<<endl;
      name = s;
      age = a;
      gender = g; 
  }

  student(student &temp)//Copy constructor
  {
    cout<<"\n Copy Constructor"<<endl;
    name = temp.name;
    age = temp.age;
    gender = temp.gender;
  }

  void printPvt()//this funciton is for printing private members values
  {
      cout<<"\n Name is ---> "<<name<<endl;
  }

  void printPbl()//this function is for printing public members values
  {
      cout<<"\n Age is ----> "<<age<<endl;
      if(gender == 0)
      {
          cout<<"\n Gender is ---> Male"<<endl;
      }
      else
      {
          cout<<"\n Gender is ---> Female"<<endl;
      }
  }
};

int main()
{
  student a("Anurag", 19, 0);
  a.printPvt();
  a.printPbl();

  student b;
  
  student c = a;//Or we can also write it as student c(a)

  /* whenever we call a class without any parameters a default constructor comes into play
   it can only be called if we have created one default constructor in the class or it will show an error*/
  return 0;
}