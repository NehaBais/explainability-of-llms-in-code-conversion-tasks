#include <iostream>
#include <string>

int main() {
  // Define two strings:
  std::string c = "cat";
  std::string d = "dog";

  // Compare two strings for exact equality:
  if (c == d)
    std::cout << c << " is bytewise identical to " << d << std::endl;
  else
    std::cout << c << " is bytewise different from " << d << std::endl;

  // Compare two strings for inequality (i.e., the inverse of exact equality):
  if (c != d)
    std::cout << c << " is bytewise different from " << d << std::endl;
  else
    std::cout << c << " is bytewise identical to " << d << std::endl;

  // Compare two strings to see if one is lexically ordered before the other:
  if (c < d)
    std::cout << c << " is lexically bytewise less than " << d << std::endl;
  else
    std::cout << c << " is lexically bytewise greater than or equal to " << d
              << std::endl;

  // Compare two strings to see if one is lexically ordered after the other:
  if (c > d)
    std::cout << c << " is lexically bytewise greater than " << d << std::endl;
  else
    std::cout << c << " is lexically bytewise less than or equal to " << d
              << std::endl;

  // Compare two strings in a case-sensitive manner:
  if (c == "Cat")
    std::cout << "Cats are not cats" << std::endl;
  else
    std::cout << c << " is Cat" << std::endl;

  // Compare two strings in a case-insensitive manner:
  if (std::equal(c.begin(), c.end(), d.begin(), d.end())) {
    std::cout << "Cats are not cats, but dogs are still dogs" << std::endl;
  } else {
    std::cout << "Cats are actually cats and dogs are also dogs" << std::endl;
  }
}