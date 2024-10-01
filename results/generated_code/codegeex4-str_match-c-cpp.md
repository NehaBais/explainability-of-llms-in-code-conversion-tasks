The equivalent code in C++ would be:

```cpp
#include <string>
#include <iostream>

bool startsWith(const std::string &container, const std::string &target)
{
    if (container.length() < target.length())
        return false;
    return container.compare(0, target.length(), target) == 0;
}

bool endsWith(const std::string &container, const std::string &target)
{
    if (container.length() < target.length())
        return false;
    return container.compare(container.length() - target.length(), target.length(), target) == 0;
}

bool doesContain(const std::string &container, const std::string &target)
{
    size_t found = container.find(target);
    if (found != std::string::npos)
        std::cout << "Match found at index: " << found << '\n';
    return found != std::string::npos;
}

int main()
{
    std::cout << "Starts with Test ( Hello,Hell ) : " << startsWith("Hello","Hell") << '\n';
    std::cout << "Ends with Test ( Code,ode ) : " << endsWith("Code","ode") << '\n';
    std::cout << "Contains Test ( Google,msn ) : " << doesContain("Google","msn") << '\n';

    return 0;
}
```
The key differences are:

1. The C++ standard library provides the `std::string` class which has member functions for string operations.
2. The `strcmp` and `strstr` functions from C's `string.h` have been replaced with the appropriate member functions in C++ `std::string`, namely `compare()`, and `find()` respectively.
3. `printf` statements are replaced by `std::cout <<` to print output on the console in C++. In addition, we also added '\n' for newline character after each statement to match the original C code's behaviour.
