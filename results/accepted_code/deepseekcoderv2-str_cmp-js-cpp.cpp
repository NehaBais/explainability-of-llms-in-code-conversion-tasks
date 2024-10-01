#include <iostream>
int main() {
  std::string first = "hello";
  std::string second;
  std::cout << "enter a string: ";
  std::cin >> second;
  if (second == first) {
    std::cout << "equal\n";
  } else {
    std::cout << "not equal\n";
  };
  return 0;
}