#include<iostream>
using namespace std;

int main()
{
    int num, den, result=0;
    cout<<"\n Enter numerator: ";
    cin>>num;
    cout<<"\n Enter denominator: ";
    cin>>den;
    
    try
    {//if the bellow condition is true than den value will be thrown entirely outside this try block
        if(den==0)
        {
            throw den;
        }
        result = num/den;
    }
    //Now if the above condition is true than control will be passed to the catch block
    catch(int temp)//we have to pass the thrown value from try block to catch block through parameters 
    {
      cout<<"\n Exception: Divide by zero not alllowed";
    }
    cout<<"\n Division is: "<< result;

    return 0;
}