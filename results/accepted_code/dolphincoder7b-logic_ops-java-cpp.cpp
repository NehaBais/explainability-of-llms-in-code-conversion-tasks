#include <iostream>
void logic(bool a, bool b) {
  std::cout << "a AND b: " << (a && b) << '\n';
  std::cout << "a OR b: " << (a || b) << '\n';
  std::cout << "NOT a: " << (!a) << '\n';
}