In C++, you can use `std::cout` for printing and standard logical operators (`&&`, `||`, `!`) to accomplish the same functionality. Here's how you could write your function:

```cpp
#include <iostream>

void logic(bool a, bool b) {
  std::cout << "a AND b: " << (a && b) << std::endl;
  std::cout << "a OR b: " << (a || b) << std::endl;
  std::cout << "NOT a: " << (!a) << std::endl;
}
```
This code will print the results of logical operations on `a` and `b`, as well as the result of a NOT operation on `a`. Note that in C++, when using `std::cout`, you need to explicitly convert boolean values (`true`/`false`) to integer (`1`/`0`) before printing because `std::cout` can't directly output bool types.
