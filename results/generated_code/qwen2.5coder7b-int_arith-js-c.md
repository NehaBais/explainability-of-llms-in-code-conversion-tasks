Sure, here's how you can convert the provided JavaScript code into C. Note that in C, we don't have direct access to `process.argv` like in Node.js, so we'll use standard input functions (`scanf`) to get user inputs.

```c
#include <stdio.h>
#include <math.h>  // For pow function

int main() {
    int a, b;
    
    // Get two integers from the user
    printf("Enter first integer: ");
    scanf("%d", &a);
    printf("Enter second integer: ");
    scanf("%d", &b);

    // Calculate and display the sum
    int sum = a + b;
    printf("a + b = %d\n", sum);

    // Calculate and display the difference
    int difference = a - b;
    printf("a - b = %d\n", difference);

    // Calculate and display the product
    int product = a * b;
    printf("a * b = %d\n", product);

    // Calculate and display the integer quotient (rounding towards zero)
    int division = a / b;
    printf("a / b (integer part) = %d\n", division);

    // Calculate and display the remainder
    int remainder = a % b;
    printf("a %% b = %d\n", remainder);

    // Calculate and display the exponentiation (using pow function from math.h)
    double power = pow(a, b);
    printf("a ^ b = %.0f\n", power);  // Using %.0f to get an integer result

    return 0;
}
```

### Explanation:
1. **Input**: The user is prompted to enter two integers using `scanf`.
2. **Sum**: The sum of the two integers is calculated and printed.
3. **Difference**: The difference between the two integers is calculated and printed.
4. **Product**: The product of the two integers is calculated and printed.
5. **Integer Quotient**: The integer quotient (rounding towards zero) is calculated and printed using `/`.
6. **Remainder**: The remainder after division is calculated and printed using `%`. In C, the sign of the remainder matches the sign of the dividend (`a`).
7. **Exponentiation**: The result of raising `a` to the power of `b` is calculated using the `pow` function from the `math.h` library.

### Note:
- The `printf` statement with `%d` is used for integer outputs.
- For floating-point results (like exponentiation), we use `%f` and specify `.0` to get an integer result.
- The `scanf` function is used to read integers from the user input.
