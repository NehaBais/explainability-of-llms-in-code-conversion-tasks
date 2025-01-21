 Sure, here is the equivalent code in C++:

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

In this C++ code:
1. We include the necessary headers for input and output operations, as well as the `string` class from the Standard Template Library (STL).
2. We declare a string variable `str` and initialize it with the value "abc".
3. We print the contents of the string to the console using `std::cout`.
4. We append the string literal "def" to the existing string using the `+=` operator.
5. We again print the contents of the string to the console after the append operation.
