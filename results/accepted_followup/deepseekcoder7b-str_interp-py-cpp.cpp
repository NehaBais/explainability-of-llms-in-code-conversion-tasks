#include <algorithm>
#include <iostream>
#include <sstream>
#include <string>

int main() {
  std::string extra = "little";
  std::string str = "Mary had a X lamb.";

  size_t pos = 0;
  while ((pos = str.find("X", pos)) != std::string::npos) {
    str.replace(pos, 1, extra);
    pos += extra.size();
  }

  std::cout << str;
}