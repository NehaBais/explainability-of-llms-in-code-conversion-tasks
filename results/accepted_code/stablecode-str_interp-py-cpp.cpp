#include <iostream>
#include <sstream>

int main() {
  std::string extra = "little";
  std::string new_str;

  std::stringstream ss;
  ss << "Mary had a " << extra << " lamb.";
  new_str = ss.str();

  std::cout << new_str << std::endl;

  return 0;
}