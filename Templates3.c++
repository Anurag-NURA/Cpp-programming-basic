// Program to understand class templates
/*
Another way to make an object of a class with different and multiple data types
*/

#include <iostream>
using namespace std;

template <typename DT1, typename DT2>
class weight
{
private:
    DT1 kg;
    DT2 gram;

public:
    void setData(DT1 x, DT2 y)
    {
        kg = x;
        gram = y;
    }

    DT1 getKg()
    {
        return kg;
    }

    DT2 getGram()
    {
        return gram;
    }
};

int main()
{
    weight<int, double> obj1;
    obj1.setData(32, 43.223);
    cout << "\n Integer value data-type in object 1 is: " << obj1.getKg();
    cout << "\n Double value data-type in object 1 is: " << obj1.getGram();

    return 0;
}