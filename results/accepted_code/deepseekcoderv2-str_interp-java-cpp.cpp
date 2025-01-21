#include <iostream>
#include <string>

int main() {
  std::string adjective = "little";
  std::string lyric = "Mary had a %s lamb";
  std::string result = "";

  // Perform the substitution using sprintf for simplicity
  char buffer[100];
  sprintf(buffer, lyric.c_str(), adjective.c_str());
  result = std::string(buffer);

  std::cout << result << std::endl;
  return 0;
}