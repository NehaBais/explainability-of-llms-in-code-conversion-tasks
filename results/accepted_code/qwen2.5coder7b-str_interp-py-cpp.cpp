#include <iostream>
#include <string>

int main() {
  std::string extra = "little";
  auto new_str = std::format("Mary had a {} lamb.", extra);
  std::cout << new_str;
  return 0;
}