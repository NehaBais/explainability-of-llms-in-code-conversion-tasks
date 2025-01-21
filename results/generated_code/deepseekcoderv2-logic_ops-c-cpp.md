 To convert the given C code to C++, we need to follow these steps:

1. Change the function name to match C++ naming conventions if necessary.
2. Use boolean values instead of integer values.
3. Use `bool` type for boolean variables in C++.
4. Replace the C-style print statements with C++ stream insertion operators (`<<`).
5. Ensure proper syntax and include necessary headers.

Here's the converted code:

```cpp
#include <iostream>

void print_logic(bool a, bool b)
{
  std::cout << "a and b is " << (a && b) << std::endl;
  std::cout << "a or b is " << (a || b) << std::endl;
  std::cout << "not a is " << (!a) << std::endl;
}
```

This C++ code defines the `print_logic` function that takes two boolean arguments and prints the results of logical AND, OR, and NOT operations on these arguments. The `<iostream>` header is included for input/output operations.
