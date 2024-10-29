In C++, you can use `std::string` as an analog of Java's String class and then perform operations like concatenation using the `+=` operator. Here is how it could look:

```cpp
#include <iostream>
#include <string>

int main() {
    std::string str = "def";
    str = "abc" + str;
    
    std::cout << str; // Outputs: abcdef
    
    return 0;
}
```
This code creates a `std::string` object, assigns the value of "def" to it and then prepends another string literal ("abc") before that. The result is printed out using `std::cout`.

