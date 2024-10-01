#include <iostream>
#include <sstream>
#include <string>

int main() {
  std::string extra = "little";
  std::ostringstream oss;

  oss << "Mary had a " << extra << " lamb.";
  std::string new_str = oss.str();

  std::cout << new_str;

  return 0;
}