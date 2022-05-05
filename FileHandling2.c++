// Program to create and perform write and read operation in a file using fstream
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    char array[100];
    cout << "\n Enter your name and age: " << endl;
    cin.getline(array, 100);

    fstream newfile("File.txt", ios::out | ios::app); // ios::out to write in the file
    newfile << array;
    newfile.close();
    cout << "\n File written successfully" << endl;

    cout << "\n Reading process started...";
    ifstream read("File.txt"); // ios::in to read the file
    char arr[100];
    read.getline(arr, 100);
    cout << "\n File content is..." << arr;
    read.close();

    return 0;
}