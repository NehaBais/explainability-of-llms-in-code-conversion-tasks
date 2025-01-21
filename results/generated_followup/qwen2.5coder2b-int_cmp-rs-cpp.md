The error occurred because `std::cin >> int a >> int b;` expects two integers to be read as input, but it did not get any. This leads to undefined behavior when trying to use the variables `a` and `b`.

To fix this error, you need to properly parse the user's input before using it in the comparison. Here is the corrected code:

```cpp
#include <iostream>
#include <string>

int main() {
  // Create an instance of std::cin to read inputs from the user
  std::cout << "Enter two integers: ";
  std::cin >> int a >> int b;

  // Using if-else statements for comparison and printing messages
  if (a < b) {
    std::cout << a << " is less than " << b << std::endl;
  } else if (a == b) {
    std::cout << a << " equals " << b << std::endl;
  } else {
    std::cout << a << " is greater than " << b << std::endl;
  }

  return 0;
}
```
