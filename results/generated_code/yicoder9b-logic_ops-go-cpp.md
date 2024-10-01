In C++, the equivalent code would be:

```cpp
#include <iostream>

void printLogic(bool a, bool b) {
    std::cout << "a and b is " << (a && b) << std::endl;
    std::cout << "a or b is " << (a || b) << std::endl;
    std::cout << "not a is " << !a << std::endl;
}
```
In C++, the logical operators are `&&` for "and", `||` for "or" and `!` for "not". The equivalent of Go's `fmt.Println` in C++ is `std::cout`. Note that booleans in C++ are represented as 0 (for false) or 1 (for true) when printed to the console.
