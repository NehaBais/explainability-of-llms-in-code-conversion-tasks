 Here's the equivalent code in C++:

```cpp
#include <iostream>
#include <string>

int main() {
    // text assigned to a string variable
    std::string s = "hello";

    // output string variable
    std::cout << s << std::endl;

    // concatenate variable and literal, assign result to another string variable
    std::string s2 = s + " literal";

    // output second string variable
    std::cout << s2 << std::endl;

    return 0;
}
```

This C++ code does the following:
1. Initializes a `std::string` variable named `s` with the value "hello".
2. Outputs the content of `s` to the console.
3. Concatenates `s` with the string literal " literal" and assigns the result to another `std::string` variable named `s2`.
4. Outputs the content of `s2` to the console.
