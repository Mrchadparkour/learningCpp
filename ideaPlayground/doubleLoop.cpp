#include <iostream>

/*
   I had an idea to make a function that takes a limit and a callback
   to double loop through a 2d array and do that function to it.

   Same functionality as arrays.cpp
*/

using namespace std;

typedef void (* pF)(int *args);

void doubleLoop(pF funct, int array[][8], int limit)
{
  funct(*array[1][2]);
}

int mult(int *a) {*a = 10 }

int main() {
  int array[8][8];
  doubleLoop((pF)mult, array, 7);

  cout << array[1][2] << endl;
}
