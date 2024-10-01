In C++, you can achieve this using `std::string` and the '+' operator for concatenation. Below is your converted JavaScript code in C++:

```cpp
#include <iostream>
#include <string>

int main() {
    // Initialize string s with value ", World"
    std::string s = ", World";

    // Prepend the string variable with another string literal "Hello"
    s = "Hello" + s;

    // Print out the final value of s
    std::cout << s;

    return 0;
}
```
This code does exactly what your JavaScript code does. It initializes a string variable `s` with the value ", World". Then it prepends the string variable `s` with another string literal "Hello". Finally, it prints out the final value of `s`.
