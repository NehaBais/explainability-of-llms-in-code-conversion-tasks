#include <iostream>
#include <string>

int main() {
  std::string str = "abc";
  std::cout << str << '\n';

  // Using '+' operator
  str += "def";

  // Or using append function
  // str.append("def");

  std::cout << str << '\n';
}