//C++ program to understand nested classes 
#include<iostream>
using namespace std;

class outer
{ 
  public:
  class inner
  {
    private:  
    string name;  
    int age;
    
    public: 
    void set(string n, int a)
    {
       name = n;
       age = a;
    }

    void get()
    {
        cout<<"\n Name ----> " <<name << endl;
        cout<<"\n Age -----> " << age << endl; 
    }
  };
};

int main()
{
    string name;
    int age;
    outer :: inner object;//accessing 
    cout<<"\n Enter name : ";
    cin>>name;
    cout<<"\n Enter age : ";
    cin>>age;
    
    object.set(name, age);
    object.get();

    return 0;
}
