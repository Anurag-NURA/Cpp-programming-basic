#include<iostream>
using namespace std;

class student
{
 public :
 string fname;
 string lname;
 int age;
 int standard;

 void set_fname(string fn)//Setter for first name
 {
   fname = fn; 
 }
 string get_fname()//Getter for first name
 {
    return fname;
 }
 
 void set_lname(string ln)//Setter for last name 
 {
   lname = ln; 
 }
 string get_lname()//Getter for last name
 {
   return lname;
 }

 void set_age(int a)//Setter for age
 {
   age = a;
 }
 int get_age()//Getter for age
 {
    return age;
 }

 void set_stand(int std)
 {
    standard = std;
 }
 int get_stand()
 {
    return standard;
 }

};

int main()
{
  string fname, lname;  
  int age, standard;
  student A;

  cout<<"\n Enter age: ";//Inserting age
  cin>> age;
  A.set_age(age);

  cout<<"\n Enter first name: ";//Inserting First name
  cin>> fname;
  A.set_fname(fname);

  cout<<"\n Enter last name: ";//Inserting Last name
  cin>> lname;
  A.set_lname(lname);
  
  cout<<"\n Enter Standard: ";//Inserting Standard
  cin>>standard;
  A.set_stand(standard);

  cout<<"\n Name -------> "<<A.get_fname()<<" "<<A.get_lname();
  cout<<"\n Age --------> "<<A.get_age();
  cout<<"\n Standard ---> "<<A.get_stand();
  
  return 0;
}