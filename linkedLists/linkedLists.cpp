/*
 Linked lists are a way to store data with structures so that the programmer can automatically create a new place to store data whenever necessary. Specifically the programmer writes a struct or class definition that contains variables
 holding info about something, and then has a pointer to a struct of its type. Each of these individual struct or classes in the list is commonly known as a
node
*/

struct node {
  int x;
  node *next;
}

int main()
{
  node *root; //This will be the unchanging first node

  root = new node; //Now root points to a node struct 
  root -> next = 0; //The node root points to has its next pointer
                    //set equal to a null operator
  root -> x = 5; //By using the -> operator, you can modify the node
                 // a pointer (root in this case) points to.
}
