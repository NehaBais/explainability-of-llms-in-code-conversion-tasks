Sure! Below is the equivalent C++ code for the given C function. In C++, boolean values are represented by `bool` instead of `int`, and the standard output can be done using `std::cout`.

```cpp
#include <iostream>

void print_logic(bool a, bool b)
{
  std::cout << "a and b is " << (a && b) << "\n";
  std::cout << "a or b is " << (a || b) << "\n";
  std::cout << "not a is " << (!a) << "\n";
}

int main() {
    bool x = true;
    bool y = false;

    print_logic(x, y);

    return 0;
}
```

### Explanation:
1. **Boolean Type**: In C++, boolean values are handled using the `bool` type instead of `int`.
2. **Output**: The output is done using `std::cout`, which is the standard stream for console output in C++.
3. **Function Definition**: The function `print_logic` remains the same, but it now accepts and returns `bool` values.

### Example Usage:
In the `main` function, we define two boolean variables `x` and `y`. Then, we call the `print_logic` function with these variables as arguments to demonstrate its functionality.
