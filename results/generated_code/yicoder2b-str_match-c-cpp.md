Sure, here is the equivalent C++ code for your given problem:

```cpp
#include <string>
#include <iostream>

// Function to check if a string starts with another string
bool startsWith(const std::string &container, const std::string &target) {
    if (container.size() < target.size()) {
        return false;
    }
    return container.substr(0, target.size()) == target;
}

// Function to check if a string ends with another string
bool endsWith(const std::string &container, const std::string &target) {
    if (container.size() < target.size()) {
        return false;
    }
    return container.substr(container.size() - target.size()) == target;
}

// Function to check if a string contains another string anywhere in it
bool doesContain(const std::string &container, const std::string &target) {
    return container.find(target) != std::string::npos;
}

int main() {
    std::cout << "Starts with Test ( Hello,Hell ) : " << (startsWith("Hello","Hell")?"Yes":"No") << std::endl;
    std::cout << "Ends with Test ( Code,ode ) : " << (endsWith("Code","ode")?"Yes":"No") << std::endl;
    std::cout << "Contains Test ( Google,msn ) : " << (doesContain("Google","msn")?"Yes":"No") << std::endl;
    return 0;
}
```
This code provides the same functionality as your original C code. It defines three functions to check if each of the provided strings starts with, ends with and contains the other string, respectively, in their respective sequences within those strings. Note that `std::string::substr()` and `std::string::find()` are used for string manipulation and searching respectively. Also note that `std::string::npos` is used to indicate an end of string in `std::string::find()`, which is equivalent to the behaviour of `0` in your C code.
