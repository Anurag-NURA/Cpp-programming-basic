//Program to call class functions in global funcitons 
#include<iostream>
using namespace std;

class Alpha
{
  public:  
  string name;
  int age; 
  long long phone;

  void set(string n, int a, long long p);
  
  void get()
  {
      cout<<"\n Name ----> " <<name<<endl;
      cout<<"\n Age -----> " <<age <<endl;
      cout<<"\n Phone ---> " <<phone <<endl;
  }
};

void Alpha :: set(string n, int a, long long p)
{
     name = n;
     age = a;
     phone = p;
}

int main()
{
    string name ;
    int age; 
    long long phone ;
    Alpha object;

    cout<<"\n Enter name : ";
    cin>>name ;
    cout<<"\n Enter age : " ;
    cin>>age;
    cout<<"\n Enter phone : ";
    cin>>phone;

    object.set(name, age, phone);
    object.get();

    return 0;
}