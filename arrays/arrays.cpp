#include <iostream>

using namespace std;
/*To declare arrays in c++, <data_type> <name>[max_size_of_array]
  Danger: allocating index past max size can allocate anywhere and crash your   computer.*/

int main()
{
 int x;
 int y;
 int array[8][8]; //declares two-dimensional array

 for (x = 0; x < 8; x++) {   //loop through both dimensions
  for (y = 0; y < 8; y++) {
      array[x][y] = x * y;  //assign value to each spot in 2d array
  }
 }
 cout << "Array Indicies: " << endl;

 for(x = 0; x < 8; x++) {
   for (y = 0; y < 8; y++){
    // cout << "["<< x << "][" << y <<"]=" << array[x][y] << " " << endl;
    cout << array[x][y] << " ";
    if (array[x][y] < 10) {
      cout << " ";
    }
   }
   cout << endl;
 }
 // cin.get();
}
