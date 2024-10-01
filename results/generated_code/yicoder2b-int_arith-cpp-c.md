This is the C++ code that you provided. It asks two integers as input from the user and then performs all the operations mentioned in the problem: addition, subtraction, multiplication, division (integer), modulo operation, and exponentiation.

Please note that due to language differences between languages (C++ vs C), some of these operations may not be directly applicable in C like division towards zero or sign of sign. 

Here's how you can convert this code into C:
```c
#include <stdio.h>

int main() {
    int a, b;
    printf("Enter two integers:\n");
    scanf("%d %d", &a, &b);
    printf("\na + b = %d", a+b);
    printf("\na - b = %d", a-b);
    printf("\na * b = %d", a*b);
    if (b != 0) {
        printf("\n%d / %d = %d remainder %d", a, b, a/b, a%b);
    } else {
        printf("\na / b is undefined as b cannot be zero.");
    }
    return 0;
}
```
This code will not perform all the operations in the same way as in your original C++ program because of language differences. For instance, it does not automatically handle rounding towards negative infinity for division (like C++) and checks if b is zero before performing modulo operation which helps to avoid errors.
