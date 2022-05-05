//Program to understand friend function in class 
/*
Friend Function :- A function declared outside the class scope but it has the right to access 
all private and protected memebers of the class
*/ 

#include<iostream>
#include<string>
using namespace std;

class Person
{
  private:  
  string name;
  int age;  

  public:
  Person()//default  constructor 
  {
    
  }  
  
  void set_name(string nname)//setter for name
  {
     name = nname;
  }

  void set_age(int aage)//setter for age
  {
      age = aage;
  }

  void Info()
  {
      cout<<"\n Inside class function";
      cout<<"\n Name ----->"<<name <<endl;
  }

  friend void PassValue (Person &a);//declaring friend function
  // it tell the compiler that this function will be a friend to the class accessing it's value outside the class
};

void PassValue(Person &a)
{ 
    cout<<"\n Outside class function: ";
    cout<<"\n Name ------>" << a.name;
    cout<<"\n age ------->" << a.age<<endl;
} 

int main()
{
    string n;
    int a;

    cout<<"\n Enter name: ";
    getline(cin, n);
    cout<<"\n Enter age: ";
    cin>>a;

    Person p1;
    p1.set_name(n);
    p1.set_age(a);
    p1.Info();
 
    //Friend function called
    PassValue(p1);//call by reference 

    return 0;
}