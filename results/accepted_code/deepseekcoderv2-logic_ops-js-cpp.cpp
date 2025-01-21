#include <iostream>
#include <string>

void logic(bool a, bool b) {
  std::cout << "a AND b: " << (a && b) << std::endl;
  std::cout << "a OR b: " << (a || b) << std::endl;
  std::cout << "NOT a: " << (!a) << std::endl;
}

int main() {
  bool a = true;  // or false, depending on your test case
  bool b = false; // or true, depending on your test case
  logic(a, b);
  return 0;
}