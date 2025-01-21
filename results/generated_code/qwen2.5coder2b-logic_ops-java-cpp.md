Sure, here is the equivalent code in C++:

```c++
#include <iostream>

void logic(bool a, bool b) {
  std::cout << "a AND b: " << (a && b) << std::endl;
  std::cout << "a OR b: " << (a || b) << std::endl;
  std::cout << "NOT a: " << (!a) << std::endl;
}
```

This code defines a function `logic` that takes two boolean arguments, `a` and `b`, and prints the results of the logical operations. The `&&` operator is used for "and", the `||` operator is used for "or", and the `!` operator is used for "not".
