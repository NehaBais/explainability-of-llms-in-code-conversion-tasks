```cpp
#include <iostream>
#include <string>

int main() {
    std::string string = "abc";
    std::cout << string << std::endl;
    string += "def";
    std::cout << string << std::endl;

    return 0;
}
```

In C++, `std::string` is used to create a string variable, and `+=` operator is used to append another string. The `<<` operator is used to print the contents of the string.
