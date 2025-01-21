#include <iostream>
#include <string>

int main() {
  std::string original = "Mary had a X lamb";
  std::string little = "little";
  size_t pos = 0;

  while ((pos = original.find("X", pos)) != std::string::npos) {
    original.replace(pos, 1, little);
    pos += little.length();
  }

  std::cout << "Original: " << original << "\n";

  return 0;
}