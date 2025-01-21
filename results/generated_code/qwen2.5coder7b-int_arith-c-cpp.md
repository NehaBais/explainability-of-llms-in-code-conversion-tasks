To convert the given C code to C++, you can follow these steps. Here's how you can do it:

1. Use `std::cin` instead of command-line arguments for input.
2. Handle the division and modulus operations explicitly since C++ does not round towards zero by default.

Here is the equivalent C++ code:

```cpp
#include <iostream>
using namespace std;

int main() {
    int a, b;
    
    // Get two integers from the user
    cout << "Enter the first integer: ";
    cin >> a;
    cout << "Enter the second integer: ";
    cin >> b;

    // Display their sum
    cout << "a + b = " << (a + b) << endl;

    // Display their difference
    cout << "a - b = " << (a - b) << endl;

    // Display their product
    cout << "a * b = " << (a * b) << endl;

    // Display their integer quotient and indicate rounding behavior
    cout << "a / b = " << (a / b) << " (truncates towards zero)" << endl;

    // Display their remainder and indicate sign behavior
    cout << "a % b = " << (a % b) << " (same sign as the first operand)" << endl;

    return 0;
}
```

### Explanation:
- **Input Handling**: The code uses `std::cin` to get user input.
- **Division and Modulus**: The division and modulus operations are performed directly. C++ does not automatically round towards zero or negative infinity for division, so this behavior is explicitly noted in the output.

This C++ code achieves the same functionality as your original C code while following the specified requirements.
