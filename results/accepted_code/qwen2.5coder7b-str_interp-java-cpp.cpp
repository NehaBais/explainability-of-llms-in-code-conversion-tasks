#include <iostream>
#include <string>

int main() {
  std::string adjective = "little";
  std::string lyric = "Mary had a X lamb";

  size_t pos = lyric.find('X');
  if (pos != std::string::npos) {
    lyric.insert(pos, adjective);
    lyric.erase(pos + adjective.length() + 1, 1); // Remove 'X'
  }

  std::cout << lyric << std::endl;

  return 0;
}