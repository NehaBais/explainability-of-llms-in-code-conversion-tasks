#include <iostream>

int main() {

  // Declare variables
  int a, b;

  std::cout << "Enter two integers separated by space\n";
  if (std::cin >> a >> b) {
    std::cout << "a + b = " << a + b << "\n";
    std::cout << "a - b = " << a - b << "\n";
    std::cout << "a * b = " << a * b << "\n";

    // Checking for division by zero
    if (b == 0) {
      std::cout << "Error: Division by zero is not allowed\n";
      return 1; // return with error code 1
    } else {
      std::cout << "a / b = " << a / double(b)
                << "\n"; // For integer division, C++ divides integers and
                         // rounds towards zero.
      std::cout
          << "The remainder is not applicable in this context\n"; // The
                                                                  // remainder
                                                                  // operation
                                                                  // doesn't
                                                                  // make sense
                                                                  // when we are
                                                                  // working
                                                                  // with two
                                                                  // integers.
    }

  } else {
    std::cout << "Error: Invalid input format\n";
    return 1; // return with error code 1
  }

  return 0; // return successfully
}