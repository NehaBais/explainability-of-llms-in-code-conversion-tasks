#include <format>
#include <iostream>

int main() {
  std::string str = "Mary had a {} lamb";
  std::string txt = "big";

  std::cout << std::format(str, txt)
            << std::endl; // Outputs: Mary had a big lamb
  return 0;
}