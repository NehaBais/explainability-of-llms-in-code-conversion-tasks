In C++, you can use the `std::string` class for strings, and the '+' operator to concatenate strings. Here is your Java code converted to C++:

```cpp
#include <iostream>
#include <string>

int main() {

    // Create a string variable equal to any text value.
    std::string string = "def";

    // Prepend the string variable with another string literal.
    string = "abc" + string;

    // Output result
    std::cout << string << std::endl;

    return 0;
}
```
This code will output `abcdef`, which is the concatenation of two strings.
