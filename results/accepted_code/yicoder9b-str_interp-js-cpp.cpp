#include <iostream>
#include <string> // For std::string

int main() {
  std::string original = "Mary had a X lamb";
  std::string little = "little";

  size_t pos = 0;

  while (
      (pos = original.find("X", pos)) !=
      std::string::npos) { // loop to replace all instances of 'X' in the string
    original.replace(pos, 1, little);
    ++pos;
  }

  std::cout << original << std::endl; // prints: "Mary had a little lamb"

  return 0;
}