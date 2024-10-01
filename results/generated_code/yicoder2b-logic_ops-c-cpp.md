Sure, the equivalent C++ code would be:

```cpp
#include <iostream>

void print_logic(bool a, bool b) {
    std::cout << "a and b is " << (a && b) << std::endl; 
    std::cout << "a or b is " << (a || b) << std::endl; 
    std::cout << "not a is " << (!a) << std::endl; 
}
int main() {
    print_logic(true, false);  // you can change these values to test with different inputs.
    return 0;
}
```
Here's how the C++ code works:
- The function `print_logic` takes two boolean (bool) arguments `a` and `b`.
- The expression `(a && b)` will return true if both `a` and `b` are true, otherwise false.
- The expression `(a || b)` will return true if either `a` or `b` is true, otherwise false.
- The expression `!a` is a logical NOT operation which returns the opposite of the value of `a` - true if `a` is false and false if `a` is true.
