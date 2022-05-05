#include<iostream>
using namespace std;

int main()
{
    int i, sum = 0, num;
    cout<< "\n Enter the range for sum: ";
    cin>>num;
    for(i=0; i<num; ++i)
    {
        if(i%3 == 0 || i%5==0)
        {
           sum = sum + i;
        }
    } 
    cout<< "\n sum of the numbers divisible by 3 and 5 till "<<num<< " is "<< sum;
    return 0;
}