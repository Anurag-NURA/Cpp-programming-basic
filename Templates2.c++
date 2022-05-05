// Program to understand Class templates
/*
Remember that this method is some what same from function template but we have to declare a template before the class
and the same class will be used but different objects will be created for different data type but there is another way
to make an object of a class with different data types.
*/

#include <iostream>
using namespace std;

template <typename T>
class weight
{
private:
    T kg;

public:
    void setData(T x)
    {
        kg = x;
    }
    T getData()
    {
        return kg;
    }
};

int main()
{
    weight<int> obj1;
    // so data member kg inside this object is gonna be of intger data type

    obj1.setData(5);
    cout << "\n Integer value inside this object 1 is : " << obj1.getData();

    // now we will add a value which is of some other data type in the same class through object 2
    weight<double> obj2;
    obj1.setData(5.232);
    cout << "\n Double value inside this object 2 is :" << obj1.getData();

    return 0;
}