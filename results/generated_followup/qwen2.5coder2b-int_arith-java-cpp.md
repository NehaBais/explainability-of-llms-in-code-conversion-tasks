The error occurs because `std::cin >> int a;` is using the incorrect syntax for declaring an integer. The correct syntax is to use the `int` keyword without any parentheses.

Here's the corrected code:
```cpp
#include <iostream>

int main() {
    int a;
    std::cin >> a;
    int b;
    std::cin >> b;

    int sum = a + b;        // The result of adding 'a' and 'b'
    int difference = a - b; // The result of subtracting 'b' from 'a'
    int product = a * b;    // The result of multiplying 'a' and 'b'

    // Division truncates towards 0
    double division = static_cast<double>(a) / b;

    // Remainder is same sign as first operand
    int remainder = a % b;

    std::cout << "a + b = " << sum;
    std::cout << "\na - b = " << difference;
    std::cout << "\na * b = " << product;
    std::cout << "\nquotient of a / b = " << division; // truncates towards 0
    std::cout << "\nremainder of a / b = "
            << remainder; // same sign as first operand

    return 0;
}
```
