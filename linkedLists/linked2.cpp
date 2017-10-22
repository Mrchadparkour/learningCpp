#include <iostream>

using namespace std;

struct node {
  int x;
  node *next;
};

int main()
{
  node *root; //This wont change or we would lose the list in memory
  node *conductor; //This will point to each node as it traverses the list

  root = new node;  //Sets it to actually point to something else it wouldn't work well
  root -> next = 0;
  root -> x = 12;
  conductor = root; //conductor points to first node
  if (conductor != NULL) {
    while (conductor -> next != 0) {
      cout << conductor -> x << endl; //prints next nodes int
      conductor = conductor -> next;
    }
    cout << conductor -> x << endl;
  }

  conductor -> next = new node;  //Creates a node at end of line
  conductor = conductor -> next; //points to that node
  conductor -> next = 0;         // prevents it from going any further
  conductor -> x = 42;
}
