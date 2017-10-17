#include <iostream>
using namespace std;

char determineGrade(int num)
{
  if (num >= 90 && num <= 100){
    return 'A';
  } else if(num >= 80 && num < 90) {
    return 'B';
  } else if(num >= 70 && num < 80) {
    return 'C';
  } else if(num >= 60 && num < 70) {
    return 'D';
  }else if(num < 60) {
    return 'F';
  }
  else {
    return 'N';
  }
}

int main()
{
  int num;
  cout << "Enter score out of 100: ";
  cin >> num;
  char grade = determineGrade(num);
  cout << "You got a " << grade << endl;
  return 0;
}
