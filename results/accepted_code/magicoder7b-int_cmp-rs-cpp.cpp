#include <iostream>
#include <string>
#include <vector>

int main() {
  std::cout << "Enter two integers: ";

  int a, b;
  if (std::cin >> a >> b) {
    if (a < b)
      std::cout << a << " is less than " << b << "\n";
    else if (a == b)
      std::cout << a << " equals " << b << "\n";
    else
      std::cout << a << " is greater than " << b << "\n";
  } else {
    std::cout << "Invalid input.\n";
  }

  return 0;
}