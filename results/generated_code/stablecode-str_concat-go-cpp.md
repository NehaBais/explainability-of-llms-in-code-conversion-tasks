Here is the equivalent C++ code:

```cpp
#include <iostream>
#include <string>

int main() {
    std::string s = "hello";

    std::cout << s << std::endl;

    std::cout << s + " literal" << std::endl;

    std::string s2 = s + " literal";

    std::cout << s2 << std::endl;

    return 0;
}
```
This C++ code is an equivalent representation of the original Golang code. It creates a string variable `s` and assigns it the value "hello". It then outputs the content of `s`, concatenates `s` with another string literal, and outputs this result. Finally, it concatenates `s` with another string literal and assigns the resulting string to another string variable `s2`. It finally outputs the content of `s2`.
