#include <iostream>
#include <string>

int main() {
  std::string a("abc");
  std::string b("Bac");

  if (a == b) {
    std::cout << "The strings are equal" << std::endl;
  } else {
    std::cout << "The strings are not equal" << std::endl;
  }

  return 0;
}