//Program to understand string stream
/*
stringstream is a stream class to operate on strings. It implements input/output operations on memory (string) based streams. 
stringstream can be helpful in different type of parsing. The following operators/functions are commonly used here

Operator >> Extracts formatted data.
Operator << Inserts formatted data.
Method str() Gets the contents of underlying string device object.
Method str(string) Sets the contents of underlying string device object.

For example:- 
stringstream ss("23,4,56");
char ch;
int a, b, c;
ss >> a >> ch >> b >> ch >> c;  // a = 23, b = 4, c = 56
so,
INPUT--> 23,4,56
OUTPUT--> 23
          4
          56
*/

#include <sstream>
#include <vector>
#include <iostream>
using namespace std;

vector<int> parseInts(string str) 
{
    vector<int> out;
    stringstream ss(str);
    
    char ch;
    int temp;
    
    while(ss>>temp)//ss>> is like cin>> for the string stream
    {
        out.push_back(temp); //pushing the items in the vector 'out'
        ss>>ch;//this ss>> is for taking ',' in ch rather than in item in vector
    }
    
    return out;
}

int main() 
{
    string str;
    cin >> str;

    vector<int> integers = parseInts(str);

    for(int i = 0; i < integers.size(); i++) 
    {
        cout << integers[i] << "\n";
    }
    
    return 0;
}
