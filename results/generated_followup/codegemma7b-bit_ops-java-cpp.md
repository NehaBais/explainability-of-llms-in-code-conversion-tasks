The errors occur because the `rotl` and `rotr` functions are not part of the C++ standard library. The fix is to replace these functions with `std::rotateLeft` and `std::rotateRight`, respectively.

```cpp
#include <iostream>
#include <algorithm> // for rotateLeft and rotateRight

void bitwise(int a, int b) {
  std::cout << "a AND b: " << (a & b) << std::endl;
  std::cout << "a OR b: " << (a | b) << std::endl;
  std::cout << "a XOR b: " << (a ^ b) << std::endl;
  std::cout << "NOT a: " << ~a << std::endl;
  std::cout << "a << b: " << (a << b) << std::endl;  // left shift
  std::cout << "a >> b: " << (a >> b) << std::endl;  // arithmetic right shift
  std::cout << "a >>> b: " << (a >> b) << std::endl; // logical right shift
  std::cout << "a ROL b: " << std::rotateLeft(a, b) << std::endl; // rotate left
  std::cout << "a ROR b: " << std::rotateRight(a, b) << std::endl; // rotate right
}
```
