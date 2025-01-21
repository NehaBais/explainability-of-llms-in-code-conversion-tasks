#include <iostream>
#include <string>

int main() {
  std::string str = "Mary had a %s lamb";
  std::string txt = "little";
  char buffer[100]; // Buffer to hold the interpolated string

  // Use sprintf to interpolate the values into the string
  std::sprintf(buffer, str.c_str(), txt.c_str());

  // Print the result
  std::cout << buffer << std::endl;

  return 0;
}