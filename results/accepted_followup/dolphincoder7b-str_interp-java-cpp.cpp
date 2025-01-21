#include <iostream>
#include <string>

int main() {
  std::string adjective = "little";
  std::string lyric =
      std::string(static_cast<const char *>("Mary had a %s lamb")) % adjective;
  std::cout << lyric << '\n'; // Mary had a little lamb

  return 0;
}