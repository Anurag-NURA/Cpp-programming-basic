//3rd type of inheritance is Multi level Inhertiance 
/*
 In this type of inheritance class C will inherit attributes from class B
 and class B will inherit attributes from class A 
Class A
 ||
Class B
 ||
Class C
*/

#include<iostream>
using namespace std;

class A
{
  public:
  void Afunc()
  {
     cout<<"\n Class A inherited ";  
  }
};

class B : public A
{
  public:
  void Bfunc()
    {
        cout<<"\n Class B inherited ";
    }
};

class C : public B
{
    public:
};

int main()
{
    C temp;
    temp.Afunc();
    temp.Bfunc();
    return 0;
}

/*
Similarly there are two other type of inheritance i.e.,
4. Hybrid inheritance 
                  Class A
                /
           Class B      Class C
               \        /
                 Class D

5. Hierarchical Inheritance 
                 Class A
                /       \
              /          \
          Class B        Class C
         /      \        /     \
 Class D    Class E   Class F   Class G
*/