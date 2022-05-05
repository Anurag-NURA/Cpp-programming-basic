#include<iostream>
using namespace std;

int main()
{
    int size , *array, temp;
    
    cout<<"\n Enter Array size: ";
    cin>>size;

    array = new int [size];
    
    cout<<"\n Enter items: ";
    for(int i=0; i<size; ++i)
    {
       cin>>array[i];
    }
     
    cout<<"\n Entered items are: ";
    for(int i=0; i<size; ++i)
    {
       cout<<array[i]<<"\t";
    }
    
    for(int i=0; i<size; ++i)
    {
        for(int j=i+1; j<size; ++j)
        {
            if(array[i]<array[j])
            {
               temp = array[i];
               array[i] = array[j];
               array[j] = temp;
            }
        }
    }

    cout<<"\n Array after sorting in descending order: ";
    for(int i=0; i<size; ++i)
    {
        cout<<array[i]<<"\t";
    }

    return 0;
}