#include <iostream>
using namespace std;

class A
{
private:
    string n1;

public:
    void setn1()
    {
        cout << "\n Enter name: ";
        cin >> n1;
    }

    void getn1()
    {
        cout << n1;
    }
};

class B
{
private:
    string n2;

public:
    void setn2()
    {
        cout << "\n Enter name: ";
        cin >> n2;
    }

    void getn2()
    {
        cout << n2;
    }
};

class C : public A, public B
{
private:
    string n2;
};

int main()
{
    A ram;
    ram.setn1();
    ram.getn1();

    B Anurag;
    Anurag.setn2();
    Anurag.getn2();

    C Jignesh;
    Jignesh.setn2();
    Jignesh.getn2();

    return 0;
}
