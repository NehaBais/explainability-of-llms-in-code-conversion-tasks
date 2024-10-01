#include <iostream>
#include <string>

int main() {
  std::string original = "Mary had a X lamb";
  std::string little = "little";

  // The function replace() is not available in C++, but the function
  // 'replace' of string in standard library can be used instead.
  std::string replaced = original;
  replaced.replace(original.find("X"), 1, little);

  std::cout << "Original: \"" << original << "\"\n";
  std::cout << "Replaced: \"" << replaced << "\"\n";

  return 0;
}