#include <iostream>
#include <string>

int main() {
  std::string original = "Mary had a X lamb";
  std::string little = "little";

  // String replacement with 'replace' method in C++
  std::string replaced = original.replace(original.find("X"), 1, little);

  std::cout << "Original string: " << original << "\n";
  std::cout << "Replaced string: " << replaced << "\n";

  return 0;
}