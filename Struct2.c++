// In this program we are storing grades of 5 subjects of differnet student in a structure 
#include<iostream>
using namespace std;
#define MAX 100

class student
{ 
   public:

   int score[5];

   void input()//this function will store the data of 5 subjects of student
   {  
      for(int i=0; i<5; ++i)
      { 
        cin>>score[i];
      }
   } 
   
   void print()
   {
     for(int i=0; i<5; ++i)
     {
         cout<<score[i]<<"\t";
     }
   }

   int calculateTotalScore()//this funciton will calculate the total score of student as sum
   {
      int sum=0 ; 
      for(int i=0; i<5; ++i)
      {
        sum = sum + score[i];
      }
      return sum;
   }
};

int main()
{
   int i, num, marks;

   student A[MAX];//Array of structures

   cout<<"\n Enter number of student: ";
   cin>>num;
   
   for(i=0 ; i<num; ++i)//this loop is for entering n number of data of n number of students
   {   
      cout<<"\n\n Student "<< i+1 << " data entry: "; 
      A[i].input();
      cout<<"\n Student "<< i+1 << " data: "; 
      A[i].print();
      cout<<"\n Total marks of Student "<< i+1 <<": "<<A[i].calculateTotalScore();
   }
   
   return 0;
}