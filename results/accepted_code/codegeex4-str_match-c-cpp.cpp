#include <iostream>
#include <string>

bool startsWith(const std::string &container, const std::string &target) {
  if (container.length() < target.length())
    return false;
  return container.compare(0, target.length(), target) == 0;
}

bool endsWith(const std::string &container, const std::string &target) {
  if (container.length() < target.length())
    return false;
  return container.compare(container.length() - target.length(),
                           target.length(), target) == 0;
}

bool doesContain(const std::string &container, const std::string &target) {
  size_t found = container.find(target);
  if (found != std::string::npos)
    std::cout << "Match found at index: " << found << '\n';
  return found != std::string::npos;
}

int main() {
  std::cout << "Starts with Test ( Hello,Hell ) : "
            << startsWith("Hello", "Hell") << '\n';
  std::cout << "Ends with Test ( Code,ode ) : " << endsWith("Code", "ode")
            << '\n';
  std::cout << "Contains Test ( Google,msn ) : " << doesContain("Google", "msn")
            << '\n';

  return 0;
}