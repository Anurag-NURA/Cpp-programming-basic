// Program to understand file handling in c++
// So in this program we will open a file, take a input from the user and save that input in the file
#include <iostream>
#include <fstream>
using namespace std;

int main()
{

    char array[100];
    cout << "\n Enter your name and age: " << endl;
    cin.getline(array, 100);
    //   Up untill now we have taken an entire line as input from the user and stored in the array

    /* Now we will write that input in the file for that we will first create a file
     remember that our data can be overriden everytime we run this code and to solve this problem we will appened our file
     so that previous content added to the file won't be affected and we will be able to continue our file continuously*/

    ofstream myfile("FH.txt", ios::app); // file created // this of stream is acting as a data-type and myfile is like a variable
    myfile << array;                     // input added to the file
    myfile.close();                      // file closed
    cout << "\n File written successfully" << endl;

    // Now if we want to read the same file created

    cout << "\n Reading process started...";
    ifstream read("FH.txt"); // reading file
    char arr[100];           // created variable similar to input variable
    read.getline(arr, 100);
    cout << "\n File content is..." << arr;
    read.close();

    return 0;
}
