The equivalent code in C++ would be:

```cpp
#include <iostream>
#include <string>
int main() {
    std::string s = "World";
    s.insert(0, "Hello ");
    std::cout << s << std::endl;
    return 0;
}
```
The C++ version is slightly different from the Rust version due to how string manipulations work in both languages. In C++, you can directly insert a string into another using the `insert` function. Note that we are including the necessary libraries for input/output operations and string handling.
