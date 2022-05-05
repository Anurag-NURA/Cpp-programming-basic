// Static Member Function
#include <iostream>
using namespace std;

class Student
{
private:
    static int count;

public:
    // IMPORTANT --> Static member function can only use static data members

    Student() // default parameter
    {
        ++count;
    }

    static int GetCount() // Static member function
    {
        return count;
    }
};

// it is always neccessary to initalize the static data members outside the class to use it in the main
int Student::count = 0;

int main()
{
    cout << "\n Initial Count: " << Student::GetCount();
    Student ram;
    cout << "\n Count after one object: " << Student::GetCount();
    Student sam;
    cout << "\n Count after two object: " << Student::GetCount();
    return 0;
}