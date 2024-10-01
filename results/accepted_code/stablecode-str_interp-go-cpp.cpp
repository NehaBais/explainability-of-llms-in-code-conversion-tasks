#include <iostream>
#include <string>

int main() {
  std::string str = "Mary had a %s lamb";
  std::string txt = "little";
    str = std::regex_replace(str, std::regex("%s"), txt), std::regex("\\%s"), txt);

    std::cout << str << std::endl;
    return 0;
}