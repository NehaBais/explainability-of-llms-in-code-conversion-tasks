#include <iostream>
#include <regex> // for std::regex, std::regex_replace
#include <string>

int main() {
  // replace "{}" by defined values or variables
  std::string str = "Mary had a {} lamb";

  // Replace first instance of {} with "little"
  std::regex r("\\{\\}");
  str = std::regex_replace(str, r, "little");

  std::cout << str;
}