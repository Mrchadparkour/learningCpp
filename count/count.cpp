#include <iostream>
#include <fstream>

using namespace std;

int main(int argc, char *argv[])
{
  ifstream b_file (argv[1]);
  cout << *b_file << endl;
  return 0;
}
