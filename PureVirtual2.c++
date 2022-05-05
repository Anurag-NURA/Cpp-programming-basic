// Program to perform Virtual function
/*
Write a code to implement virtual function on class area you can define as many variable and function
as needed the area class is derived by 2 class rectangle and triangle?
*/

#include <iostream>
using namespace std;

class Area
{
public:
    float length, breadth, a;
    int height, base;
    virtual void area() = 0;
};

class Rectangle : public Area
{

    void area()
    {
        cout << "\n :::: Calculate Area of Rectangle ::::";
        cout << "\n Enter length: ";
        cin >> length;
        cout << "\n Enter breadth: ";
        cin >> breadth;
        cout << "\n Area of rectangle is: " << (2 * (length * breadth));
    }
};

class Triangle : public Area
{
    void area()
    {
        cout << "\n :::: Calculate Area of Triangle ::::";
        cout << "\n Enter height: ";
        cin >> length;
        cout << "\n Enter base: ";
        cin >> breadth;
        a = (0.5) * height * base;
        cout << "\n Area of triangle is: " << a;
    }
};

int main()
{
    Area *ptr;
    bool value;

    cout << "\n Enter 0 for rectangle and 1 for triangle: ";
    cin >> value;

    if (value == 0)
    {
        Rectangle a;
        ptr = &a;
        ptr->area();
    }
    else
    {
        Triangle b;
        ptr = &b;
        ptr->area();
    }

    return 0;
}