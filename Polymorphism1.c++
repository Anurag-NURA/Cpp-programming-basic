// Polymorphism :- Poly means many and morphism means forms
/*
                  Polymorphism
                   /         \
        Early Binding       Late Binding
(Static Polymorphism)       (Dynamic Polymorphism)
         Compile Time         Run Time
         /        \               \
    Function     Operator         Virtual
   Overloading  Overloading      Functions
*/

// first :- program to perform function overloading

#include <iostream>
using namespace std;

class Jignesh
{
public:
    void func()
    {
        cout << "\n this function has no argument" << endl;
    }

    void func(int x)
    {
        cout << "\n this funciton has int type argument" << endl;
    }

    void func(double x)
    {
        cout << "\n this function has double type argument" << endl;
    }
};

int main()
{
    Jignesh obj;
    obj.func();
    obj.func(4);
    obj.func(3.4);

    return 0;
}