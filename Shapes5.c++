// C++ program to print a pyramid (IMPORTANT!!!)

#include <iostream>
using namespace std;

int main()
{
   int rows, i, j, space;

   cout << "Enter number of rows: ";
   cin >> rows;

   for(i = 0; i < rows; ++i)
   {
      for(space = i; space < rows; ++space)//loop for displaying space
      {
         cout << " ";
      }
      for(j = 0; j < (2 * i - 1); ++j)//loop to display star equal to row number
      {
         cout << "*";
      }
      cout << "\n";
   }

   return 0;
}
