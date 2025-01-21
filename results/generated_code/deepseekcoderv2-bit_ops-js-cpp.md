 Here's the equivalent code in C++ that performs the specified bitwise operations on two integers, `a` and `b`:

```cpp
#include <iostream>
#include <limits>

void bitwise(int a, int b) {
    std::cout << "a AND b: " << (a & b) << std::endl;
    std::cout << "a OR b: " << (a | b) << std::endl;
    std::cout << "a XOR b: " << (a ^ b) << std::endl;
    std::cout << "NOT a: " << ~a << std::endl;
    
    // Left shift
    if (b >= 0 && b < std::numeric_limits<int>::digits) {
        std::cout << "a << b: " << (a << b) << std::endl;
    } else {
        std::cout << "Shift amount out of range for int." << std::endl;
    }
    
    // Arithmetic right shift
    if (b >= 0 && b < std::numeric_limits<int>::digits) {
        std::cout << "a >> b: " << (a >> b) << std::endl;
    } else {
        std::cout << "Shift amount out of range for int." << std::endl;
    }
    
    // Logical right shift
    if (b >= 0 && b < std::numeric_limits<int>::digits) {
        std::cout << "a >>> b: " << ((unsigned int)a >> b) << std::endl;
    } else {
        std::cout << "Shift amount out of range for int." << std::endl;
    }
}

int main() {
    int a = 10; // Example values for a and b
    int b = 2;
    bitwise(a, b);
    return 0;
}
```

### Explanation:
- **Bitwise AND (`&`)**: The operation `a & b` is performed using the C++ bitwise AND operator.
- **Bitwise OR (`|`)**: The operation `a | b` is performed using the C++ bitwise OR operator.
- **Bitwise XOR (`^`)**: The operation `a ^ b` is performed using the C++ bitwise XOR operator.
- **Bitwise NOT (`~`)**: The operation `~a` is performed using the C++ bitwise NOT operator. Note that in C++, `~` operates on the entire integer, so it effectively flips all bits.
- **Left Shift (`<<`)**: The operation `a << b` is performed using the C++ left shift operator. However, we need to ensure that the shift amount `b` is within a valid range for an `int`.
- **Arithmetic Right Shift (`>>`)**: The operation `a >> b` is performed using the C++ right shift operator. Again, we need to ensure that the shift amount `b` is within a valid range for an `int`.
- **Logical Right Shift (`>>>`)**: To simulate logical right shift in C++, we cast `a` to an unsigned integer before shifting and then perform the shift operation. This ensures that all bits are shifted in from the left, including sign extension.

The code includes checks to ensure that the shift amounts are within a valid range for `int`. If the shift amount is out of this range, it prints a message indicating the invalid shift amount.
