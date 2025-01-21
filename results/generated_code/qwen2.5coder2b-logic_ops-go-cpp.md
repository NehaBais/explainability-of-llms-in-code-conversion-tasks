To convert this Golang code to C++, you would use the following:
```cpp
#include <iostream>
bool printLogic(bool a, bool b) {
    std::cout << "a and b is " << (a && b) << "\n";
    std::cout << "a or b is " << (a || b) << "\n";
    std::cout << "not a is " << (!a) << "\n";
}
```
This function takes two boolean inputs, `a` and `b`. It then outputs the results of the logical operations (`&&`, `||`, and `!`) on these inputs.
