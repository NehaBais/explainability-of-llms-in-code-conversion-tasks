 Certainly! Below is the equivalent C++ code for the given JavaScript function. This C++ code defines a function that takes two boolean arguments and outputs the results of "and" (`&&`), "or" (`||`), and "not" (`!`) operations on these arguments.

```cpp
#include <iostream>
#include <string>

void logic(bool a, bool b) {
  std::cout << "a AND b: " << (a && b) << std::endl;
  std::cout << "a OR b: " << (a || b) << std::endl;
  std::cout << "NOT a: " << (!a) << std::endl;
}

int main() {
  bool a = true; // or false, depending on your test case
  bool b = false; // or true, depending on your test case
  logic(a, b);
  return 0;
}
```

This C++ code includes:
- A function `logic` that takes two boolean parameters `a` and `b`.
- The results of the logical "and" (`&&`), "or" (`||`), and "not" (`!`) operations are printed to the console.
- A `main` function to demonstrate how to call the `logic` function with example boolean values.
