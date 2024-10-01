#include <iostream>
#include <regex>
#include <string>

int main() {
  std::string original = "Mary had a X lamb.";
  std::string little = "little";

  // Define a regex that matches 'X'
  std::regex xRegex("X");

  // Perform the string interpolation equivalent functionality in C++
  original = std::regex_replace(original, xRegex, little);

  std::cout << original << std::endl;

  return 0;
}