//copy constructor and default copy constructor

/*there are two types of copies, they are :- 

--> Shallow copy (done by default copy constructor) copies the pointer values and the address they are pointing at but they 
don't allocate new memory for new items they dynamically allocates the storage and they point at the same address and value of 
other items also gets changed (these constructors are created by the compilers).

--> Deep copy (done by copy constructor) copies the values of the pointer as well as the place they are pointing at. the 
programmmer have to create a copy constructor before in the class so that two classes can be copied and change in one class 
doesnot affect the other as it was in the case of Shallow  copy (these constructors are created by the programmer).
*/

#include<iostream>
using namespace std;
class student
{
  private:
  string name;
  long long phone;

  public:
  int age;
  bool gender;
 
  student()
  {
    cout<<"\n Default Copy Constuctor \n"<<endl;
  }

  student(string n, int a, bool g, long long p)
  { 
    cout<<"\n Paramaterised Constructors";
    name = n;
    phone = p;
    age = a;
    gender = g;
  }
  
  student(const student &temp)
  /*we used const because we don't want to change the old class items with the new class we just want to copy old class 
    items in the new class and changes in the new class won't effect the old class*/
  {
    cout<<"\n Copy Constructor"<<endl;
    name = temp.name;
    phone = temp.phone;
    age = temp.age;
    gender = temp.gender;
  }

  void print()
  {
     cout<<"\n Name --------> "<<name<<endl;
     cout<<"\n Age ---------> "<<age<<endl;
     if(gender == 0)
     {
       cout<<"\n Gender ------> Female"<<endl;
     }
     else
     {
       cout<<"\n Gender ------> Male"<<endl;
     }
     cout<<"\n Phone number -->"<<phone<<endl;
  }
};

int main()
{
   student a("Anurag", 19, 1, 9971996052);
   a.print();

   student b(a);//copy constructor 
   
   student c;//default copy constructor or default assignment operator
   c = a;

   return 0;
}

