// Program to understand pure virtual function use in OOP's
#include <iostream>
using namespace std;

class shape
{
public:
    float radius, length, breadth, area;
    virtual void GetArea() = 0; // Pure Virtual Function and '= 0' means that there is no implementation of this function in this class
    // whenever we declare a pure virtual function inside a class than that particular class automatically becomes abstract class
    // the whole point of an abstract class is that you can inherit from it but can't create an instance directly.
};

class circle : public shape
{
public:
    void GetArea()
    {
        cout << "\n Enter circle radius: ";
        cin >> radius;
        area = (3.14 * radius * radius);
        cout << "\n Area of circle is : " << area;
    }
};

/*Now class shape GetArea is overrided by class circle GetArea if there was nothing inside the
class circle than similar to class shape, class circle would have also become an abstract
class as it was inheriting an abstract class members*/

class rectangle : public shape
{
public:
    void GetArea()
    {
        cout << "\n Enter Length and breadth: ";
        cin >> length >> breadth;
        area = (length * breadth);
        cout << "\n Area of circle is : " << area;
    }
};

int main()
{
    bool value;
    shape *ptr;
    cout << "\n Enter 0 for circle and 1 for rectangele: ";
    cin >> value;

    if (value == 1)
    {
        ptr = new rectangle;
        ptr->GetArea();
    }
    else
    {
        ptr = new circle;
        ptr->GetArea();
    }

    return 0;
}