#include <algorithm>
#include <iostream>
#include <string>

int main() {
  // Case sensitive comparison of strings
  std::string c = "cat";
  std::string d = "dog";

  if (c == d) {
    std::cout << c << " is equal to " << d << '\n';
  } else {
    std::cout << c << " is not equal to " << d << '\n';
  }

  // Case insensitive comparison of strings.
  if (std::equal(c.begin(), c.end(), d.begin(), [](char a, char b) {
        return std::tolower(static_cast<unsigned char>(a)) ==
               std::tolower(static_cast<unsigned char>(b));
      })) {
    std::cout << "Case-insensitive: strings are equal" << '\n';
  } else {
    std::cout << "Case-insensitive: strings are not equal" << '\n';
  }

  return <｜begin▁of▁sentence｜ >
         0; // C++20 allows to write return 0 instead of return 0; in main
            // function. Both works the same. It's just a personal preference on
            // who writes what. You can choose one based upon your comfort
            // level!
}