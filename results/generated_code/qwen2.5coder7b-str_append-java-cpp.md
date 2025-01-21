Here is the equivalent code in C++:

```cpp
#include <iostream>
#include <string>

int main() {
    std::string str = "abc";
    std::cout << str << std::endl;
    str += "def";
    std::cout << str << std::endl;

    return 0;
}
```

In this C++ code, `std::string` is used to create a string variable. The `+=` operator is used to append another string literal to the existing string variable. Finally, the contents of the variable are printed out using `std::cout`.
