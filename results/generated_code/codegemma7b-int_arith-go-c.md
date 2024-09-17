```c
#include <stdio.h>

int main() {
    int a, b;

    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);

    printf("%d + %d = %d\n", a, b, a + b);
    printf("%d - %d = %d\n", a, b, a - b);
    printf("%d * %d = %d\n", a, b, a * b);
    printf("%d / %d = %d (truncates towards 0)\n", a, b, a / b);
    printf("%d %% %d = %d (same sign as first operand)\n", a, b, a % b);

    return 0;
}
```

**Explanation:**

* The code includes the necessary header file `stdio.h` for input and output operations.
* It declares two integer variables `a` and `b`.
* It prompts the user to enter two integers and stores them in the variables `a` and `b`.
* It calculates and prints the sum, difference, product, quotient, and remainder using the corresponding operators.
* The quotient is printed with a note indicating that it truncates towards zero.
* The remainder is printed with a note indicating that it has the same sign as the first operand.

**Note:**

* The code does not include exponentiation operator.
* Error handling is not included in the given requirements.
