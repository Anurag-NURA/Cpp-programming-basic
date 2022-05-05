
#include <iostream>
using namespace std;

class Customer
{
private:
    string name;
    int amount=0;
public:

    Customer(string a, int b)
    {
        name=a;

        try
        {
            if(b<0)
            throw b;

            amount=b;
        }

        catch(int x)
        {
            cout<<"Error: Start balance cannot be negative" <<endl;
        }
    }

    void show()
    {
       cout<<"Name: "<<name<<endl;
       cout<<"Amount: "<<amount<<endl;
    }
};

int main()
{
    Customer a("Anurag",-5300);
    Customer b("Jigensh",3443);
    a.show();
    b.show();
}