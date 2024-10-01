#include <iostream>
#include <sstream>
#include <string>

int main() {
  std::string str = "Mary had a %s lamb";
  std::string txt = "little";
  std::ostringstream oss;
  oss << std::replace_format_placeholders(str, &txt);
  std::cout << oss.str() << std::endl;
  return 0;
}