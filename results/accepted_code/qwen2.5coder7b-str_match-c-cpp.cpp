#include <iostream>
#include <string>

bool startsWith(const std::string &container, const std::string &target) {
  if (target.length() > container.length())
    return false;
  for (size_t i = 0; i < target.length(); ++i) {
    if (container[i] != target[i])
      return false;
  }
  return true;
}

bool endsWith(const std::string &container, const std::string &target) {
  if (target.length() > container.length())
    return false;
  for (size_t i = 0; i < target.length(); ++i) {
    if (container[container.length() - target.length() + i] != target[i])
      return false;
  }
  return true;
}

bool doesContain(const std::string &container, const std::string &target,
                 size_t &position) {
  position = container.find(target);
  return position != std::string::npos;
}

int main() {
  std::cout << "Starts with Test ( Hello, Hell ) : "
            << (startsWith("Hello", "Hell") ? "true" : "false") << std::endl;
  std::cout << "Ends with Test ( Code, ode ) : "
            << (endsWith("Code", "ode") ? "true" : "false") << std::endl;

  size_t position;
  if (doesContain("Google", "msn", position)) {
    std::cout << "Contains Test ( Google, msn ) : true at position " << position
              << std::endl;
  } else {
    std::cout << "Contains Test ( Google, msn ) : false" << std::endl;
  }

  // Handling multiple occurrences
  size_t nextPosition = position + 1;
  while (doesContain("Google", "o", nextPosition)) {
    std::cout << "Contains Test ( Google, o ) : true at position "
              << nextPosition << std::endl;
    nextPosition++;
  }

  return 0;
}