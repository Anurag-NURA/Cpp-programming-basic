// Problem solving on templates from HackerRank
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <cassert>
using namespace std;

// Necessary optimiztions for I/O speed
struct Optimizer
{
    Optimizer() // Constructor
    {
        ios_base::sync_with_stdio(false); // this will disable the synchronoztion b/w C++ and C std streams
        cin.tie(NULL);                    // this will untie cin and cout and also will disable automatic flushin in the process
    }
};

Optimizer opt; // calling the structure

template <typename T>
class AddElements
{
private:
    T element_one;

public:
    AddElements(T temp) // setter for template element
    {
        element_one = temp;
    }

    T add(T element_two) // adder for templates
    {
        return (element_one + element_two);
    }

    string concatenate(T element_two)
    {
        return (element_one + element_two);
    }
};

/* we can even us the code below for concatenation of two string templates and it is called template specialization
template <>
class AddElements<string>
{
private:
    string element_one;

public:
    AddElements(string temp)
    {
        element_one = temp;
    }
    string concatenate(string element_two)
    {
        return (element_one + element_two);
    }
};*/

int main()
{
    int n, i;
    cin >> n;
    for (i = 0; i < n; i++)
    {
        string type;
        cin >> type;
        if (type == "float")
        {
            double element1, element2;
            cin >> element1 >> element2;
            AddElements<double> myfloat(element1);
            cout << myfloat.add(element2) << endl;
        }
        else if (type == "int")
        {
            int element1, element2;
            cin >> element1 >> element2;
            AddElements<int> myint(element1);
            cout << myint.add(element2) << endl;
        }
        else if (type == "string")
        {
            string element1, element2;
            cin >> element1 >> element2;
            AddElements<string> mystring(element1);
            cout << mystring.concatenate(element2) << endl;
        }
    }
    return 0;
}
