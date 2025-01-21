#include <iostream>
#include <string>

void match(const std::string &first, const std::string &second) {
  // Determine if the first string starts with second string
  bool startsWith = first.find(second) == 0;
  std::cout << "1. " << first << " starts with " << second << ": "
            << (startsWith ? "Yes" : "No") << std::endl;

  // Determine if the first string contains the second string at any location
  bool contains = first.find(second) != -1;
  if (contains) {
    // Print the location of the match for part 2
    int index = first.find(second);
    std::cout << "2. " << first << " contains " << second
              << ": Yes, found at index: " << index << std::endl;

    // Optional: Handle multiple occurrences of a string for part 2
    while (index != -1) {
      std::cout << "2.1. Found next occurrence at index: " << index
                << std::endl;
      // Find the next occurrence of second string starting from index + 1
      index = first.find(second, index + 1);
    }
  }

  // Determine if the first string ends with the second string
  bool endsWith = first.back() == second.back();
  std::cout << "3. " << first << " ends with " << second << ": "
            << (endsWith ? "Yes" : "No") << std::endl;
}

int main() {
  match("abracadabra", "abr");
  return 0;
}