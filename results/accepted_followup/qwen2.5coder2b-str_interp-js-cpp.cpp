#include <iostream>
#include <sstream>

int main() {
  std::string original = "Mary had a X lamb";
  std::string little = "little";

  std::ostringstream ss;
  ss << "Mary had a " << little << " lamb";

  std::string result = ss.str();

  std::cout << result << std::endl; // Output: Mary had a little lamb

  return 0;
}