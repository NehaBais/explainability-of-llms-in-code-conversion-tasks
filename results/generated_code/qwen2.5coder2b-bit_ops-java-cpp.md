Below is the equivalent code in C++:

```cpp
#include <iostream>

void bitwise(int a, int b) {
    std::cout << "a AND b: " << (a & b) << std::endl;
    std::cout << "a OR b: " << (a | b) << std::endl;
    std::cout << "a XOR b: " << (a ^ b) << std::endl;

    // NOT a
    int not_a = ~a;
    std::cout << "NOT a: " << not_a << std::endl;

    // Left shift
    int left_shifted = a << b;
    std::cout << "a << b: " << left_shifted << std::endl;

    // Arithmetic right shift
    int arithmetic_right_shifted = a >> b;
    std::cout << "a >> b: " << arithmetic_right_shifted << std::endl;

    // Logical right shift (This operation is not directly supported by C++, so we perform it using a mask)
    int logical_right_shifted = (int)((double)a / 2.0) * (1 - (b % 32));
    std::cout << "a >>> b: " << logical_right_shifted << std::endl;

    // Rotate left
    int rotated_left = Integer_rotateLeft(a, b);
    std::cout << "a rol b: " << rotated_left << std::endl;

    // Rotate right
    int rotated_right = Integer_rotateRight(a, b);
    std::cout << "a ror b: " << rotated_right << std::endl;
}

int main() {
    bitwise(5, 2); 
    return 0;
}
```
In this code:
- The `Integer.rotateLeft` and `Integer.rotateRight` functions are assumed to be custom functions that perform the required operations. In this case, I have used a simple mathematical approach for logical right shift as it isn't directly supported by C++.
- Also, note that we do not support the " rol" (rotate left) and "ror" (rotate right) in C++ due to their non-standard behavior.
