#include <iostream>

using namespace std;

/*Pointers are variables that store the spot in memory
where data can be stored. syntax: <variable_type> *<name> */

int main()
{
  int x;  //a normal integer variable
  int *p; //a pointer to an integer

  p = &x; //reads "assign addres of x to p"
  cout << "Enter a value: ";
  cin >> x; // ask user for value of x, could also use *p here.
  cout << "*p is equal to " << *p << endl;
  cout << "x is equal to " << x << endl;
  cout << "p is equal to " << p << endl;
  return 0;
}
