Sure! Below is the equivalent C++ code for the given Python function. This function takes two boolean values as input and prints the results of "and", "or", and "not" on both arguments.

```cpp
#include <iostream>

void logic(bool a, bool b) {
    std::cout << "a and b: " << (a && b) << std::endl;
    std::cout << "a or b: " << (a || b) << std::endl;
    std::cout << "not a: " << (!a) << std::endl;
}

int main() {
    // Test the function with some values
    logic(true, true);
    logic(true, false);
    logic(false, true);
    logic(false, false);

    return 0;
}
```

### Explanation:
1. **Function Definition**:
   - The `logic` function takes two parameters, `a` and `b`, which are both of type `bool`.
   - It prints the results of "and" (`a && b`), "or" (`a || b`), and "not" (`!a`) on the console using `std::cout`.

2. **Main Function**:
   - The `main` function is the entry point of the program.
   - It calls the `logic` function with different pairs of boolean values to demonstrate its functionality.

You can compile and run this C++ code using any C++ compiler, such as g++, Clang, or MSVC.
