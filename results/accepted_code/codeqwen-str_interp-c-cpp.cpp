#include <iostream>
#include <string>

int main() {
  std::string extra = "little";
  std::string str = "Mary had a X lamb.";

  size_t pos = str.find("X");
  if (pos != std::string::npos) {
    str.replace(pos, 1, extra);
  }

  std::cout << str << "\n";
  return 0;
}