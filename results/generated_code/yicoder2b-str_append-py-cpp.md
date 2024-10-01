Sure, here is the equivalent C++ code for your Python snippet. It creates a string variable `str` equal to any text value "12345678" and appends another string literal "9!" to it. Finally, it prints out the contents of `str` after the append operation.
```cpp
#include <iostream>
#include <string>

int main() {
    std::string str = "12345678";
    str += "9!";
    std::cout << str << std::endl;
    return 0;
}
```
