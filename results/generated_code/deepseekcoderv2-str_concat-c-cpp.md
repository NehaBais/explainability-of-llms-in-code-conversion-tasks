 Here's the equivalent code in C++:

```cpp
#include <iostream>
#include <string>

int main() {
    std::string s = "hello";
    std::string s2;

    std::cout << s << " literal" << std::endl;
    
    s2 = s + " literal";
    std::cout << s2 << std::endl;

    return 0;
}
```

In this C++ code:
- We use `std::string` for the string variables.
- The concatenation of strings is done using the `+` operator, which is more straightforward than in C with functions like `strcat`.
- The output is achieved using `std::cout`, similar to how `printf` is used in C.
