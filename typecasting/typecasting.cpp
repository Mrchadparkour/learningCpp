#include <iostream>

using namespace std;

int main()
{
  //c style typecast
  cout << (char)65 << "\n";
  //The (char) is a typecast, telling the computer
  //to interpret the 65 as a character, therefore it'll
  //print the ASCII value of 65 which is A
  cout << (int)'A' << endl;

  for (int x = 0; x < 128; x++) {
    cout << (char)x << " ";
  }

  //function style typecast
  cout << char (65) << "\n";

  //static cast
  cout << static_cast<char>(65) << "\n";
  cin.get();
}
