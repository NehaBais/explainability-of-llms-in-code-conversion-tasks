Sure! The equivalent C++ code would be:

```cpp
#include <iostream>
#include <string>
#include <algorithm>    // std::search

bool startsWith(const std::string& container, const std::string& target)
{
  return container.rfind(target, 0) == 0;
}

bool endsWith(const std::string& container, const std::string& target)
{
  if (container.size() < target.size()) return false;
  return container.compare(container.size() - target.size(), target.size(), target) == 0;;
}

bool doesContain(const std::string& container, const std::string& target)
{
    if (target.length() > container.length()) return false;   // If search string is larger than container string it can't be in there
    auto pos = std::search(container.begin(), container.end(), target.begin(), target.end()); 
    return (pos != container.end());  
}

int main(void)
{
  std::cout << "Starts with Test ( Hello,Hell ) : " << startsWith("Hello","Hell") << std::endl;
  std::cout << "Ends with Test ( Code,ode ) : " << endsWith("Code","ode") << std::endl;
  std::cout << "Contains Test ( Google,msn ) : " << doesContain("Google","msn") << std::endl;

  return 0;
}
```
This code will work similarly to the given C code. However it is important to note that in this C++ version we use `std::string` instead of c-strings and the functions `rfind`, `compare`, and `search` from the standard library for string operations. These are more efficient and idiomatic C++ ways to do these tasks than the original C code.
