#include <format>
#include <iostream>
#include <string>

int main() {
  std::string little = "little";

  // Using format string with {} placeholders
  std::cout << "Mary had a " + little + " lamb." << std::endl;

  // Using format string with positional arguments
  std::cout << little << " had a " << "Mary" << " lamb." << std::endl;

  // Using format string with named arguments
  std::cout << std::format("{} had a {} lamb", "Mary", "little") << std::endl;

  return 0;
}