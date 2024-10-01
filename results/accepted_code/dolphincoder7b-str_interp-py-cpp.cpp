#include <iostream>
#include <sstream>

int main() {
  std::string extra = "little";
  std::stringstream ss;
  ss << "Mary had a ";
  ss << extra;
  ss << " lamb.";
  std::cout << ss.str();

  return 0;
}