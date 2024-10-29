#include <iostream>
#include <string>

int main() {
  std::string originalString = "Mary had a X lamb.";
  std::replace(originalString.begin(), originalString.end(), 'X',
               'big'); // Replaces all occurrences of 'X' with 'big'.

  std::cout << originalString << std::endl;

  return 0;
}