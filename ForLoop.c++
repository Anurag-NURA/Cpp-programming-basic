//Question from Hacker Rank regarding for loop topic
/*
consider two inputs from a user 'a' and 'b'. These two are the upper and lower limits of the numbers between them including 
those numbers too. Now consider any number n from them 
constrains : 
if 1 <= n >= 9
print the number in words 

but if n > 9 than print that either the number is even or odd

Example -

Input : 8 
        11

Ouput : eight //-->this represent number '8' 
        nine  //-->this represent number '9'
        even  //-->this represent 10 as an even number
        odd   //-->this represent 11 as an odd number 
*/
#include<iostream> 
using namespace std;
int main()
{
  
  int a, b, i ;

  cout<<"\n Enter first number: ";
  cin>>a;
  cout<<"\n Enter second number: "; 
  cin>>b;
 
  for(i=a; i<=b;++i)
  { 
      if(i<10)
      {
         if(i == 1)
        {
           cout<<"\n one";
        }
        else if(i == 2)
        {
              cout<<"\n two";
        }
        else if(i == 3)
        {
              cout<<"\n three";
        }
        else if(i == 4)
        {
              cout<<"\n four";
        }
         else if(i == 5)
        {
              cout<<"\n five";
        }
         else if(i == 6)
        {
              cout<<"\n six";
        }
         else if(i == 7)
        {
              cout<<"\n seven";
        }
         else if(i == 8)
        {
              cout<<"\n eight";
        }
         else if(i == 9)
        {
              cout<<"\n nine";
        }

      }  
      else
      {
            if(i%2 == 0)
            {
                  cout<<"\n Even ";
            }
            else
            {
                  cout<<"\n odd";
            }
      }
        
  }

 return 0;
}