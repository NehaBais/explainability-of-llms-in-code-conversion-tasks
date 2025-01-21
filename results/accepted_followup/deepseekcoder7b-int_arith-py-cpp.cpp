#include <iostream>
using namespace std;
int main() {
  // Get two integers from the user
  int input1 = 18;
  int input2 = 7;

  // Calculate and print their sum
  cout << "Sum:               " << (input1 + input2) << endl;

  // Calculate and print difference
  cout << "Difference:         " << (input1 - input2) << endl;

  // Calculate and print product
  cout << "Product:            " << (input1 * input2) << endl;

  // Calculate integer quotient. Here, for simplicity we assume that the inputs
  // are non-zero to avoid divide by zero error. In a real application you would
  // need to handle these scenarios properly.
  cout << "Integer Division:   " << (input1 / input2) << endl;

  // For remainder calculation, I've considered that the inputs are non-zero.
  // In a real application you need to handle these scenarios properly by
  // checking for zero division error.
  int remainder = input1 % input2;
  cout << "Remainder:          " << remainder << endl;

  // For exponentiation, I've considered that the inputs are non-zero and
  // positive. In real scenarios you would need to handle these cases properly
  // by checking for overflow or underflow issues.
  int yy = pow(input1, input2);
  cout << "Exponentiation:     " << yy << endl;

  return 0; // program returns 0 if successful run
}