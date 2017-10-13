#include <iostream>

int getValueFromUser()
{
  std::cout << "Enter integer to see if is prime: ";
  int input;
  std:: cin >> input;
  return input;
}
bool checkIfPrime(int num)
{
  if (num <= 1) {
    return false;
  }

  int n = 2;
  while(n < num) {
    if (num % n == 0) {
      return false;
    }
    n++;
  }
  return true;
}

int main()
{
  int num = getValueFromUser();
  bool isPrime = checkIfPrime(num);
  std::string message = ((isPrime) ? "is Prime!" : "isn't Prime!");
  std::cout << num << " " << message << std::endl;
}
