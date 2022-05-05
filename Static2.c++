// Static Data Members

#include <iostream>
using namespace std;

class MyClass
{
public:
    static int count;

    // default constructor
    MyClass()
    {
        ++count;
    }
};

// Initialization --> all static data is initialized to zero when the first object is created
int MyClass::count = 0;

int main()
{
    cout << "\n Initial Count: " << MyClass::count << endl;
    /*Static data is at an class level and not in a object level which means that we do not
     need an instance of the object to access the static data members of a class*/

    MyClass object1;
    cout << "\n Count after one object: " << MyClass::count << endl;

    MyClass object2;
    cout << "\n Count after two object: " << MyClass::count << endl;
    // so like this we can track of how many objects of a particular class has been created

    return 0;
}
