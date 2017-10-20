#include <iostream>
using namespace std;

int main()
{
  int rows;                                           //Gets input from user
  std::cout << "Input number of rows to print: " ;
  std:cin >> rows;
  std::cout << endl;
        

  for (int i = 0; i < rows; i++) {           //iterates through rows
    int val = 1;

    for (int j = 1; j < rows - i; j++) {     //prints space up to the number of
      std::cout << "  ";                     //rows minus the number of numbers in
    }                                        //that row

    for (int k = 0; k <= i; k++) {
      std::cout << "   " << val;             //prints a space then the value
      val = val * (i - k) /(k + 1);          //is set next iteration
    }
    std::cout << endl;
  }
  return 0;
}
