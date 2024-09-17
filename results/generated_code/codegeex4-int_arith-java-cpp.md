Here is the equivalent C++ code:

```cpp
#include<iostream>
#include<cmath>

int main() {
    int a, b;

    std::cout << "Enter two integers: ";
    std::cin >> a >> b;

    int sum = a + b;        // The result of adding 'a' and 'b'
    int difference = a - b; // The result of subtracting 'b' from 'a'
    int product = a * b;    // The result of multiplying 'a' and 'b'
    int division = a / b;   // The result of dividing 'a' by 'b'
    int remainder = a % b;  // The remainder of dividing 'a' by 'b'

    std::cout << "a + b = " << sum << "\n";
    std::cout << "a - b = " << difference << "\n";
    std::cout << "a * b = " << product << "\n";
    std::cout << "quotient of a / b = " << division << " (truncates towards 0)\n";   
    std::cout << "remainder of a / b = " << remainder << " (same sign as first operand)\n";

    return 0;
}
```

Note: The `pow()` function in C++ is used for exponentiation. It takes two arguments where the first argument is base and second is the power to which the base is raised. Please remember that it returns a double value, so you may have to cast it back into an integer if needed.
