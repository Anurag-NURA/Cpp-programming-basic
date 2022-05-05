/*
Templates are the foundation of generic programming, which involves writing code in a way that is
independent of any particular data type. There are two types of templates :
1. Function template
2. Class template
In this program we will create a function template
*/

#include <iostream>
using namespace std;

/* Instead of writing all this code we can use a function template
int add(int x, int y)
{
    return (x+y);
}

float add(float x, float y)
{
    return (x+y);
}

double add(double x, double y)
{
    return (x+y);
}
*/

// Instead of 'T' we can use any name or word for refernce as it will be representing data type only
template <typename T> // for same type of data types
T add(T x, T y)
{
    return (x + y);
}

template <typename T, typename U> // for diffferent types of data types
U add(T x, U y)
{
    return (x + y);
}

int main()
{
    cout << "\n Addition of two intger variable 3 and 4 is -----------> " << add<int>(3, 4); // observe the type of data specfied here
    cout << "\n Addition of two float variable 3.2 and 4.4 is --------> " << add<float>(3.2f, 4.4f);
    //'f' inside the brackets means float or else it will take double instead of float
    cout << "\n Addition of two double variable in 3.28 and 4.68 is --> " << add<double>(3.28, 4.68);
    cout << "\n Addition of two different types of variables is ------> " << add<int, float>(43, 3.45f);
    return 0;
}