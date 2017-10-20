#include <iostream>
#include <cstring>

using namespace std;

/*
  Functions to help with string multipulation
  -------------------------------------------

  Turn char array to string: istream& getline(char *buffer, int length, char terminal char)
  compare strings: int strcmp (const char *s1, const char *s2)
  concat: char *strcat(char *dest, const char *src);
  copy: char *strcpy (char *dest, const char *src);
  getLength: size_t strlen (const char *s);
*/

int main()
{
  char name[50];
  char lastname[50];
  char fullname[100]; //big enough to hold both first and last name

  cout << "Please enter your name: ";
  cin.getline(name, 50);
  if( strcmp(name, "Chadwick") == 0 ){
    cout << "Haha Thats my name too.\n";
  }
  else{
    cout << "Hello " << name << ".\n";
  }

  cout << "You name is " << strlen(name) << " Pletters long.\n";
  cout << "Whats your last name? ";
  cin.getline(lastname, 50);
  fullname[0] = '\0';
  strcat(fullname, name);
  strcat(fullname, " ");
  strcat(fullname, lastname);

  cout<< "Your fullname is " << fullname << "\n";
  cin.get();
}
