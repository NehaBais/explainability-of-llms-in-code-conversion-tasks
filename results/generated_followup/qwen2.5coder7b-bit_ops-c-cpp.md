The error occurs because function definitions are not allowed inside another function scope in C++. To fix this, declare the rotation functions outside of the `bitwise` function.

Here is the corrected code:

```cpp
#include <iostream>

// Function declarations
unsigned int leftRotate(unsigned int n, int d);
unsigned int rightRotate(unsigned int n, int d);

void bitwise(int a, int b) {
  std::cout << "a and b: " << (a & b) << std::endl;
  std::cout << "a or b: " << (a | b) << std::endl;
  std::cout << "a xor b: " << (a ^ b) << std::endl;
  std::cout << "not a: " << (~a) << std::endl;
  std::cout << "a << n: " << (a << b) << std::endl; // left shift
  std::cout << "a >> n: " << (a >> b)
            << std::endl; // arithmetic right shift on most platforms
  unsigned int c = a;
  std::cout << "c >> b: " << (c >> b) << std::endl; // logical right shift

  std::cout << "a left rotate b: " << leftRotate(a, b) << std::endl;
  std::cout << "a right rotate b: " << rightRotate(a, b) << std::endl;
}

// Function definitions
unsigned int leftRotate(unsigned int n, int d) {
    return (n << d) | (n >> (32 - d)); // Assuming 32-bit integer
}

unsigned int rightRotate(unsigned int n, int d) {
    return (n >> d) | (n << (32 - d)); // Assuming 32-bit integer
}

int main() {
  int a = 5; // Example values
  int b = 2;
  bitwise(a, b);
  return 0;
}
```

In the revised code, the `leftRotate` and `rightRotate` functions are declared before the `bitwise` function. This resolves the error by ensuring that these functions are properly defined in a global scope where they can be called within `bitwise`.
