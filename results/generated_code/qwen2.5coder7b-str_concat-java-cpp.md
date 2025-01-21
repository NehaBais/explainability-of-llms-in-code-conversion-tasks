Here is your code converted from Java to C++:

```cpp
#include <iostream>
#include <string>

int main() {
    std::string s = "hello";
    std::cout << s << " literal" << std::endl;
    
    std::string s2 = s + " literal";
    std::cout << s2 << std::endl;

    return 0;
}
```

In C++, you need to include `<iostream>` for input/output operations and `<string>` for string handling. The `std::` prefix is used before the standard library names.
