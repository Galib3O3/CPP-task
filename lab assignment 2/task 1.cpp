// Write a program to store n elements in an array and print it.
#include <iostream>
using namespace std;

#include <iomanip>   // IO Manipulators
using std::setw;     //setw = set field width , it's used for output operation

int main () {

   int n[ 20 ]; // integer array


   for ( int i = 0; i < 20; i++ ) {
      n[ i ] = i + 1;
   }
   cout << "Element" << setw( 10 ) << "Value" << endl;   // n numbers of elements and store  array


   for ( int j = 0; j < 10; j++ ) {
      cout << setw( 7 )<< j << setw( 10 ) << n[ j ] << endl;
   }

   return 0;
}
