#include <iostream>
#include <sstream> // For stringstream
#include <string>

int main() {
  std::string str = "Mary had a %s lamb";
  std::string val = "little";

  // Create a stream from the input string
  std::stringstream ss(str);

  // Replace %s with actual value and print to stdout
  ss << val;
  std::cout << ss.str() << std::endl;

  // Specify order
  std::string str2 = "{1} had a {0} lamb";
  std::swap(val, str);
  std::stringstream ss2(str2);
  ss2 << val << " " << std::get<0>(str);
  std::cout << ss2.str() << std::endl;

  // Named arguments if you prefer
  const char *name = "Mary";
  const char *adj = "little";
  std::string str3 = "{name} had a {adj} lamb";
  std::stringstream ss3(str3);
  ss3 << name << " had a " << adj << " lamb";
  std::cout << ss3.str() << std::endl;
  return 0;
}