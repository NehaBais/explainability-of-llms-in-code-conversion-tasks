Here is the equivalent C code:

```c
#include <stdio.h>

int main() {
    int A, b;
    printf("enter two integers: ");
    scanf("%d %d", &A, &b);
    printf("%d + %d = %d\n", A, b, A+b);
    printf("%d - %d = %d\n", A, b, A-b);
    printf("%d * %d = %d\n", A, b, A*b);
    printf("%d / %d = %d\n", A, b, A/b);  // truncates towards 0
    if(A%b >= 0) {
        printf("%d %% %d = %d\n", A, b, A%b); // same sign as first operand
    } else {
        int rem = A%b;
        rem += b;
        printf("%d %% %d = %d\n", A, b, rem);
    }
    // no exponentiation operator
    return 0;
}
```

C does not have a built-in way to do the same kind of arithmetic as Go. For example, there is no operator for exponentiation in C. Instead, you can use the "pow" function from math library. This code also handles the case where the remainder has negative sign with an if statement. The modulus operation returns a positive result even when the first operand's sign and second operand's sign are different.

Also note that C is less expressive than Go in terms of operator precedence and arithmetic operations. In C, multiplication has higher precedence than addition/subtraction so parentheses would be needed to enforce order of operations. However, in Go, the division operation has the same precedence as addition/subtraction, so parentheses are not required there.
