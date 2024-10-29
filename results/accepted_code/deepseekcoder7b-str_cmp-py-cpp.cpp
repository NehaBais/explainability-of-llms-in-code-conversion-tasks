#include <algorithm>
#include <iostream>
#include <string>

template <typename T1, typename T2> void compare(T1 a, T2 b) {
  std::cout << "'" << a << "' is of type " << typeid(a).name() << " and '" << b
            << "' is of type " << typeid(b).name() << std::endl;

  if (a == b) {
    std::cout << '\'' << a << "' is equal to '" << b << '\'' << std::endl;
  } else {
    std::cout << '\'' << a << "' is not equal to '" << b << '\'' << std::endl;
  }

  if (a < b) {
    std::cout << '\'' << a << "' is strictly less than '" << b << '\''
              << std::endl;
  } else {
    std::cout << '\'' << a << "' is not strictly less than '" << b << '\''
              << std::endl;
  }

  if (a > b) {
    std::cout << '\'' << a << "' is strictly greater than '" << b << '\''
              << std::endl;
  } else {
    std::cout << '\'' << a << "' is not strictly greater than '" << b << '\''
              << std::endl;
  }
}

int main() {
  compare("YUP", "YUP");
  compare("BALL", "BELL");
  compare("123", "24");
  compare(24, 123);
  compare(5.0, 5);

  std::string str1 = "case";
  std::string str2 = "Case";
  if (str1 == str2) {
    std::cout << "Strings are equal in case-sensitive comparison" << std::endl;
  } else {
    std::cout << "Strings are not equal in case-sensitive comparison"
              << std::endl;
  }

  if (std::lexicographical_compare(str1.begin(), str1.end(), str2.begin(),
                                   str2.end())) {
    std::cout
        << "Strings are lexicographically less in case-insensitive comparison"
        << std::endl;
  } else {
    std::cout << "Strings are not lexicographically less in case-insensitive "
                 "comparison"
              << std::endl;
  }
}