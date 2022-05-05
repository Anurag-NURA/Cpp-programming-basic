//Program to understand vector of pairs
/*
We have been given an array with items in it from the user 
we have to replace to reduce(replace) the array items with their sorted number 
for example if number 22 is second biggest number in the array at index 5 
than we will replace the item 22 with 2 to indicate that index 5 element was 2nd biggest number in the array
*/
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool myCompare(pair<int, int> p1, pair<int, int> p2)
{
    return p1.first<p2.first;
}

int main()
{
   int size, array[20];

   cout<<"\n Enter size of array: ";
   cin>>size;

   cout<<"\n Enter items: ";
   for(int i=0; i<size; ++i)
   {
       cin>>array[i];
   }
    
    cout<<"\n Array before: ";
    for(int i=0; i<size; ++i)
    {
        cout<<array[i]<<"\t ";
    }

   vector <pair <int, int>> v1;//vector of pair type 
   
   //loop for making pair of array items with their index and then pushing it to vector of pair type
   for(int i=0; i<size; ++i)
   {
       v1.push_back(make_pair(array[i], i));
       /*
       it is similar to 
       pair <int, int>p1;
       p1.first = array[i];
       p1.second = i;
       v1.pushback(p1); 
       */
   }
   //Now vector of pairs is like -->(32,0) (12,1) (9,2) (23,3) (16,4)

   //now for sorting the vector in order
   sort(v1.begin(), v1.end(), myCompare);
   // we created myCompare because we want to sort our array through vector in a particular manner
   //Now vector of pairs is like --> (9,2) (12,1) (16,4) (23,3) (32,0)

   //v1.size beacuse number of pairs in vector is equal to number of items in array
   for(int i=0; i<v1.size(); ++i)
   {
      array[v1[i].second] = i;//now v1.first contains that items of array and v1.second contains the sorted items index values
   }
   //Now vector of pairs is like --> (9,0) (12,1) (16,2) (23,3) (32,4)

   cout<<"\n Array after: ";
   for(int i=0; i<v1.size(); ++i)
   {
      cout<<array[i]<<"\t "; 
   }

   return 0;
}