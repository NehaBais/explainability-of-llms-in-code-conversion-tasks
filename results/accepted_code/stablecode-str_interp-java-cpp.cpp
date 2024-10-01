#include <iostream>
#include <string>

int main() {
  std::string adjective = "little";
  std::string lyric;

  lyric = std::string("Mary had a ") + adjective + " lamb.";

  std::cout << lyric << std::endl;

  return 0;
}