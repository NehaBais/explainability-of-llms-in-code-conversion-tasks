Certainly! Below is the equivalent code from Python to C++:

```cpp
#include <iostream>
#include <string>

int main() {
    std::string extra = "little";
    std::string new_str = "Mary had a " + extra + " lamb.";
    std::cout << new_str << std::endl;
    return 0;
}
```

This C++ code achieves the same functionality as the Python code. It defines an extra string variable and uses `std::string` to concatenate the original string with the additional part, achieving the desired interpolation effect.
