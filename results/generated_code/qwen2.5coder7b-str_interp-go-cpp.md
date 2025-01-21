In C++, you can use the `std::string`'s member function `replace()` to achieve string interpolation. Here is how to convert the provided Go code to C++:

```cpp
#include <iostream>
#include <string>

int main() {
    std::string str = "Mary had a %s lamb";
    std::string txt = "little";
    size_t pos = str.find("%s");
    if (pos != std::string::npos) {
        str.replace(pos, 2, txt);
    }
    std::cout << str << std::endl;
    return 0;
}
```

In this C++ code, we first find the position of "%s" in our string `str` using `std::string::find()`. If found, it replaces the occurrence of "%s" with the value from `txt` using `std::string::replace()` and then print out the final modified string.
