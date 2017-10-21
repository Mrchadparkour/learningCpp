#include <iostream>
#include <fstream>

using namespace std;

void count(const char* file)
{
  ifstream the_file (file);
  if (!the_file.is_open()) {
    cout << "Couldn't open the file :(\n";
  }
  else {
    char x;
    int count;
    while (the_file.get(x)) {
        if (x == '\n') {
          count++;
        }
    }
    cout << file << " has " << count << " lines!\n";
  }
}

int main(int argc, char *argv[])
{
 if (argc != 2) {
   cout << "Usage: " << argv[0] << " <filename>\n";
 }
 else {
   count(argv[1]);
 }
}
