#include <iostream>
#include <string>

int main() {
  std::string str = "Mary had a %s lamb";
  std::string txt = "little";
  std::cout << sprintf(str, txt) << std::endl;
}