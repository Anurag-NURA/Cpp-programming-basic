//Program to understand function overiding in class and objects 
/*
if we create an object of the derived class and call the member function which exists in both 
classes (base & derived), the member function of the derived class is invoked and the function 
of the base class is neglected
*/
#include<iostream>
using namespace std;

class base
{
  string name;  
  int roll;
  
  public:
  
  void setdata(string n, int r)
  {
     name = n;
     roll = r;   
  }
  
  void getdata()//This function is having the same name as the dervied class function
  {
      cout<<"\n This is base class getdata()";
      cout<<"\n Name --------->"<<" Anurag";
      cout<<"\n Roll Number -->"<<roll<<endl;
  }
};

class derived : public base 
{
 public : 
 void getdata()
  {
    cout<<"\n This is derived class getdata()"<<endl;  
    base::getdata();//this function is having the same name as the base class function  
  } 
};

int main()
{
  string name;
  int roll_number;

  derived object;  

  cout<<"\n Enter your name: ";
  cin>>name;
  cout<<"\n Enter your roll number: ";
  cin>>roll_number;
  object.setdata(name, roll_number);
  object.getdata();
  //In this case of same function name the preference will be towards the function whose class is being called in the main() function

  return 0;   
} 
