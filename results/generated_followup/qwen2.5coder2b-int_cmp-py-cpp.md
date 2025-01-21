The error is due to `std::stoi` not being available for use with `std::cin`. The problem can be solved by removing the explicit type conversion from `std::cin` to `string`.

Here's the corrected code:

```cpp
#include <iostream>

int main() {
  std::cout << "Enter value of a: ";
  int a = std::stoi(std::cin);

  std::cout << "Enter value of b: ";
  int b = std::stoi(std::cin);

  if (a < b) {
    std::cout << "a is less than b" << std::endl;
  } else if (a > b) {
    std::cout << "a is greater than b" << std::endl;
  } else if (a == b) {
    std::cout << "a is equal to b" << std::endl;
  }

  return 0;
}
```

The fix involves using `std::stoi` directly with `std::cin`, which allows for automatic conversion of the input stream to an integer.
