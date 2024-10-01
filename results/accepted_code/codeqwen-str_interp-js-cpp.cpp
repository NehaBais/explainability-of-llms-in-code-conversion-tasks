#include <iostream>
#include <sstream>

int main() {
  std::string original = "Mary had a X lamb";
  std::string little = "big";
  std::istringstream iss(original);
  std::ostringstream oss;

  std::string token;
  while (iss >> token) {
    if (token == "X") {
      oss << little;
    } else {
      oss << token;
    }
    oss << ' '; // add a space between words.
  }

  std::cout << oss.str() << '\n';

  return 0;
}