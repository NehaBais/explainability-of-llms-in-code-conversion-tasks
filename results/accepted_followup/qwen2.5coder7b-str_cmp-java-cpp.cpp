#include <algorithm>
#include <cctype>
#include <iostream>
#include <string>

bool icase_compare(const char &a, const char &b) {
  return std::tolower(a) == std::tolower(b);
}

void compare(std::string A, std::string B) {
  if (A.size() != B.size()) {
    std::cout << "Strings are not equal." << std::endl;
    return;
  }

  bool result = std::equal(A.begin(), A.end(), B.begin(), icase_compare);

  if (result)
    std::cout << "Strings are equal." << std::endl;
  else
    std::cout << "Strings are not equal." << std::endl;
}

int main() {
  compare("Hello", "hello");
  compare("World", "world1");
  return 0;
}