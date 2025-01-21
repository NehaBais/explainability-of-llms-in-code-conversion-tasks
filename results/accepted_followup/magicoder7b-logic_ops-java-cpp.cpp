#include <iostream>

void logic(bool a, bool b) {
  std::cout << "a AND b: " << (a && b) << std::endl;
  std::cout << "a OR b: " << (a || b) << std::endl;
  std::cout << "NOT a: " << (!a) << std::endl;
}

// Add this function to provide main()
int main() {
  logic(true, false); // Replace with your own test cases.
  return 0;
}