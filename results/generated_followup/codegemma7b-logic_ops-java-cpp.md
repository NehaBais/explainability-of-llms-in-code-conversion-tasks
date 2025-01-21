The error occurs because the `std` namespace is not included. The fix is to add `#include <iostream>` to the beginning of the code.

```cpp
#include <iostream>

void logic(bool a, bool b) {
  std::cout << "a AND b: " << (a && b) << std::endl;
  std::cout << "a OR b: " << (a || b) << std::endl;
  std::cout << "NOT a: " << (!a) << std::endl;
}
```
