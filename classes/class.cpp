#include <iostream>

using namespace std;

class Computer //standard way to define class
{
  public:
    //this means that all of the functions below
    //and any other varibales are accessible to
    //the rest of the program
    //other class inheritances are private and protected
    Computer();
    //constructor
    ~Computer();
    //destructor
    void setspeed( int p );
    int readspeed();
  protected:
    //means all variables under this are only accessible
    // to other functions in this class until new restriction is replaced
  int processorspeed;
};

Computer::Computer()
{
  //Constructors can accept arguments but this one does not
  processorspeed = 0;
}

Computer::~Computer()
{
  //Destructors do not take arguments
}

void Computer::setspeed( int p )
{
  //To define a function outside put the name of teh class
  //after the return type and then two colons and then teh name of the function
  processorspeed = p;
}

int Computer::readspeed()
{
  //the two colons simply tell the compiler that the function is part of the class
  return processorspeed;
}

int main()
{
  Computer compute;
  //Creates an instance named compute
  compute.setspeed(100);

  cout << compute.readspeed() << endl;
}
