#include <iostream>
#include <string>

int main() {
  std::string s1 = "Hello";

  // Append string literal to variable using '+=' operator.
  s1 += ", World!";

  // Show the contents of the variable after appending operation.
  std::cout << s1;

  return 0;
}