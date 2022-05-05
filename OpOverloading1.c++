//C++ program to understand operator overloading
#include<iostream>
using namespace std;

class student
{
  private:
  string name;
  
  public:
  long long phone;
  int age;
  bool gender;
  
  student(string n, long long p, int a, bool g)
  {
    cout<<"\n Parameterised Constructor";  
    name = n;
    phone = p;
    age = a;
    gender =g;
  } 
  
  void printPvt()
  {
    cout<<"\n Name --------> "<<name<<endl;
  }

  void printPbl()
  {
    cout<<"\n Phone -------> "<<phone<<endl;
    cout<<"\n Age ---------> "<<age <<endl;
    if(gender == 0)
    {
    cout<<"\n Gender ------> Male"<<endl;
    }
    else
    {
    cout<<"\n Gender ------> Female"<<endl; 
    }
  }

  bool operator == (student &temp)
  {  //we are compairing 'name' member of second operator with first operator name i.e. temp.name
    if(name==temp.name && phone==temp.phone && age==temp.age && gender==temp.gender)
    {
       return true;
    }
    else
    {
       return false;
    }
  }
};

int main()
{
  student a("Anurag", 9971996052, 19, 0);
  cout<<"\n Details of Student 'a' :- ";
  a.printPvt();
  a.printPbl();

  student b("Anurag", 9971996052, 19, 0);
  cout<<"\n Details of Student 'b' :- ";
  b.printPvt();
  b.printPbl();

  student c("Jignesh", 9971153221, 20, 0);
  cout<<"\n Details of Student 'c' :- ";
  c.printPvt();
  c.printPbl();

  if(a == b)
  {
      cout<<"\n Student 'a' and 'b' are same";
  } 
  else
  {
      cout<<"\n Student 'a' and 'b' are not same";
  }
  
  if(a == c)
  {
      cout<<"\n Student 'a' and 'c' are same";
  } 
  else
  {
      cout<<"\n Student 'a' and 'c' are not same";
  }
   
   if(b == c)
  {
      cout<<"\n Student 'b' and 'c' are same";
  } 
  else
  {
      cout<<"\n Student 'b' and 'c' are not same";
  }
  return 0;
}
