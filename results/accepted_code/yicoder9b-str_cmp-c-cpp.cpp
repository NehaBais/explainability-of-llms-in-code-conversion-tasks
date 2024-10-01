#include <algorithm>
#include <iostream>
#include <string>

void compare(const std::string &a, const std::string &b) {
  std::cout << "Comparing \"" << a << "\" and \"" << b << "\":\n";
  if (a == b) {
    std::cout << "They are exactly the same.\n";
  } else if (a != b) {
    std::cout << "They are not equal.\n";
  }

  if (a < b) {
    std::cout << a << " is lexically ordered before " << b << ".\n";
  } else if (a > b) {
    std::cout << a << " is lexically ordered after " << b << ".\n";
  }

  // Case insensitive comparison
  std::string a_lower(a);
  std::string b_lower(b);
  std::transform(a.begin(), a.end(), a_lower.begin(), ::tolower);
  std::transform(b.begin(), b.end(), b_lower.begin(), ::tolower);

  if (a_lower == b_lower) {
    std::cout << "They are the same when case is ignored.\n";
  } else if (a_lower != b_lower) {
    std::cout << "They are not equal when case is ignored.\n";
  }

  if (a_lower < b_lower) {
    std::cout << a << " would be ordered before " << b
              << " if case was ignored.\n";
  } else if (a_lower > b_lower) {
    std::cout << a << " would be ordered after " << b
              << " if case was ignored.\n";
  }
}

int main(int argc, char *argv[]) {
  for (size_t i = 1; i < size_t(argc - 1); i += 2) {
    std::string a = argv[i];
    std::string b = argv[i + 1];
    compare(a, b);
  }
  return 0;
}