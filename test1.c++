#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#define MAX 1000
using namespace std;


int main() 
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int arr1[MAX][MAX],size[MAX];
    int n,q,s,pos1,pos2;
    cout<<"Enter a Number of Array";
    cin>>n>>q; 
    for(int i=0;i<n;i++)
    {
       cout<<"Enter a size of array";
       cin>>s;
       for(int j=0;j<s;j++)
       {
            cin>>arr1[i][j];
       } 
        
    }
    for(int i=0;i<q;i++)
    {
        cout<<"Enter a position";
        cin>>pos1>>pos2;
        cout<<arr1[pos1][pos2]<<"\n";
    }
    return 0;
}