#include <iostream>
using namespace std;
int main() {
  int a, b;
  cout << "Enter first integer: ";
  cin >> a;
  cout << "Enter second integer: ";
  cin >> b;

  int sum = a + b;
  int difference = a - b;
  long long product = (long long)a * b;
  float division = static_cast<float>(a) / b;
  int remainder =
      a % b; // This produces the remainder after dividing 'b' into 'a'. The '%'
             // operator is called the 'modulo' operator.

  cout << "a + b = " << sum
       << endl; // The %d syntax is replaced by the variable.
  cout << "a - b = " << difference << endl;
  cout << "a * b = " << product << endl;
  cout << "a / b = " << division << endl;
  cout << "a % b = " << remainder << endl;

  return 0;
}