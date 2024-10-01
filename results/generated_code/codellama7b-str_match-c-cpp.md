```
#include <string>
#include <iostream>

int startsWith(const std::string& container, const std::string& target)
{
    if (container.size() < target.size()) {
        return 0;
    } else {
        return std::equal(target.begin(), target.end(), container.begin());
    }
}

int endsWith(const std::string& container, const std::string& target)
{
    if (container.size() < target.size()) {
        return 0;
    } else {
        auto it = container.end() - target.size();
        return std::equal(target.begin(), target.end(), it);
    }
}

int doesContain(const std::string& container, const std::string& target)
{
    return container.find(target) != std::string::npos;
}

int main()
{
    std::cout << "Starts with Test ( Hello,Hell ) : " << startsWith("Hello","Hell") << std::endl;
    std::cout << "Ends with Test ( Code,ode ) : " << endsWith("Code","ode") << std::endl;
    std::cout << "Contains Test ( Google,msn ) : " << doesContain("Google","msn") << std::endl;

    return 0;
}
```
Note: The `std::string` class provides a more modern and efficient way of working with strings in C++, compared to using arrays of characters.
