//Program to understand vectors 
#include<iostream>
#include<vector>
using namespace std; 

int main()
{
   vector<int> v1;//vector<data-type> vector name
   
   //to insert any elements in vector than

   v1.push_back(1);//now an item '1' is added at the end of the vector
   v1.push_back(2);
   v1.push_back(3);
   
   cout<<"\n ";
   for(int i=0; i<v1.size(); ++i)
   {
      cout<<v1[i]<<"\t ";  
   }//output will be 1 2 3
   
   //another way of doing the above method is through iterator 
   //iterator are pointers that are used to point at the memory address of STl(standard template library) containers
  
   vector<int>::iterator itr;
   cout<<"\n ";
   for(itr = v1.begin(); itr != v1.end(); itr++)
   {
       cout<<*itr<<"\t ";//we are using asterisk because iterators are like pointers 
   }//output will be 1 2 3

   //there is one more another way through which we can perform the above operation
   cout<<"\n ";
   for(auto element:v1)//auto is a keyword which automatically specifies which type of data is the element 
   //auto <name of data-type> : <name of another data-type>
   {
      cout<<element<<"\t ";
   } 
   //output will be 1 2 3

   v1.pop_back();
   //vector v1 will be 1 2 

   vector<int> v2(3,10); //v2(3, 10) means that 3 elements will 10 each 
   //vector v2 will be 10 10 10 

   swap(v1 ,v2);
   //now v2 will be 1 2  & v1 will be 10 10 10 

   return 0;
}