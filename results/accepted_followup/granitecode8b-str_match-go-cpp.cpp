#include <cstdlib>
#include <iostream>
#include <string>

void match(const std::string &first, const std::string &second) {
  size_t i = first.find(second);
  if (i != std::string::npos) {
    std::cout << "at location " << i << ", ";
  }
}