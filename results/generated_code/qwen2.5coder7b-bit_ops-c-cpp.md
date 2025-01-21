Sure! Here is the equivalent code in C++:

```cpp
#include <iostream>

void bitwise(int a, int b) {
    std::cout << "a and b: " << (a & b) << std::endl;
    std::cout << "a or b: " << (a | b) << std::endl;
    std::cout << "a xor b: " << (a ^ b) << std::endl;
    std::cout << "not a: " << (~a) << std::endl;
    std::cout << "a << n: " << (a << b) << std::endl; // left shift
    std::cout << "a >> n: " << (a >> b) << std::endl; // arithmetic right shift on most platforms
    unsigned int c = a;
    std::cout << "c >> b: " << (c >> b) << std::endl; // logical right shift

    // Left rotate implementation for completeness
    unsigned int leftRotate(unsigned int n, int d) {
        return (n << d) | (n >> (32 - d)); // Assuming 32-bit integer
    }

    // Right rotate implementation for completeness
    unsigned int rightRotate(unsigned int n, int d) {
        return (n >> d) | (n << (32 - d)); // Assuming 32-bit integer
    }

    std::cout << "a left rotate b: " << leftRotate(a, b) << std::endl;
    std::cout << "a right rotate b: " << rightRotate(a, b) << std::endl;

}

int main() {
    int a = 5; // Example values
    int b = 2;
    bitwise(a, b);
    return 0;
}
```

### Explanation:

1. **Bitwise Operations**: The C++ code uses the same bitwise operators (`&`, `|`, `^`) as in the original C code.
2. **Left and Right Shifts**:
   - `a << b` performs a left shift on `a` by `b` positions.
   - `a >> b` performs an arithmetic right shift on `a` by `b` positions on most platforms.
3. **Logical Right Shift**: To ensure a logical right shift is performed, the integer `a` is cast to an unsigned type (`unsigned int c = a`). The logical right shift is then performed using `c >> b`.
4. **Left and Right Rotations**:
   - Left rotate: `(n << d) | (n >> (32 - d))`
   - Right rotate: `(n >> d) | (n << (32 - d))`
   These implementations assume a 32-bit integer for simplicity.

### Notes:
- The `main` function is provided to demonstrate how you can call the `bitwise` function with example values.
- The bitwise operations and shifts are handled similarly in C++ as they are in C, with some syntax adjustments for C++.
