 Certainly! Below is the equivalent code in C++ that performs the same operations as the provided Go function:

```cpp
#include <iostream>

void printLogic(bool a, bool b) {
    std::cout << "a and b is " << (a && b) << std::endl;
    std::cout << "a or b is " << (a || b) << std::endl;
    std::cout << "not a is " << (!a) << std::endl;
}

int main() {
    bool a = true; // You can change the values of 'a' and 'b' to test different scenarios
    bool b = false;
    
    printLogic(a, b);
    
    return 0;
}
```

This C++ code defines a function `printLogic` that takes two boolean arguments (`a` and `b`), and it outputs the results of "and" (logical AND), "or" (logical OR), and "not" (logical NOT) operations on these arguments. The `main` function demonstrates how to call this function with different boolean values.
