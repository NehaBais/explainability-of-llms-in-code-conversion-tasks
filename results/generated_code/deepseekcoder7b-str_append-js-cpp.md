In C++, you can use `std::string` and its method `append()` to achieve this as follows:

```cpp
#include <iostream>
#include <string>

int main() {
    std::string s1 = "Hello";
    s1.append(", World!");
    std::cout << s1;
    
    return 0;
}
```

This will output: `Hello, World!`. In C++, we don't have a direct equivalent of JavaScript's += operator for strings, so instead we use the `append()` method to append one string to another. To print to console in C++, we use `std::cout <<` like in the above code.

