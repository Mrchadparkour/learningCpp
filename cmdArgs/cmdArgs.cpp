#include <iostream>
#include <fstream>

using namespace std;

int main(int argc, char *argv[]) //argc = arg count, argv are succeeding arguments
{
  if (argc !=2) {
    cout << "usage: " << argv[0] << " <filename>\n";
  } else {
    //We assume that argv[1] is the file we want
    ifstream the_file ( argv[1] );
    if (!the_file.is_open()) {
      cout << "Could not open file\n";
    } else {
      char x;
      //the file.get(x) returns false if the end of the file is reached or an error occurs

      while (the_file.get(x)) {
        cout << x;
      }
    }
    //file is closed at the end
  }
}
