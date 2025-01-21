#include <iostream>
#include <string>

int main() {
  std::string adjective = "little";
  std::string lyric = "Mary had a " + adjective + " lamb";

  // Alternatively, using printf for formatting the string
  // printf("Mary had a %s lamb\n", adjective.c_str());

  std::cout << lyric << std::endl;

  return 0;
}