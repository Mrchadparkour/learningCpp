#include <iostream>

using namespace std;

inline void hello()
{
  cout << "Hello";
}

int main()
{
  hello(); //literally replaces this with the code from the function
  cin.get();
}
