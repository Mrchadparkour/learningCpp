/*
Two types of file classes
-------------------------
ifstream a_file; -> handles reading files
ofstream a_file ( "filename" ); -> handles writing to files

closes file when file is closed

example:
*/

#include <fstream> //library for dealing with files
#include <iostream>

using namespace std;

int main()
{
 char str[10];

//create instance of ofstream and open example.txt
ofstream a_file ( "example.txt" );

//outputs to example.txt thru a_file
a_file << "This text will now be inside example.txt";

//Close the file stream
a_file.close();

//Open file for reading
ifstream b_file ( "example.txt" );

//reads one string from file
b_file >> str;

//Should output 'this'

cout << str << "\n";
cin.get();
//b_file is closed when program ends
}

