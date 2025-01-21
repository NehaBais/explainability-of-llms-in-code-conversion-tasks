 Certainly! Below is the equivalent code in C++ that performs the same operations as your Java code:

```cpp
#include <iostream>
#include <string>

int main() {
    std::string s = "hello";
    std::cout << s + " literal" << std::endl;
    std::string s2 = s + " literal";
    std::cout << s2 << std::endl;
    return 0;
}
```

This C++ code does the following:
1. Creates a string variable `s` initialized to "hello".
2. Prints the concatenation of `s` and " literal" using `std::cout`.
3. Concatenates `s` with " literal" and stores the result in another string variable `s2`.
4. Prints the content of `s2` using `std::cout`.
