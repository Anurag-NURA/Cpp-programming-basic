#include<iostream>
using namespace std;

class Box
{
  private :
  int length = 0, breadth = 0, height = 0;
  
  public:
  
  Box()//default consturctor for Box
  {
      
  }

  Box(int l, int b, int h)//Paramaterized constructor for box
  {
      length = l;
      breadth = b;
      height = h;
  }
  
  Box(Box &temp)//copy constructor for Box 
  {
    length = temp.length;
    breadth = temp.breadth;
    height = temp.height;
  }
  
  int getLength()//return box's length 
  {
      return length;
  }

  int getBreadth()//return box's breadth
  {
      return breadth;
  }

  int getHeight()//return box's height
  {
      return height;
  }

  long long CalculateVolume()
  {
      long long volume;
      volume = (long long)length*breadth*height;//type casting
      return volume;
  }
  
  ~Box()
  {
   
  }

 //this function is for compairing length, breadth & height of Box B with Box A
  bool operator <(Box &B)//
  {
    int l = B.getLength(); 
    int b = B.getBreadth();
    int h = B.getHeight();

    if(length<l ||(breadth<b && length==l) ||(height<h && length==l && breadth==b))
    {
      return true;
    }
    else 
    {
      return false;
    }
  }
};

ostream& operator <<(ostream& out, Box B)
{
  int l = B.getLength();
  int b = B.getBreadth();
  int h = B.getHeight();
  return out<<l<<" "<<b<<" "<<h;
}