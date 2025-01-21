#include <iostream>
#include <sstream>
#include <string>

int main() {
  // Create a string variable equal to any text value.
  std::string s1 = "hello";

  // Concatenate with another string literal and print the result.
  std::cout << s1 + " world" << std::endl;

  // Store the concatenated result in another variable.
  std::string s2 = s1 + " world";

  // Print the value of the second variable.
  std::cout << s2 << std::endl;

  // Create a string variable equal to any text value.
  s1 = "hello";

  // Create stringstream object for join
  std::stringstream ss;

  // Join with another string literal and print the result using stringstream.
  ss << s1 << ", world, mom";

  // Print the value of the third variable.
  std::cout << ss.str() << std::endl;

  return 0;
}