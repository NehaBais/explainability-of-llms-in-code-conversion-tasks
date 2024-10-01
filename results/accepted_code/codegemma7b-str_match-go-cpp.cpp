#include <algorithm>
#include <iostream>
#include <string>

void match(const std::string &first, const std::string &second) {
  std::cout << "1. " << first << " starts with " << second << ": "
            << first.compare(0, second.size(), second) ==
      0 << std::endl;
  size_t i = first.find(second);
  std::cout << "2. " << first << " contains " << second << ": " << i >=
      0 << std::endl;
  if (i >= 0) {
    std::cout << "2.1. at location " << i << std::endl;
    size_t start = i + 1;
    while ((i = first.find(second, start)) >= 0) {
      std::cout << "2.2. at location " << i << std::endl;
      start = i + 1;
    }
    std::cout << "2.2. and that's all" << std::endl;
  }
  std::cout << "3. " << first << " ends with " << second << ": "
            << first.compare(first.size() - second.size(), second.size(),
                             second) ==
      0 << std::endl;
}

int main() {
  match("abracadabra", "abr");
  return 0;
}