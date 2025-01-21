#include <iostream>
#include <string>

bool startsWith(const std::string &container, const std::string &target) {
  if (container.length() < target.length())
    return false;
  return container.substr(0, target.length()) == target;
}

bool endsWith(const std::string &container, const std::string &target) {
  if (container.length() < target.length())
    return false;
  return container.substr(container.length() - target.length(),
                          target.length()) == target;
}

bool doesContain(const std::string &container, const std::string &target) {
  size_t pos = container.find(target);
  return pos != std::string::npos;
}

int main() {
  std::cout << "Starts with Test ( Hello,Hell ) : "
            << startsWith("Hello", "Hell") << std::endl;
  std::cout << "Ends with Test ( Code,ode ) : " << endsWith("Code", "ode")
            << std::endl;
  std::cout << "Contains Test ( Google,msn ) : " << doesContain("Google", "msn")
            << std::endl;

  return 0;
}