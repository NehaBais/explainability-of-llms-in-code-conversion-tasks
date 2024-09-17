#include <cmath>
#include <iostream>

int main() {
  int input1, input2;

  std::cout << "Enter the first integer: ";
  std::cin >> input1;
  std::cout << "Enter the second integer: ";
  std::cin >> input2;

  int qq = input1 + input2;
  std::cout << "Sum: \t\t" << qq << std::endl;

  int ww = input1 - input2;
  std::cout << "Difference: \t" << ww << std::endl;

  int ee = input1 * input2;
  std::cout << "Product: \t" << ee << std::endl;

  int rr = input1 / input2;
  float ff = static_cast<float>(input1) /
             input2; // For getting the actual floating point division
  std::cout << "Integer Quotient: \t" << rr << std::endl;
  std::cout << "Float Quotient: \t" << ff << std::endl;

  float uu = input1 % input2; // For getting the remainder that matches the sign
                              // of the first operand
  int vv = abs(input1) % abs(input2); // For getting the remainder that matches
                                      // the sign of the second operand
  std::cout << "Whole Remainder: \t" << uu << std::endl;
  std::cout << "Actual Remainder: \t" << vv << std::endl;

  int yy = pow(input1, input2);
  std::cout << "Exponentiation: \t" << yy << std::endl;

  return 0;
}