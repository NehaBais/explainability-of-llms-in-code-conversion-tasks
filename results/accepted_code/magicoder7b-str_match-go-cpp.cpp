#include <cstring>
#include <iostream>
#include <string>

void match(std::string first, std::string second) {
  // 1. check if the first string starts with the second string
  bool startsWith =
      (strncmp(first.c_str(), second.c_str(), second.size()) == 0);
  std::cout << "1. '" << first << "' starts with '" << second
            << "': " << startsWith << std::endl;

  // 2. check if the first string contains the second string
  size_t pos = first.find(second);
  if (pos != std::string::npos) {
    bool contains = true;
    std::cout << "2. '" << first << "' contains '" << second
              << "': yes, at location " << pos << std::endl;

    // check for multiple occurrences of the second string
    while (1) {
      pos = first.find(second, pos + 1);
      if (pos == std::string::npos)
        break;
      std::cout << "2.2. at location " << pos << std::endl;
    }

    std::cout << "2.2. and that's all" << std::endl;
  } else {
    bool contains = false;
    std::cout << "2. '" << first << "' contains '" << second << "': no"
              << std::endl;
  }

  // 3. check if the first string ends with the second string
  bool endsWith = (strcmp(first.c_str() + first.size() - second.size(),
                          second.c_str()) == 0);
  std::cout << "3. '" << first << "' ends with '" << second << "': " << endsWith
            << std::endl;
}

int main() {
  match("abracadabra", "abr");
  return 0;
}