#include <iostream>
#include <cstdarg>

using namespace std;

//this function will take the number of values to average
//followed by all the numbers to average

double average (int num, ...)
{
  va_list arguments;
  double sum = 0;
  va_start (arguments, num); //initialize arguments to store all values after num
  for (int x = 0; x < num; x++) {  // Loop until all numbers are added
     // cout << va_arg(arguments, double) <<  endl;
      sum+= va_arg(arguments, double); //Adds the next value to sum
    }
    va_end( arguments ); //cleans up the list
    return sum / num;   //returns the average
}


int main()
{
  cout << average(3, 12.2, 22.3, 4.5) << endl;
  cout << average(5, 3.3, 2.2, 1.1, 5.5, 3.3) << endl;
}
