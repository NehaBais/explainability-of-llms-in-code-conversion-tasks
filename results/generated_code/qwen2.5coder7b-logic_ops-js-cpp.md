Here is the equivalent code in C++:

```cpp
#include <iostream>

void logic(bool a, bool b) {
    std::cout << "a AND b: " << (a && b) << std::endl;
    std::cout << "a OR b: " << (a || b) << std::endl;
    std::cout << "NOT a: " << !a << std::endl;
}

int main() {
    logic(true, false);
    return 0;
}
```

This code uses the standard boolean operators `&&` for AND, `||` for OR and `!` for NOT. The `std::cout` is used to print out the results.

Please remember that in C++, logical values are represented as `true` or `false`, unlike JavaScript where they are `true` or `1`. Therefore, when using the boolean operators, you should use the keywords `true` and `false` instead of 1 and 0.
