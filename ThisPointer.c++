// program to understand 'this' pointer
/*
whenever we create various objects of same class and call the members of one objects it doesnot access the members of
other objects. This all happens because of 'this' pointer in c++.
c++/compiler passess a
*/
#include <iostream>
using namespace std;

class pointer
{
public:
  int x, y;

  /*
  pointer(int x1,int y1)
  {
    //on backend compiler makes a pointer and stores these data as
      x = x1; // this -> x = x1
      y = y1;// this -> y = y1
  }
  so instead of writing x1 or y1 we can write
  */

  pointer(int x, int y)
  {
    this->x = x;
    this->y = y;
  }

  // chaining of functions :- we can call multiple instances of the same class members and change their data
  pointer &setx(int x) // we used '&' because we are returing it with the refrence  to object
  {
    this->x = x;  // setting x of an object through the pointer
    return *this; // returning the object though the pointer
  }

  pointer &sety(int y)
  {
    this->y = y;
    return *this;
  }
};

int main()
{
  pointer p1(10, 20); // parametrized constructor
  cout << "\n Before : ";
  cout << "\n x: " << p1.x << ", y: " << p1.y;

  p1.setx(13).sety(23);
  cout << "\n After : ";
  cout << "\n x: " << p1.x << ", y: " << p1.y;

  return 0;
}