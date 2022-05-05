//Program to create increment and decrement operator overloading
#include<iostream>
using namespace std;

class Weight
{
  private:
  int kg;

  public:  
  Weight()
  {
    kg = 0;
  }

  Weight(int x)
  {
    kg = x;
  }

  void PrintWeight()
  {
      cout<<"\n Weight in KG: "<<kg <<endl;
  }

  /* 
  we have to remeber that the increment operator overload is 
  a unary operator so we don't need any other class reference  
  and we can use any data type 

  Syntax :- <data type> opertor <operator sign> ()
  */
  
  void  operator ++()//this is a pre-increment operator overload
  {
      ++kg;
  }

  //we used 'int' in the parameter to differentiate it between post and pre increment operator   
  void operator ++(int)//this is a post-increment operator overload
  {
      kg++;
  }

  void  operator --()//this is a pre-decrement operator overload
  {
      --kg;
  }
   
  void operator --(int)//this is a post-decrement operator overload
  {
      kg--;
  }
};

int main()
{
    int x = 0;//we can increment any variable with increment operator
    cout<<"\n X value before Increment: "<<x;
    ++x;
    cout<<"\n X value after Increment: "<<x<<endl;

    Weight object;
    
    cout<<"\n Weight before increment: ";
    object.PrintWeight();
    
    ++object;//post-increment operator for object  
    /*
    But, we cannot increment a class's object 
    for the above line of code to work we have to create a operator overload of increment 
    */

    cout<<"\n Pre-Increment Operator (++x) " ;
    cout<<"\n Weight after increment: ";
    object.PrintWeight();
    cout<<endl;
   
    object++;//pre-increment opertor for object
    
    cout<<"\n Post-Increment Operator (x++) ";
    cout<<"\n Weight after increment: ";
    object.PrintWeight();
    cout<<endl;
    
    --object;//pre-decrement operator for object

    cout<<"\n Pre-decrement Operator (--x) " ;
    cout<<"\n Weight after decrement: ";
    object.PrintWeight();
    cout<<endl;
    
    object--;//post-decrement operator for object
 
    cout<<"\n Pre-decrement Operator (--x) " ;
    cout<<"\n Weight after decrement: ";
    object.PrintWeight();
    cout<<endl;
 
    return 0;
}