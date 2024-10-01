### Pseudocode:

printLogic(a, b):
    print("a and b is " + str(a AND b))
    print("a or b is " + str(a OR b))
    print("not a is " + str(NOT a))


### Code
```cpp
#include <iostream>

void printLogic(bool a, bool b) {
    std::cout << "a and b is " << (a && b) << "\n";
    std::cout << "a or b is " << (a || b) << "\n";
    std::cout << "not a is " << (!a) << "\n";
}
```
