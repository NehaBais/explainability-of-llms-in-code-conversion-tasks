#include <iostream>
using namespace std;

int main() {
  int input1, input2;
  cout << "Enter two integers: ";
  cin >> input1 >> input2;

  int sum = input1 + input2;
  cout << "Sum: " << sum << endl;

  int difference = input1 - input2;
  cout << "Difference: " << difference << endl;

  int product = input1 * input2;
  cout << "Product: " << product << endl;

  int quotient = input1 / input2;
  float floatQuotient = static_cast<float>(input1) / static_cast<float>(input2);
  cout << "Integer Quotient: " << quotient << endl;
  cout << "Float Quotient: " << floatQuotient << endl;

  int remainder = input1 % input2;
  bool isNegative = (((input1 < 0) ^ (input2 < 0)) &&
                     remainder); // If both signs are different and the
                                 // remainder is not zero then it's negative.
  if (IsNegative) {
    remainder *= -1;
  }
  cout << "Remainder: " << remainder << endl;

  int exponentiation = input1;
  for (int i = 2; i <= input2; ++i) {
    exponentiation *= input1;
  }
  cout << "Exponentiation: " << exponentiation << endl;

  return 0;
}