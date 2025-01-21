In C++, you can use `std::string` for handling strings, which is similar to Java's `String`. Here's how to convert your Java code into a C++ program:

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

In C++, the `+=` operator is used to concatenate two strings. The result is stored in the original variable.
