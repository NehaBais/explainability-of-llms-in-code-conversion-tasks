Sure, here's how you can convert the JavaScript code into C++ using standard string operations:

```cpp
#include <iostream>
#include <string>

int main() {
    std::string s = ", World";
    s.insert(0, "Hello");
    std::cout << s << std::endl;
    return 0;
}
```

In this C++ code:
1. We first include the necessary header files for input/output operations and string manipulation.
2. In the `main` function, we declare a `std::string` variable `s` and initialize it with the value ", World".
3. We use the `insert` method of the `std::string` class to prepend "Hello" at the beginning of the string.
4. Finally, we print the modified string using `std::cout`.
