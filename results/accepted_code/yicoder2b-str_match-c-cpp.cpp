#include <iostream>
#include <string>

// Function to check if a string starts with another string
bool startsWith(const std::string &container, const std::string &target) {
  if (container.size() < target.size()) {
    return false;
  }
  return container.substr(0, target.size()) == target;
}

// Function to check if a string ends with another string
bool endsWith(const std::string &container, const std::string &target) {
  if (container.size() < target.size()) {
    return false;
  }
  return container.substr(container.size() - target.size()) == target;
}

// Function to check if a string contains another string anywhere in it
bool doesContain(const std::string &container, const std::string &target) {
  return container.find(target) != std::string::npos;
}

int main() {
  std::cout << "Starts with Test ( Hello,Hell ) : "
            << (startsWith("Hello", "Hell") ? "Yes" : "No") << std::endl;
  std::cout << "Ends with Test ( Code,ode ) : "
            << (endsWith("Code", "ode") ? "Yes" : "No") << std::endl;
  std::cout << "Contains Test ( Google,msn ) : "
            << (doesContain("Google", "msn") ? "Yes" : "No") << std::endl;
  return 0;
}