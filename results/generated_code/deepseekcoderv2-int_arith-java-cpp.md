 Sure, here is the equivalent code in C++ without error handling and with explanations for each part:

```cpp
#include <iostream>
#include <cstdlib> // For std::abs

int main() {
    int a, b;
    
    // Get the 2 numbers from the user
    std::cout << "Enter two integers: ";
    std::cin >> a >> b;

    int sum = a + b;        // The result of adding 'a' and 'b'
    int difference = a - b; // The result of subtracting 'b' from 'a'
    int product = a * b;    // The result of multiplying 'a' and 'b'
    
    // For quotient, we use integer division which truncates towards zero
    int division = a / b;  
    
    // For remainder, the sign matches the sign of the first operand if different
    int remainder = a % b; 

    std::cout << "a + b = " << sum << std::endl;
    std::cout << "a - b = " << difference << std::endl;
    std::cout << "a * b = " << product << std::endl;
    std::cout << "quotient of a / b (truncates towards zero) = " << division << std::endl;
    std::cout << "remainder of a / b (sign matches first operand if different) = " << remainder << std::endl;

    return 0;
}
```

### Explanation:
1. **Input Handling**: In C++, `std::cin` is used to read integers from the standard input, similar to Java's `Scanner`.
2. **Arithmetic Operations**: The arithmetic operations (`+`, `-`, `*`) are performed directly on the variables `a` and `b`.
3. **Integer Division**: In C++, integer division truncates towards zero by default, which matches the behavior you described for rounding towards zero.
4. **Remainder Operation**: The remainder operation is handled using the modulus operator (`%`), with the sign of the result matching that of the first operand if the operands have different signs.
5. **Output**: Results are printed to the standard output using `std::cout`, similar to Java's `System.out.println()`.
