#include <iostream>
#include <string>

int main() {
  std::string s1 = "hello";
  std::cout << s1 + " world" << std::endl;

  std::string s2 = s1 + " world";
  std::cout << s2 << std::endl;

  s1 = "hello";
  std::string separator = ", ";
  std::string result = separator + s1 + separator + "world" + separator + "mom";
  std::cout << result << std::endl;

  s2 = separator + s1 + separator + "world" + separator + "mom";
  std::cout << s2 << std::endl;

  return 0;
}