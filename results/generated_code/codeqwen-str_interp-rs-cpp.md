The equivalent C++ code for the given Rust code is:

```cpp
#include <iostream>
#include <string>

int main() {
    std::string str = "Mary had a X lamb.";
    str.replace(str.find("X"), 1, "little");
    std::cout << str << std::endl;

    // You can specify order
    str = "Mary had a X lamb.";
    size_t pos = str.find("X");
    str.erase(pos, 1);
    str.insert(pos, "little");
    std::cout << str << std::endl;

    // Or named arguments if you prefer
    str = "Mary had a X lamb.";
    pos = str.find("X");
    str.erase(pos, 1);
    str.insert(pos, "little");
    std::cout << str << std::endl;

    return 0;
}
```

Note that in C++, you can only replace a certain number of characters at a particular position using the `replace()` function and for named arguments, you have to manually remove the "X" and insert "little" at the appropriate position.
