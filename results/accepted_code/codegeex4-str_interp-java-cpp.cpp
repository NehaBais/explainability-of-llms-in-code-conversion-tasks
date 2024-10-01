#include <iostream>
#include <sstream>

int main() {
  std::string adjective = "little";
  std::ostringstream oss;
  oss << "Mary had a " << adjective << " lamb";
  std::string lyric = oss.str();

  std::cout << lyric;

  return 0;
}