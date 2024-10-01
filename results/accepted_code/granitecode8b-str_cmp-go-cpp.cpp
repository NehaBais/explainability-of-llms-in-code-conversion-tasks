#include
#include
int main() {
  std::string c = "cat";
  std::string d = "dog";
  if (c == d) {
    std::cout << c << " is bytewise identical to " << d << std::endl;
  }
  if (c != d) {
    std::cout << c << " is bytewise different from " << d << std::endl;
  }
  if (c > d) {
    std::cout << c << " is lexically bytewise greater than " << d << std::endl;
  }
  if (c < d) {
    std::cout << c << " is lexically bytewise less than " << d << std::endl;
  }
  if (c >= d) {
    std::cout << c << " is lexically bytewise greater than or equal to " << d
              << std::endl;
  }
  if (c <= d) {
    std::cout << c << " is lexically bytewise less than or equal to " << d
              << std::endl;
  }
  // C++ is strongly typed and will not directly compare a value of string
  // type to a value of numeric type.

  // A case insensitive compare can be done with the
  // std::lexicographical_compare() function:
  bool eqf = true;
  if (std::lexicographical_compare(c.begin(), c.end(), d.begin(), d.end())) {
    std::cout << c << " is lexically greater than " << d << " " << eqf
              << std::endl;
  } else {
    std::cout << c << " is not lexically greater than " << d << " " << eqf
              << std::endl;
  }

  // There are other string comparison functions in the <string> header that can
  // be used for various purposes, such as searching for a substring within a
  // string or comparing two strings based on their numerical values.
}