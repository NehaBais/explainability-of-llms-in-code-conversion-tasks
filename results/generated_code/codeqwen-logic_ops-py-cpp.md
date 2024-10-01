Here is how you can convert the given Python code to C++. Notice that in C++, logical operators do not return boolean values by default but rather return integers with 0 representing false and non-zero representing true.

```cpp
#include <iostream>

void logic(bool A, bool B) {
    std::cout << "A and B: " << (A && B) << std::endl;  // using '&&' operator for logical AND operation
    std::cout << "A or B: " << (A || B) << std::endl; // using '||' operator for logical OR operation
    std::cout << "not A: " << !A << std::endl;        // using '!' operator for logical NOT operation on the first argument only.
}

int main() {
    bool A = true, B = false;  // Set boolean values of A and B 
    logic(A, B);   // Call function with these booleans as arguments
    return 0;
}
```
This C++ code is doing the same operations as the Python code but using logical operators that return an integer instead of a boolean. The output for this program will be:

A and B: 1
A or B: 1
not A: 0

which are equivalent to `True`, `False` and `Not True` respectively in Python.
