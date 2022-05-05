//C++ program to understand class and it's objects 
#include<iostream>
using namespace std;

class student //Creating a class of name 'student'
{
  //name, age and gender are data members of class student
  public:// By default our data members are private and we need to declare them public for users(if required)
  string name;
  int age;
  bool gender;//if 1 than female else 0 is male

  void print()// For displaying the data stored in class
  {
    cout<<"\n Name --> " << name <<endl;
    cout<<"\n Age----> " << age <<endl;
    cout<<"\n Gender-> " << gender <<endl;
  }

};

int main()
{  
   student arr[100]; //it is an array of objects
   int number;
   
   cout<<"\n How many enteries to be entered: ";
   cin>>number;

   for(int i=0; i<number; ++i)// loop for data entry
   {
   cout<<"\n Enter Name: ";  
   cin>>arr[i].name;
   
   cout<<"\n Enter age: ";
   cin>>arr[i].age;

   cout<<"\n Enter gender(1 for female/0 for male): ";
   cin>>arr[i].gender;
   }

   for(int i=0; i<number; ++i)// loop for displaying data according to the number of entries
   {
     arr[i].print();
   }
   return 0;
}