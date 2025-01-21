 Here's the equivalent code in C, using the `std::string` class from the Standard Template Library (STL) for a more idiomatic approach to string manipulation:

```cpp
#include <iostream>
#include <string>

int main() {
    std::string str = "abc";
    std::cout << str << std::endl;
    str += "def";
    std::cout << str << std::endl;
    return 0;
}
```

This C++ code initializes a `std::string` variable with the value "abc", prints its contents, appends "def" to it, and then prints the updated contents.
