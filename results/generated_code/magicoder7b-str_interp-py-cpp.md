 The equivalent C++ code for your Python code would look like:
```cpp
#include <iostream>
#include <string>
#include <sstream>

int main() {
    std::string extra = "little";
    std::ostringstream oss;
    
    oss << "Mary had a " << extra << " lamb.";
    std::string new_str = oss.str();
    
    std::cout << new_str;

    return 0;
}
```
In the C++ code, we use `std::ostringstream` to perform string interpolation similar to Python's f-strings. The stream insertion operator (`<<`) is used to append all of our strings together. Then `oss.str()` is called to get the resulting string as a std::string. Lastly, that new string is printed out with `std::cout`.
