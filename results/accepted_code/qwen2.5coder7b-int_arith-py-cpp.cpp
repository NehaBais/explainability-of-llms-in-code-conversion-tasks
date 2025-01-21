#include <iostream>
using namespace std;

int main() {
  int input1, input2;

  cout << "Enter the first integer: ";
  cin >> input1;
  cout << "Enter the second integer: ";
  cin >> input2;

  int sum = input1 + input2;
  cout << "Sum: 		  " << sum << endl;
  int difference = input1 - input2;
  cout << "Difference: 	  " << difference << endl;
  int product = input1 * input2;
  cout << "Product: 	  " << product << endl;

  // Integer quotient rounds towards zero (truncates the decimal part)
  int integerQuotient = input1 / input2;
  cout << "Integer quotient: " << integerQuotient << endl;

  // Remainder has a sign that matches with the second operand
  int remainder = input1 % input2;
  cout << "Remainder: 		  " << remainder << endl;

  // Exponentiation doesn't exist in C++ like in Python, but you can implement
  // it using a loop:
  int exponent = 1;
  for (int i = 0; i < input2; i++) {
    exponent *= input1;
  }
  cout << "Exponentiation:   " << exponent << endl;

  return 0;
}