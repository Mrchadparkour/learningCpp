#include <iostream>

using namespace std;
/*This is an example of a union, unions are like structs except that all
  variables share the same memory. When a union is decalred the compiler
  allocates enough memory for the largest data-type in the union. It's like
  a giant storage chest where you can store one large item, or a small item,
  but never both at the same time. */

struct xampl {
  int x;
};

int main()
{
 xampl structure; //creates an xampl struct named structure
 xampl *ptr;      //creates a union 

 structure.x = 12; 
 ptr = &structure; //set ptr to the memory address of structure

 cout << ptr -> x; //The -> is like the * for structures and will return
                   //what is stored at that memory address
 
 cin.get(); //sometimes the CMDline will close as soon as the program 
            //finishes, cin.get() forces it to wait for user input
}
