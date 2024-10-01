#include <iostream>
#include <string>
int main() {
  std::string s = "12345678";
  s.insert(0, "0"); // by using the insert function of string class in C++
  std::cout << s << std::endl;
  return 0;
}