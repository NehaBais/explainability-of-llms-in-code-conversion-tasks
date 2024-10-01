#include <iostream>
#include <string>

int main() {
  std::string s = "hello";
  std::string t = s + " there!";

  std::cout << "Original string: " << s << std::endl;
  std::cout << "Concatenated string: " << t << std::endl;

  return 0;
}