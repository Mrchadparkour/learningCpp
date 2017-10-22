#include <iostream>

using namespace std;

struct node {
  int data;
  node* next;
};

class List {
  private:
    node *head, *tail;  //created privately
  public:
    List();
    void createnode(int value);
    void insert_start(int value);
    void insert_pos(int pos, int value);
    void delete_first();
    void delete_last();
    void delete_pos(int pos);
    void mutate_pos(int pos, int value);
    void display();
};

List::List()
{
  head=NULL;
  tail=NULL;
}

void List::createnode(int value)  //appends to end
{
  node *temp = new node; //temp is our new node
  temp -> data = value;  //the new nodes data is equal to the arg value
  temp -> next = NULL;   //the new Node points to nothing
  if (head == NULL) {    //if nothing in list
    head = temp;         //our new node becomes the first
    tail = temp;         //and it is also the last because its the only one
    temp = NULL;         //temp val is cleared
  } else {
    tail -> next = temp;  //tail points to Null
    tail = temp;          //tail becomes the null node
  }
}

void List::insert_start(int value) //creates node to append to start
{
  node *temp = new node;
  temp -> data = value;
  temp -> next = head;
  head = temp;
}

void List::insert_pos(int pos, int value) {
  node *prev = new node;
  node *cur = new node;
  node *temp = new node;
  cur = head;
  for (int i = 1; i < pos; i++) {
    prev = cur;
    cur = cur -> next;
  }

  temp -> data = value;
  prev -> next = temp;
  temp -> next = cur;

}

void List::delete_first()
{
  node *temp = new node;
  temp = head;
  head = head -> next;
  delete temp;
}

void List::delete_last()
{
  node *current = new node;
  node *previous = new node;
  current = head;
  while (current -> next != NULL) {
    previous = current;
    current = current -> next;
  }
  tail = previous;
  previous -> next = NULL;
  delete current;
}

void List::delete_pos(int pos)
{
  node *cur = new node;
  node *prev = new node;
  cur = head;           //start at first node
  for (int i = 1; i < pos; i++) {
    prev = cur;         //prev is set to cur
    cur = cur -> next;  //cur set to next node
  }
  prev -> next = cur -> next; //prev's next node (pos - 1) is set to curs next node(pos + 1)
}

void List::mutate_pos(int pos, int value){
  node *cur = new node;
  cur = head;
  for (int i = 1; i < pos; i++) {
    cur = cur -> next;
  }

  cur -> data = value;
}

void List::display()
{
  node *temp = new node; //temp is a new node to "walk" through my linked list
  temp = head;          //points to the first node
  while (temp != NULL) {  //keep looking till you reach the tail / NULL pointer
    cout << temp -> data << "\t"; //print the data
    temp = temp -> next;    //and set it to next node
  }
}
void showCom(const char* whatDo )
{
  cout << "\n------------------------------------------------------------------------\n\n";
  cout << whatDo << endl;
  cout << "\n------------------------------------------------------------------------\n\n";
}

int main()
{
  List my_list;
  for (int i = 10; i < 100; i += 10) {
    my_list.createnode(i);
  }
  showCom("Display All in linked list");
  my_list.display();

  my_list.createnode(26);
  showCom("Insert 26 to end");
  my_list.display();

  my_list.delete_last();
  showCom("And delete it from end");
  my_list.display();

  my_list.insert_pos(3, 26);
  showCom("Add 26 to pos 3");
  my_list.display();

  my_list.delete_pos(3);
  showCom("And delete it from pos 3");
  my_list.display();

  my_list.insert_start(26);
  showCom("Insert 26 at start");
  my_list.display();

  my_list.delete_first();
  showCom("And delete it from start");
  my_list.display();

  my_list.mutate_pos(6, 27);
  showCom("Change pos 6 to 27");
  my_list.display();

  cout << endl;


}
