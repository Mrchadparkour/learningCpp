#include <iostream>

/*
binary tree visual aid

        10
      /   \
     6    14
    / \    /\
   3   4  13 18
*/

using namespace std;

struct node {
  int key_value; //data
  node *left;
  node *right;
};

class Btree {
  public:
    Btree();
    ~Btree();

    void insert(int key);
    node *search(int key);
    void destroy_tree();
  private:
    void destroy_tree(node *leaf);
    void insert(int key, node *leaf);
    node *search(int key, node *leaf);
    node *root;
};

Btree::Btree(){
  root = NULL;
}

Btree::~Btree(){
  destroy_tree();
}

void Btree::insert(int key, node *leaf) {
  if (key < leaf -> key_value) {  //should it go right(greater) of left(lesser)
    if (leaf -> left != NULL) {    //if there is a leaf, start over with next leaf as root
      insert(key, leaf->left);
    } else {                      //if not
      leaf -> left = new node;    //make a new node
      leaf -> left -> key_value = key;  //give it its value
      leaf -> left -> left = NULL;  // set its bottom leaves to NULL
      leaf -> left -> right = NULL;
    }
  } else if (key >= leaf -> key_value) {  //right
    if (leaf -> right != NULL) {    //is there a leaf here?
      insert(key, leaf -> right);   //same as above
    } else {
      leaf -> right = new node;    //make a new node
      leaf -> right -> key_value = key; //give it its value and
      leaf -> right -> left = NULL;  //set bottom leaves to NULL!
      leaf -> right -> left = NULL;
    }
  }
}

 node *Btree::search(int key, node *leaf){
  if (leaf !=NULL) {
    if (key == leaf -> key_value) {
      return leaf;
    } else if (key < leaf -> key_value) {
      return search(key, leaf -> left);
    } else {
      return search(key, leaf -> right);
    }
  }
  else {
    return 0;
  }
}

void Btree::insert(int key) {
  if (root !=NULL) {  //if there is a root
    insert(key, root); //recursive insert takes over
  } else {
    root = new node;   //if there isn't it creates one
    root -> key_value = key;
    root -> left = NULL;
    root -> right = NULL;
  }
}

node *Btree::search(int key) {
  return search(key, root); //public versions makes it unecessary for users to have root node
}

void Btree::destroy_tree() {
  destroy_tree(root);
}

void Btree::destroy_tree(node *leaf) {
  destroy_tree(leaf-> left);
  destroy_tree(leaf -> right);
  delete leaf;
}
int main() {
  Btree myTree;

  myTree.insert(10);
  myTree.insert(15);
  myTree.insert(2);
  cout << myTree.search(15) -> key_value << endl;
  return 0;
}
