#include <iostream>
#include <string>

bool startsWith(const std::string &container, const std::string &target) {
  return container.find(target) == 0;
}

bool endsWith(const std::string &container, const std::string &target) {
  return container.rfind(target) == 0;
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