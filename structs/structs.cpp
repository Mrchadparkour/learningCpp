#include <iostream>

using namespace std;

/*Structs are a way of storing multiple values with potentially
different data types. Similar to JS object. 

Typical format looks like:
  struct Tag {
    Members
  };

struct Tag name_of_single_structure;

Access variable just like JS Object

example:
 struct myStruct {
   int x;
 };
 struct myStruct a_struct;

 a_struct.x = 69
 */

struct database {
  int id_number;
  int age;
  float salary;
};

int main()
{
 database employee; //created employee, which is a knew database struct
                    // and has modifiable variables in it.
 
 employee.age = 22;
 employee.id_number = 1;
 employee.salary = 12000.21
}
