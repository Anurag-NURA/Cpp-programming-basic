// Third :- In this program we will perform run time polymorphism

#include <iostream>
using namespace std;

class base
{
public:
   virtual void print()
   {
      cout << "\n this is the base class's print function " << endl;
   }

   virtual void display()
   {
      cout << "\n this is the base class's display function" << endl;
   }
};

class derived : public base
{
public:
   void print()
   {
      cout << "\n this is the derived class's print function " << endl;
   }

   void display()
   {
      cout << "\n this is the derived class's display function" << endl;
   }
};

int main()
{
   base *bptr; // this is a base's class pointer
   derived d;

   bptr = &d;
   bptr->print();
   bptr->display();

   return 0;
}
