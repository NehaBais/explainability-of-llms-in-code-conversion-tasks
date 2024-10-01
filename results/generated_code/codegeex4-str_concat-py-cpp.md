```cpp
#include <iostream>
#include <string>

int main() {
    std::string s1 = "hello";
    std::cout << s1 + " world" << std::endl;

    std::string s2 = s1 + " world";
    std::cout << s2 << std::endl;

    s1 = "hello";
    std::cout << ", ".join({s1, "world", "mom"}) << std::endl;  // Note: Join operation is not directly supported in C++

    s2 = ", ".join({s1, "world", "mom"});
    std::cout << s2 << std::endl;

    return 0;
}
```
