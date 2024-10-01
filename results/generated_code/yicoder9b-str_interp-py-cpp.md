In C++, you can use `std::stringstream` to accomplish the same thing:

```c++
#include <iostream>
#include <sstream>

int main() {
    std::string extra = "little";
    std::stringstream ss;
    ss << "Mary had a " << extra << " lamb.";
    std::string new_str = ss.str();
    std::cout << new_str << std::endl;

    return 0;
}
```
This C++ code does the same thing as your Python code - it creates a string that replaces 'X' with the value of `extra` variable, and then prints this new string.
