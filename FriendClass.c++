//Program to understand friend class in C++
/*
A class can also be declared to be the friend class of some other class. When we create a frined class
then all the member functions of the friend class also become the friend of the other class. This requires 
the condition that the friend becoming class must be first declared or defined (forward declaration).
*/

#include<iostream>
using namespace std;

class Boy1
{
    friend class Boy2;//Boy2 is a friend of Boy1
    
    private: 
    string name1;

    public: 

    void set_name(string n)
    {
        name1 = n;
    }
};

class Boy2
{
    public:
    void get_name(Boy1 temp)
    {
        cout<<"\n Name of the boy is : "<<temp.name1;

    }
};

int main()
{
    Boy1 sam;
    string name;
    cout<<"\n Enter Boy name: ";
    getline(cin, name);
    sam.set_name(name);

    Boy2 ram;
    ram.get_name(sam);

    return 0;
}