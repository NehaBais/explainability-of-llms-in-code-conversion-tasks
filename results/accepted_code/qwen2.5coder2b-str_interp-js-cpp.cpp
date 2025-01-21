#include <iostream>
#include <string>

int main() {
  std::string original = "Mary had a X lamb";
  std::string little = "little";

  std::stringstream ss;
  ss << "Mary had a " << little << " lamb";

  std::string result = ss.str();

  std::cout << result << std::endl; // Output: Mary had a little lamb

  return 0;
}