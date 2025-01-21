#include <iostream>
#include <string>

int main() {
  std::string extra = "little";
  std::string result = "Mary had a " + extra + " lamb.";
  std::cout << result << std::endl;
  return 0;
}