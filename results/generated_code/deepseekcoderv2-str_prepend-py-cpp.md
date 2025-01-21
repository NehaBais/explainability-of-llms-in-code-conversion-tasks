 Certainly! Below is the equivalent C++ code for the provided Python script:

```cpp
#include <iostream>
#include <string>

int main() {
    std::string s = "12345678";
    s = "0" + s;  // by concatenation
    std::cout << s << std::endl;
    return 0;
}
```

This C++ code does the following:
1. Includes the necessary headers for input/output operations and string manipulation.
2. Defines a `std::string` variable `s` initialized with the value "12345678".
3. Prepends the string literal "0" to the existing string using concatenation.
4. Outputs the modified string to the console.
