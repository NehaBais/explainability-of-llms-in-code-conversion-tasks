#include <iostream>
using namespace std;

int main() {
  int a, b;
  cin >> a >> b;

  if (b == 0) {
    cout << "Error: Division by zero." << endl;
    return 1;
  }

  int sum = a + b;
  int difference = a - b;
  int product = a * b;
  double quotient = static_cast<double>(a) /
                    b; // C++ does not have truncation towards 0 like C
  int remainder = a % b;

  cout << "a+b = " << sum << endl;
  cout << "a-b = " << difference << endl;
  cout << "a*b = " << product << endl;
  cout << "a/b (truncated) = " << quotient << endl;
  cout << "a%b = " << remainder << endl;

  return 0;
}