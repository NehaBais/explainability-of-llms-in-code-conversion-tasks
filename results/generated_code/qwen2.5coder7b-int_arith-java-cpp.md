Here is the equivalent C++ code for your requirement:

```cpp
#include <iostream>

int main() {
    int a, b;
    
    std::cout << "Enter two integers: ";
    std::cin >> a >> b;

    int sum = a + b;        // The result of adding 'a' and 'b'
    int difference = a - b; // The result of subtracting 'b' from 'a'
    int product = a * b;    // The result of multiplying 'a' and 'b'
    int division = a / b;   // The result of dividing 'a' by 'b' (Note: 'division' does not contain the fractional result)
    int remainder = a % b;  // The remainder of dividing 'a' by 'b'

    std::cout << "a + b = " << sum << std::endl;
    std::cout << "a - b = " << difference << std::endl;
    std::cout << "a * b = " << product << std::endl;
    std::cout << "quotient of a / b = " << division << std::endl;   // truncates towards 0
    std::cout << "remainder of a / b = " << remainder << std::endl;   // same sign as first operand

    return 0;
}
```

This program gets two integers from the user, then calculates their sum, difference, product, quotient (rounded towards zero), and remainder. The results are printed out to the console. Please note that in C++, the `%` operator gives the remainder of integer division, not like in Java where it could be used for other purposes. Also, note that when you use `/` with integers in C++ (or Java), the result is an integer and any fractional part is discarded. If you want floating point division, you need to cast one or both operands to `double`.
