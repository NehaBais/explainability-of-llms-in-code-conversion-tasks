#include <iostream>
void logic(bool a, bool b) {
  std::cout << "a AND b:  " << (a && b) << '\n';
  std::cout << "a OR b:   " << (a || b) << '\n';
  std::cout << "NOT a:    " << (!a) << '\n';
}
int main() {
  // Example usage of the function
  logic(true, false); // Output: a AND b: true; a OR b: true; NOT a: false
  return 0;
}