 Certainly! Below is the equivalent C++ code for the given JavaScript snippet:

```cpp
#include <iostream>
#include <string>

int main() {
    std::string s = ", World";
    s = "Hello" + s;
    std::cout << s << std::endl;
    return 0;
}
```

In this C++ code:
- We include the necessary headers for input/output operations and string manipulation.
- We declare a `std::string` variable `s`.
- We prepend the string literal "Hello" to the existing content of `s`.
- Finally, we print the modified string using `std::cout`.
