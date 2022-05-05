//Data types in programming languages
#include <iostream>
#include<bits/stdc++.h> // header files for precision of floating points
using namespace std;

int main()
 {
    int a = 211916801;
    long long b  = 97592151379235457;
    char ch  = 'p';
    float c = 19856.992;
    double d = -5279235.721231465;
    
    cout<< a <<"\n" << b <<"\n"<< ch <<"\n";
    cout<< fixed << setprecision(8)<< c ;
    cout<< "\n";
    cout<< fixed << setprecision(8)<< d ;
    return 0;
}
/*
 As float, double and long double give differrent precision points :

 -> floor() - Floor rounds off the given value to the closest integer which is less than the given value.
 -> ceil()  - Ceil rounds off the given value to the closest integer which is more than the given value.
 -> trunc() - Trunc rounds removes digits after decimal point.
 -> round() - Rounds given number to the closest integer.
 -> setprecision() - Setprecision when used along with ‘fixed’ provides precision to floating point numbers 
                     correct to decimal numbers mentioned in the brackets of the setprecison.
*/
