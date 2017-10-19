#include <iostream>
using namespace std;

int getVal(const std::string& input)
{
  int val;
  cout << input;
  cin >> val;
  if (val > 50000) {
    cout <<"\n Entered value exceed limit... \n" << endl;
    getVal(input);
  } else {
    return val;
  }
}

float cToF(float input) {
  float F = (input * 1.8) + 32;
  return F;
}

int main()
{
 float min = getVal("Please give a lower limit: ");
 float max = getVal("Please give a higher limit, 10 > limit <= 50000: ");
 float step = getVal("Please give a step: ");

 cout << "\nCelsius          Fahrenheit" << endl;
 cout << "-------          ----------" << endl;
 for (int i = min; i <= max; i += step) {
   cout << "  " << i << " \u2103               " << cToF(i) <<" \u2109 " << endl;
 }
 return 0;
}
