#include <iostream>
#include <string>

bool startsWith(const std::string &container, const std::string &target) {
  size_t clen = container.length();
  size_t tlen = target.length();

  if (clen < tlen)
    return false;

  return container.substr(0, tlen) == target;
}

bool endsWith(const std::string &container, const std::string &target) {
  size_t clen = container.length();
  size_t tlen = target.length();

  if (clen < tlen)
    return false;

  return container.substr(clen - tlen) == target;
}

bool doesContain(const std::string &container, const std::string &target) {
  return container.find(target) != std::string::npos;
}

int main() {
  std::cout << "Starts with Test ( Hello,Hell )  : "
            << startsWith("Hello", "Hell") << "\n";
  std::cout << "Ends with Test    ( Code,ode )   : " << endsWith("Code", "ode")
            << "\n";
  std::cout << "Contains Test     ( Google,msn )  : "
            << doesContain("Google", "msn");

  return 0;
}