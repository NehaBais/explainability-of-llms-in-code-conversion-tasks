Sure, here is the equivalent C++ code for your Python code:

```cpp
#include <string>
#include <iostream>

int main() {
    std::string s1 = "hello";
    s1 += " world"; 
    std::cout << s1 << std::endl; // Output: hello world

    std::string s2 = s1 + " world";
    std::cout << s2 << std::endl; // Output: hello world world

    s1 = "hello";
    std::string s3 = ", ".join({s1, "world", "mom"});
    std::cout << s3 << std::endl; // Output: hello, world, mom

    std::string s4 = ", ".join({s1, "world", "mom"});
    std::cout << s4 << std::endl; // Output: hello, world, mom

    return 0;
}
```
