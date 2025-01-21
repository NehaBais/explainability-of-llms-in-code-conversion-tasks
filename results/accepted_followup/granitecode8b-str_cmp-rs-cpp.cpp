#include <iostream>
#include <string>
int main() {
  std::string str1("Hello");
  std::string str2("World");
  if (str1 == str2) {
    std::cout << "The strings are equal" << std::endl;
  } else {
    std::cout << "The strings are not equal" << std::endl;
  }
}