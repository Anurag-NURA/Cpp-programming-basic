//C++ prgram to access private members of a class 
#include<iostream>
using namespace std;

class student
{
 private:   
 string name;

 public:
 int age;
 bool gender;

 void setname(string s)// this function is to pass a string to the private object name
 {
   name = s;
 }

 void print()
 {
   cout<<"\n Name -----> "<<name<<endl;
   cout<<"\n Age ------> "<<age<<endl;
   if(gender == 1)
   {
   cout<<"\n Gender ---> Female"<<endl; 
   }
   else
   {
   cout<<"\n Gender ---> Male"<<endl;    
   }
 }
};

int main()
{
  int num;
  student arr[50];
  string s;
  cout<<"\n Enter number of entries: ";
  cin>> num;

  for(int i=0; i<num;++i)
  {
    cout<<"\n Enter Name ----------------> ";
    cin>>s; // receiving a string from user
    arr[i].setname(s);//this is for passing string 's' to private object 'name' 
    cout<<"\n Enter age -----------------> ";
    cin>>arr[i].age;
    cout<<"\n Enter Gender (1->F/0->M) --> ";
    cin>>arr[i].gender;
  }
  for(int i=0; i<num; ++i)
   {
     arr[i].print();
   }
  return 0;
}