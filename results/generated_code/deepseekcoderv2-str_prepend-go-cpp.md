 Here's how you can convert the given Go code to C++:

```cpp
#include <iostream>
#include <string>

int main() {
    std::string s = "world!";
    s = "Hello, " + s;
    std::cout << s << std::endl;
    return 0;
}
```

In this C++ code:
1. We include the necessary headers for input/output operations and string manipulation.
2. We declare a `std::string` variable named `s` and initialize it with "world!".
3. We prepend the string literal "Hello, " to the existing string in `s`.
4. Finally, we output the modified string using `std::cout`.
