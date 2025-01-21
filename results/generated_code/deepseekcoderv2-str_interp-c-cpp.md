 Sure, here is the equivalent code in C++ with string interpolation using C++11 and later features:

```cpp
#include <iostream>
#include <string>

int main() {
    std::string extra = "little";
    std::cout << "Mary had a " << extra << " lamb." << std::endl;
    return 0;
}
```

In this C++ code, we use the `std::string` class to handle string interpolation. The value of `extra` is inserted into the output stream using the `<<` operator.
