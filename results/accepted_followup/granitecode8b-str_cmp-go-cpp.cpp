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
  bool eq =
      std::lexicographical_compare(c.begin(), c.end(), d.begin(), d.end());
  if (eq) {
    std::cout << c << " is lexically equal to " << d << std::endl;
  } else {
    std::cout << c << " is lexically not equal to " << d << std::endl;
  }
}