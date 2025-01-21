#include <iostream>
int main() {
  void logic(bool a, bool b); // Declaration of the logic function
  return 0;
}
void logic(bool a, bool b) {
  std::cout << "a AND b:   " << (a && b);
  std::cout << "\na OR b:    " << (a || b);
  std::cout << "\nNOT a:    " << (!a);
}