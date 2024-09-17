```
#include <stdio.h>
#include <stdlib.h>

int main() {
    int a, b;
    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);

    // Calculate and print sum
    int sum = a + b;
    printf("sum:              %d\n", sum);

    // Calculate and print difference
    int diff = a - b;
    printf("difference:       %d\n", diff);

    // Calculate and print product
    int prod = a * b;
    printf("product:          %d\n", prod);

    // Calculate and print integer quotient (truncates towards zero)
    int quot = a / b;
    printf("integer quotient: %d\n", quot);

    // Calculate and print remainder (same sign as first operand)
    int rem = a % b;
    if(rem < 0){
        rem = rem * -1;
    }
    printf("remainder:        %d\n", rem);

    return 0;
}
```
Note that this code uses the `scanf` function to read input from the user, which can be a security risk if not used properly. It's important to validate user input to prevent buffer overflow attacks and other types of injection attacks.
