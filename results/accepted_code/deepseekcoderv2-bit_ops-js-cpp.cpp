#include <iostream>
#include <limits>

void bitwise(int a, int b) {
  std::cout << "a AND b: " << (a & b) << std::endl;
  std::cout << "a OR b: " << (a | b) << std::endl;
  std::cout << "a XOR b: " << (a ^ b) << std::endl;
  std::cout << "NOT a: " << ~a << std::endl;

  // Left shift
  if (b >= 0 && b < std::numeric_limits<int>::digits) {
    std::cout << "a << b: " << (a << b) << std::endl;
  } else {
    std::cout << "Shift amount out of range for int." << std::endl;
  }

  // Arithmetic right shift
  if (b >= 0 && b < std::numeric_limits<int>::digits) {
    std::cout << "a >> b: " << (a >> b) << std::endl;
  } else {
    std::cout << "Shift amount out of range for int." << std::endl;
  }

  // Logical right shift
  if (b >= 0 && b < std::numeric_limits<int>::digits) {
    std::cout << "a >>> b: " << ((unsigned int)a >> b) << std::endl;
  } else {
    std::cout << "Shift amount out of range for int." << std::endl;
  }
}

int main() {
  int a = 10; // Example values for a and b
  int b = 2;
  bitwise(a, b);
  return 0;
}