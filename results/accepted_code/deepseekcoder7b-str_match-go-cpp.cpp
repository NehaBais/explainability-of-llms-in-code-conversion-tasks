#include <iostream>
#include <string>

void match(std::string first, std::string second) {
  std::cout << "1. " << first << " starts with " << second << ": ";
  if (first.find(second) == 0)
    std::cout << "true\n";
  else
    std::cout << "false\n";

  std::size_t found = first.find(second);
  std::cout << "2. " << first << " contains " << second << ": ";
  if (found != std::string::npos)
    std::cout << "true\n";
  else
    std::cout << "false\n";

  if (found != std::string::npos) {
    std::cout << "2.1. at location " << found << ", \n";

    int i = found + 1;
    while ((found = first.find(second, i)) != std::string::npos) {
      std::cout << "2.2. at location " << found << ", ";
      // Move to next position after match
      i = found + 1;
    }

    std::cout << "\b\b\b\n2.2. and that's all.\n";
  }

  std::cout << "3. " << first << " ends with " << second << ": ";
  if (first.rfind(second) == first.length() - second.length())
    std::cout << "true\n";
  else
    std::cout << "false\n";
}

int main() {
  match("abracadabra", "abr");
  return <｜begin▁of▁sentence｜ > 0;
}