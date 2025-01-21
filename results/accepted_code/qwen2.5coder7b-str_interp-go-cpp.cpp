#include <iostream>
#include <string>

int main() {
  std::string str = "Mary had a %s lamb";
  std::string txt = "little";
  size_t pos = str.find("%s");
  if (pos != std::string::npos) {
    str.replace(pos, 2, txt);
  }
  std::cout << str << std::endl;
  return 0;
}