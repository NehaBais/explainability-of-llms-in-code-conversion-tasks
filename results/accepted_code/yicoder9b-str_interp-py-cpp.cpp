#include <iostream>
#include <sstream>

int main() {
  std::string extra = "little";
  std::stringstream ss;
  ss << "Mary had a " << extra << " lamb.";
  std::string new_str = ss.str();
  std::cout << new_str << std::endl;

  return 0;
}