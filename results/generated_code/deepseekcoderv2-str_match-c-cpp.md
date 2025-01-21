 Sure! Here is the equivalent C++ code for the given C code:

```cpp
#include <iostream>
#include <string>

bool startsWith(const std::string& container, const std::string& target) {
    if (container.length() < target.length())
        return false;
    return container.substr(0, target.length()) == target;
}

bool endsWith(const std::string& container, const std::string& target) {
    if (container.length() < target.length())
        return false;
    return container.substr(container.length() - target.length(), target.length()) == target;
}

bool doesContain(const std::string& container, const std::string& target) {
    size_t pos = container.find(target);
    return pos != std::string::npos;
}

int main() {
    std::cout << "Starts with Test ( Hello,Hell ) : " << startsWith("Hello", "Hell") << std::endl;
    std::cout << "Ends with Test ( Code,ode ) : " << endsWith("Code", "ode") << std::endl;
    std::cout << "Contains Test ( Google,msn ) : " << doesContain("Google", "msn") << std::endl;

    return 0;
}
```

### Explanation:
1. **startsWith**: This function checks if the `container` starts with the `target`. It uses `substr` to extract the beginning part of the string and compares it with the `target`.
2. **endsWith**: This function checks if the `container` ends with the `target`. It also uses `substr` but extracts from the end of the string.
3. **doesContain**: This function checks if the `container` contains the `target`. It uses `find` to search for the `target` in the `container`, and returns `true` if found, otherwise `false`.

### Optional Requirements:
1. The location of the match is not directly returned by these functions but can be printed separately using the position obtained from `find`.
2. Multiple occurrences are handled automatically as `find` will return the first occurrence unless specified otherwise.
