Sure, here's how you can convert the provided JavaScript code into C++. This code will prompt the user to input two integers and then compute and display their sum, difference, product, integer quotient, remainder, and exponentiation.

```cpp
#include <iostream>
#include <cmath>

int main() {
    int a, b;

    // Prompt the user for input
    std::cout << "Enter first integer: ";
    std::cin >> a;
    std::cout << "Enter second integer: ";
    std::cin >> b;

    // Calculate and display the sum
    int sum = a + b;
    std::cout << "a + b = " << sum << std::endl;

    // Calculate and display the difference
    int difference = a - b;
    std::cout << "a - b = " << difference << std::endl;

    // Calculate and display the product
    int product = a * b;
    std::cout << "a * b = " << product << std::endl;

    // Calculate and display the integer quotient (towards zero)
    int division = a / b;
    std::cout << "a / b = " << division << " (towards zero)" << std::endl;

    // Calculate and display the remainder
    int remainder = a % b;
    std::cout << "a % b = " << remainder << std::endl;

    // Calculate and display the exponentiation (using pow function from cmath)
    double exponentiation = std::pow(a, b);
    std::cout << "a ^ b = " << exponentiation << std::endl;

    return 0;
}
```

### Explanation:
1. **Prompt for User Input:**
   - The `std::cin` object is used to read integers from the user.

2. **Sum:**
   - The sum of two integers is calculated using the `+` operator and stored in the variable `sum`.

3. **Difference:**
   - The difference between two integers is calculated using the `-` operator and stored in the variable `difference`.

4. **Product:**
   - The product of two integers is calculated using the `*` operator and stored in the variable `product`.

5. **Integer Quotient (Towards Zero):**
   - The integer quotient of two integers is calculated using the `/` operator, which performs integer division towards zero by default.

6. **Remainder:**
   - The remainder when one integer is divided by another is calculated using the `%` operator and stored in the variable `remainder`.

7. **Exponentiation (Using `pow` Function):**
   - The exponentiation of one integer to the power of another is calculated using the `std::pow` function from the `<cmath>` library.

### Note:
- This code does not include error handling for simplicity.
- The modulo operator `%` in C++ works similarly to JavaScript, meaning it returns a remainder with the same sign as the dividend.
- Integer division in C++ rounds towards zero by default, which matches the behavior of JavaScript's `/` operator when used on integers.
