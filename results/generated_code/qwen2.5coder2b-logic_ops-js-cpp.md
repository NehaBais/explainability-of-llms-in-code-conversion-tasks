In C++, you can use the logical operators `&&`, `||`, and `!` to perform these operations. Here's how to convert the given JavaScript code to C++:

```cpp
#include <iostream>

void logic(bool a, bool b) {
  std::cout << "a AND b: " << (a && b) << std::endl;
  std::cout << "a OR b: " << (a || b) << std::endl;
  std::cout << "NOT a: " << (!a) << std::endl;
}

int main() {
  // Test the function with some values
  logic(true, true);
  logic(false, false);
  logic(true, false);
  logic(false, true);

  return 0;
}
```
In this C++ code:
- We define a function `logic` that takes two boolean arguments.
- Inside the function, we use `&&`, `||`, and `!` to perform "and", "or" on both arguments, respectively, and print the results.
- In the `main` function, we test this logic with some values to ensure it works as expected.
