The given code is already in C++. The only thing needed to add for C++ is the main function:

```cpp
#include <string>
#include <iostream>

int startsWith(const std::string& container, const std::string& target) {
  return (container.substr(0, target.size()) == target);
}

int endsWith(const std::string& container, const std::string& target) {
  return (container.substr(-target.size()) == target);
}

int doesContain(const std::string& container, const std::string& target) {
  return (container.find(target) != std::string::npos);
}

int main() {
  std::cout << "Starts with Test ( Hello,Hell ) : " << startsWith("Hello","Hell") << "\n";
  std::cout << "Ends with Test ( Code,ode ) : " << endsWith("Code","ode") << "\n";
  std::cout << "Contains Test ( Google,msn ) : " << doesContain("Google","msn") << "\n";

  return 0;
}
```

In C++, we use the `std::string` class instead of the C-style strings and also have a more straightforward syntax for operations like concatenation, substring extraction etc. The `find()` function is used to find the target string in the container. If it returns `npos`, then the target string was not found in the container.
