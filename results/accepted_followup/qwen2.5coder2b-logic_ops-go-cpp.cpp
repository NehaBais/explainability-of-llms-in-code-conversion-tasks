#include <iostream>
bool printLogic(bool a, bool b) {
  std::cout << "a and b is " << (a && b) << "\n";
  std::cout << "a or b is " << (a || b) << "\n";
  std::cout << "not a is " << (!a) << "\n";
  return true; // Return true to indicate successful execution
}