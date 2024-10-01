#include <iostream>
#include <string>

int main() {
  std::string original = "Mary had a X lamb";
  std::string little = "little";

  size_t pos = original.find('X');
  if (pos != std::string::npos)
    original.replace(pos, 1, little);

  std::cout << original << '\n';

  return 0;
}