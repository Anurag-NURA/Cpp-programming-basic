//Second :- program to perform operator overloading

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Complex
{
  
  public: 

  int real , imag;

  Complex()
  {
      real = 0;
      imag = 0;
  }
  Complex(int r , int i)
  {
      real = r;
      imag = i;
  }
  
  //operator overloading inside class
  Complex operator + (Complex const &obj)//<class name> operator <operator sign> (<class name> const &<object ref>) 
  {
     Complex result;
     result.imag = imag + obj.imag;
     result.real = real + obj.real;
     return result; 
  }
    
  void print()
  {
      cout<<real << " + i" << imag << endl;
  }
};
 
/* IMPORATANT !!!
//<Operator overloading outside class>
Complex operator +(Complex const &v1, Complex const &v2)
{
  Complex temp;
  temp.real = v1.real + v2.real;
  temp.imag = v1.imag + v2.imag;
  return temp;
}

//<Output stream>
ostream& operator<<(ostream& out, Complex temp)
{
  out<< temp.real <<"+ i"<< temp.imag;
  return out;
}
*/

int main()
{
    Complex c1(10,5); 
    cout<<"\n First complex number: ";
    c1.print();

    Complex c2(2,4);
    cout<<"\n Second complex number: ";
    c2.print();

    Complex c3;
     
    c3 = c1 + c2;
    cout<<"\n Sum of 1st and 2nd : ";
    c3.print();
    return 0;
}// 10 +i5  2 + i4