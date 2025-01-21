#include <iostream>
#include <string>

int main() {
  std::string original = "Mary had a X lamb";
  std::string little = "little";

  // Find the position of 'X' in the original string
  size_t pos = original.find('X');

  if (pos != std::string::npos) {
    // Replace 'X' with 'little'
    original.replace(pos, 1, little);
  }

  std::cout << "Replaced string: " << original << std::endl;

  return 0;
}