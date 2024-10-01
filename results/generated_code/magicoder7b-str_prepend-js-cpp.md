 In C++, you can use `std::string` from `<string>` library to achieve this functionality. Here's how the JavaScript code would be translated into C++:

```cpp
#include <iostream>
#include <string>

int main() {
    // Declare and initialize string variable
    std::string s = ", World";

    // Prepend "Hello" to the string
    s = "Hello" + s;
    
    // Print the result
    std::cout << s << std::endl;

    return 0;
}
```
In this C++ code, we are using `std::string` instead of JavaScript's `var`. The rest of the logic is kept the same. Please note that in C++, you can directly use the `+` operator for string concatenation unlike in JavaScript where there's a different method like `.concat()`.
