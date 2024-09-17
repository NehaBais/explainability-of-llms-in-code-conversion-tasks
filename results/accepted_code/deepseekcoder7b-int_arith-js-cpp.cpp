#include <cmath>
#include <iostream>
using namespace std;

int main(int argc, char **argv) {
  if (argc != 3) {
    cout << "Please provide two integers as arguments.";
    return 1;
  }

  int a = stoi(argv[1]); // convert string to integer
  int b = stoi(argv[2]);

  int sum = a + b;
  int difference = a - b;
  int product = a * b;
  double division =
      (double)a /
      b; // note: in C++, the result of dividing two integers is an integer. If
         // you want it to be real number, we cast one operand to double
  int remainder =
      a %
      b; // The '%' operator produces the remainder after dividing 'b' into 'a'.
         // However, in C++ division by zero doesn’t yield any error message and
         // causes undefined behavior. Please handle it properly if needed.

  cout << "a + b = " << sum << endl;
  cout << "a - b = " << difference << endl;
  cout << "a * b = " << product << endl;

  // C++ doesn't have built-in support for rounding quotient to towards negative
  // infinity. You can implement it manually, but for simplicity we'll just
  // print division as double (which will already be rounded).
  cout << "a / b = " << division << endl;

  // For the remainder, C++ doesn't provide direct support for indicating its
  // sign matches the sign of the first operand or of the second operand. You
  // may have to do this manually if needed.
  cout << "a % b = " << remainder << endl;

  return 0;
}