// Question solving on pure virtual function from HackerRanks
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

static int P, S;

class Person
{
public:
    string name;
    int age;
    virtual void getdata() = 0;
    virtual void putdata() = 0;
};

class Professor : public Person
{
public:
    int publications;

    void getdata()
    {
        cout << "\n Enter name: ";
        cin >> name;
        cout << "\n Enter Age: ";
        cin >> age;
        cout << "\n Enter publications: ";
        cin >> publications;
    }

    void putdata()
    {
        cout << "\n Name -----------> " << name;
        cout << "\n Age ------------> " << age;
        cout << "\n Publications ---> " << publications;
        cout << "\n Number of data -> " << ++P;
    }
};

class Student : public Person
{
public:
    int marks[6];

    void getdata()
    {
        cout << "\n Enter name: ";
        cin >> name;
        cout << "\n Enter Age: ";
        cin >> age;
        for (int i = 0; i < 6; ++i)
        {
            cin >> marks[i];
        }
    }

    int sum()
    {
        int sum = 0;
        for (int i = 0; i < 6; ++i)
        {
            sum = sum + marks[i];
        }
        return sum;
    }

    void putdata()
    {
        cout << "\n Name ----------> " << name;
        cout << "\n Age -----------> " << age;
        cout << "\n Marks ---------> " << sum();
        cout << "\n Number of data -> " << ++S;
    }
};

int main()
{

    int n, val;
    cin >> n; // The number of objects that is going to be created.
    Person *per[n];

    for (int i = 0; i < n; i++)
    {

        cin >> val;
        if (val == 1)
        {
            // If val is 1 current object is of type Professor
            per[i] = new Professor;
        }
        else
        {
            per[i] = new Student; // Else the current object is of type Student
            per[i]->getdata();    // Get the data from the user.
        }
    }

    for (int i = 0; i < n; i++)
    {
        per[i]->putdata(); // Print the required output for each object.
    }

    return 0;
}
