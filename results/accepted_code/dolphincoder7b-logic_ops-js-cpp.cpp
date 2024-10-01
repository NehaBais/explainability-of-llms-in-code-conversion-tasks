#include <iostream>
void logic(bool a, bool b) {
  std::cout << "a AND b:  " << (a && b);
  std::cout << "\na OR b:   " << (a || b);
  std::cout << "\nNOT a:   " << (!a);
}