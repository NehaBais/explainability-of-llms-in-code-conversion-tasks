#include <iostream>

int main() {
  std::string s = "hello";

  // concatenate strings and store in another string variable.
  std::string s2 = s + " there!";

  // print the content of the variables.
  std::cout << s << std::endl;
  std::cout << s2 << std::endl;

  return 0;
}