The given code is already written in C++, so there is no conversion needed. It reads two integers from the user and calculates and prints their sum, difference, product, integer quotient, remainder, and exponentiation. The quotient rounds towards zero by default in most programming languages. The remainder follows the sign of the first operand.

Here's the code again for clarity:

```cpp
#include <iostream>
#include <cmath>

int main()
{
    int A, b;
    std::cout << "Enter two integers: ";
    std::cin >> A >> b;

    if (b == 0) {
        std::cerr << "Error: Division by zero is not allowed." << std::endl;
        return 2;
    }

    std::cout << "Sum = " << A + b << std::endl;
    std::cout << "Difference = " << A - b << std::endl;
    std::cout << "Product = " << A * b << std::endl;
    std::cout << "Quotient = " << A / b << std::endl; // Rounds towards zero (in C++11 and later)
    std::cout << "Remainder = " << A % b << std::endl; // Same sign as first operand

    return 0;
}
```
