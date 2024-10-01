Sure, here's the equivalent C++ code for the above requirements in C++. Note that there are no optional requirements mentioned in the code. If you need to find multiple occurrences of a string within another string, you can modify the `doesContain` function accordingly:

```cpp
#include <iostream>
#include <string>

bool startsWith(const std::string& container, const std::string& target)
{
    size_t clen = container.length();
    size_t tlen = target.length();

    if (clen < tlen)
        return false;

    return container.substr(0, tlen) == target;
}

bool endsWith(const std::string& container, const std::string& target)
{
    size_t clen = container.length();
    size_t tlen = target.length();

    if (clen < tlen)
        return false;

    return container.substr(clen - tlen) == target;
}

bool doesContain(const std::string& container, const std::string& target)
{
    return container.find(target) != std::string::npos;
}

int main()
{
    std::cout << "Starts with Test ( Hello,Hell )  : " << startsWith("Hello", "Hell") << "\n";
    std::cout << "Ends with Test    ( Code,ode )   : " << endsWith("Code", "ode") << "\n";
    std::cout << "Contains Test     ( Google,msn )  : " << doesContain("Google", "msn");

    return 0;
}
```

In this code, we use `std::string` instead of C-style character arrays for improved memory management and string operations. The `startsWith`, `endsWith`, and `doesContain` functions are implemented in terms of C++'s built-in string manipulation and comparison functions:
1. `startsWith` compares the first n characters of the container with the target. If they match, it returns true; otherwise, false.
2. `endsWith` checks if the last n characters of the container match those of the target. Similar to `startsWith`, it returns true or false accordingly.
3. `doesContain` uses the `find` function to search for a substring within another string. If a match is found, it returns true; otherwise, false.
