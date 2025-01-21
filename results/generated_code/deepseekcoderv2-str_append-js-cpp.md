 Certainly! Below is the equivalent C++ code to achieve the same functionality as your JavaScript code:

```cpp
#include <iostream>
#include <string>

int main() {
    std::string s1 = "Hello";
    s1 += ", World!";
    std::cout << s1 << std::endl;
    return 0;
}
```

In this C++ code:
- We include the necessary headers for input/output operations and string manipulation.
- We define a `std::string` variable `s1` initialized with "Hello".
- We append ", World!" to `s1` using the `+=` operator.
- Finally, we print the contents of `s1` using `std::cout`.
