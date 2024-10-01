#include <iostream>
#include <string>

int main() {
  std::string str = "Mary had a %s lamb";
  std::string txt = "little";
  str.replace(str.find("%s"), 2, txt);
  std::cout << str << std::endl;
  return 0;
}