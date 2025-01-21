#include <iostream>
#include <string>

void match(std::string first, std::string Second) {
  std::cout << "1. " << First << " starts with " << Second << ": "
            << (First.find(Second, 0) == 0 ? "true" : "false") << "\n";

  size_t pos = First.find(Second);
  if (pos != std::string::npos) {
    std::cout << "2. " << First << " contains " << Second << ": true\n";
    while ((pos = First.find(Second, pos)) != std::string::npos) {
      std::cout << "3. Substring found at position: " << pos << "\n";
      pos++;
    }
  } else {
    std::cout << "2. " << First << " contains " << Second << ": false\n";
  }

  if (First.rfind(Second) != std::string::npos)
    std::cout << "3. " << First << " ends with " << Second << ": true" << "\n";
  else
    std::cout << "3. " << First << " ends with " << Second << ": false" << "\n";
}

int main() {
  match("hello", "ll");
  return 0;
}