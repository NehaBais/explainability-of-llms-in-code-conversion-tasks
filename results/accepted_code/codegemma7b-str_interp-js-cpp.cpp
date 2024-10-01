#include <iostream>
#include <string>

int main() {
  std::string original = "Mary had a X lamb";
  std::string little = "little";

  std::string replaced = original.replace(original.find("X"), 1, little);

  std::cout << "Original string: " << original << std::endl;
  std::cout << "Replaced string: " << replaced << std::endl;

  return 0;
}