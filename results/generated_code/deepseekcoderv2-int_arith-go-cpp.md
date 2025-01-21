 Here's the equivalent code in C++:

```cpp
#include <iostream>

int main() {
    int a, b;
    std::cout << "Enter two integers: ";
    std::cin >> a >> b;
    
    std::cout << a << " + " << b << " = " << (a + b) << std::endl;
    std::cout << a << " - " << b << " = " << (a - b) << std::endl;
    std::cout << a << " * " << b << " = " << (a * b) << std::endl;
    std::cout << a << " / " << b << " = " << (a / b) << std::endl;  // truncates towards zero
    std::cout << a << " % " << b << " = " << (a % b) << std::endl; // same sign as first operand
    
    // No exponentiation operator in C++, you would need to implement it manually or use a library for that.
    
    return 0;
}
```

In this C++ code:
- We use `std::cin` to read two integers from the user.
- The sum, difference, product, quotient (truncates towards zero), and remainder are calculated and printed using `std::cout`.
- For exponentiation, since there is no built-in operator in C++, you would need to implement it manually if needed, or use a library for that purpose.
