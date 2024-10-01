Sure, here is the equivalent C++ code:

```cpp
#include <iostream>

int main() {
    int a, b;

    std::cout << "Enter first number: ";
    std::cin >> a;
    
    std::cout << "Enter second number: ";
    std::cin >> b;
    
    // The result of adding 'a' and 'b' (Note: integer addition is discouraged in print statements due to confusion with string concatenation)
    int sum = a + b;
    // The result of subtracting 'b' from 'a'
    int difference = a - b;
    // The result of multiplying 'a' and 'b'
    int product = a * b;
    // The result of dividing 'a' by 'b' (Note: 'division' does not contain the fractional result)
    int division = a / b;   // truncates towards 0
    // The remainder of dividing 'a' by 'b'
    int remainder = a % b;  // same sign as first operand
    
    std::cout << "a + b = " << sum << std::endl;
    std::cout << "a - b = " << difference << std::endl;
    std::cout << "a * b = " << product << std::endl;
    std::cout << "quotient of a / b = " << division << std::endl;   // truncates towards 0
    std::cout << "remainder of a / b = " << remainder << std::endl; // same sign as first operand
    return 0;
}
```
Please note that the rounding behavior for division and modulus operations is already defined in C++, it truncates towards zero. And the modulus operation always has the same sign as the dividend (or rather, the number you're dividing into).
