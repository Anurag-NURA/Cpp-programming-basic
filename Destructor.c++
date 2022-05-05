//C++ program to understand destuctors 
/*
when a constructor goes out of it's scope then destructor comes into play by destructing the constructor

when there are multiple constructor called in a same scope then the order of destructor is reverese of their order of creation
i.e., 
object A constructed 
object B constructed 
object B destructed 
object A destructed

always remember : we only create destructor when we dynamically allocate storage to any data in the class and if not than 
compiler creates a default destructor itself
*/
#include<iostream>
using namespace std; 

class student
{
  private:
   string name;

  public:
    int age;
    bool gender;
  

  student(string s, int a, bool g)//parameterised constructor
  {   
      cout<<"\n Parameterised Constructor"<<endl;
      name = s;
      age = a;
      gender = g; 
  }

  ~student()
  {
      cout<<"\n Destructor: Destroyed everything!!! \n"<<endl;
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

  return 0;
}
/*Destructor is called automatically after the main function is ended with the destructor 
  destroying all the objects and class created  */