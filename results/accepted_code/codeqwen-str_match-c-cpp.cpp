#include <iostream>
#include <string>

int startsWith(const std::string &container, const std::string &target) {
  return (container.substr(0, target.size()) == target);
}

int endsWith(const std::string &container, const std::string &target) {
  return (container.substr(-target.size()) == target);
}

int doesContain(const std::string &container, const std::string &target) {
  return (container.find(target) != std::string::npos);
}

int main() {
  std::cout << "Starts with Test ( Hello,Hell ) : "
            << startsWith("Hello", "Hell") << "\n";
  std::cout << "Ends with Test ( Code,ode ) : " << endsWith("Code", "ode")
            << "\n";
  std::cout << "Contains Test ( Google,msn ) : " << doesContain("Google", "msn")
            << "\n";

  return 0;
}