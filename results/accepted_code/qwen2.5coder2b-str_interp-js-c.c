#include <iostream>
#include <string>

int main() {
  std::string original = "Mary had a X lamb";
  std::string little = "little";

  // Using std::stringstream for basic string manipulation
  std::stringstream ss;
  ss << original;
  ss << " " << little;

  std::string replaced = ss.str();

  // Output the result
  std::cout << replaced << std::endl;

  return 0;
}