#include <iostream>
#include <string>
int main() {
  std::string str = "Mary had a %s lamb";
  std::string txt = "little";
  std::string out;
  out = std::to_string(str) + "\n" + std::to_string(txt);
  std::cout << out << "\n";
  return 0;
}