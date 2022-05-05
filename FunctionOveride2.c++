//Another program to understand function overriding 
/*
if derived class defines same function as defined in its base class, 
it is known as function overriding in c++
*/
#include<iostream>
using namespace std;

class animal
{
  public:
  void MakeSound()
  {
     cout<<"\n Animal Sound @_@ "<<endl;
  }
};

class cat :public animal
{ 
   public: 
   void MakeSound()//if i will comment out this function than the animal class MakeSound() will be preferred
   {
       cout<<"\n Cat Meows ^_^ "<<endl;
   } 
};

class dog : public animal
{
   public: 
   void MakeSound()
   {
       cout<<"\n Dog Barks *~~*"<<endl;
   }
};

int main()
{
 animal a;
 a.MakeSound();

 cat c;
 c.MakeSound();

 dog d;
 d.MakeSound();

 return 0;
}
