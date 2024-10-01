 In C++, you can use `std::string` instead of Java's `String`. Here is how the code would look like in C++:

```cpp
#include <iostream>
#include <string>

int main() {
    std::string string = "def";  // Create a string variable equal to any text value.
    string = "abc" + string;     // Prepend the string variable with another string literal.

    std::cout << string << std::endl; // Outputs: abcdef
    return 0;
}
```
