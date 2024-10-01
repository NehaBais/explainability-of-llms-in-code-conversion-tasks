#include <iostream>
#include <string>

void match(const std::string &first, const std::string &second) {
  // 1. Checking if the first string starts with the second string
  if (first.substr(0, second.size()) == second)
    std::cout << "1. " << first << " starts with " << second << ": true\n";
  else
    std::cout << "1. " << first << " starts with " << second << ": false\n";

  // 2. Checking if the first string contains the second string at any location
  size_t found = first.find(second);
  if (found != std::string::npos) {
    std::cout << "2. " << first << " contains " << second << ": true, ";
    std::cout << "at location " << found << "\n";
    while ((found = first.find(second, found + 1)) != std::string::npos)
      std::cout << "2.2. at location " << found << "\n";
  } else {
    std::cout << "2. " << first << " contains " << second << ": false\n";
  }

  // 3. Checking if the first string ends with the second string
  size_t lenFirst = first.size();
  size_t lenSecond = second.size();
  if (first.substr(lenFirst - lenSecond) == second)
    std::cout << "3. " << first << " ends with " << second << ": true\n";
  else
    std::cout << "3. " << first << " ends with " << second << ": false\n";
}

int main() { match("abracadabra", "abr"); }