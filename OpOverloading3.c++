//Program to understand operator overloading 
/*
in this profram we will understand what will happen if we assign one increment object to another object
i.e., obejct1 = ++object2
it will show an error as the operator overlaod we created for increment is of void type and don't have any return type 
solution for this error is this program  
*/

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

  //we will use this method instead of the previous void type operator overlaoding
  Weight operator ++()
  {
      Weight temp; //created a temporary object 
      temp.kg = ++kg;// assigned the incremented value to that object  
      return temp;//and returned that obejct 
  } 
};

int main()
{
    Weight object1;
    Weight object2;

    cout<<"\n Before increment: ";
    cout<<"\n Object1 weight : ";
    object1.PrintWeight();
    cout<<"\n Object2 weight : ";
    object2.PrintWeight();
    cout<<endl;
   
    object2 = ++object1;//now this ++object has a return type of it's increment type
    
    cout<<"\n After increment: ";
    cout<<"\n Object1 weight : ";
    object1.PrintWeight();
    cout<<"\n Object2 weight : ";
    object2.PrintWeight();
    cout<<endl;
    
    return 0;
}