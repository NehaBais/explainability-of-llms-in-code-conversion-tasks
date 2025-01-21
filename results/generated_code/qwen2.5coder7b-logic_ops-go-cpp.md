Here's how you can convert the given Golang code to C++:
```cpp
#include <iostream>

void printLogic(bool a, bool b) {
    std::cout << "a and b is " << (a && b) << "\n";
    std::cout << "a or b is " << (a || b) << "\n";
    std::cout << "not a is " << (!a) << "\n";
}

int main() {
    bool a = true;
    bool b = false;
    printLogic(a, b);
    return 0;
}
```
This C++ code defines a function `printLogic` that takes two boolean arguments and prints the results of the `and`, `or`, and `not` operations on them. The main function calls `printLogic` with some sample values.
