#include <iostream>
#include <sstream>
#include <string>

int main() {
  std::string adjective = "big";

  // C++ string interpolation:
  std::string lyric = "Mary had a " + adjective + " lamb.";

  std::cout << lyric << std::endl;

  return 0;
}