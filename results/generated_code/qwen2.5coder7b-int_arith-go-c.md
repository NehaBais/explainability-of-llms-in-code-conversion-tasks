Here is the equivalent code in C:

```c
#include <stdio.h>

int main() {
    int a, b;
    printf("enter two integers: ");
    scanf("%d %d", &a, &b);
    printf("%d + %d = %d\n", a, b, a+b);
    printf("%d - %d = %d\n", a, b, a-b);
    printf("%d * %d = %d\n", a, b, a*b);
    printf("%d / %d = %d\n", a, b, a/b);  // truncates towards 0
    printf("%d %% %d = %d\n", a, b, a%b); // same sign as first operand
    return 0;
}
```

In C language, there is no built-in function for exponentiation. However, you can implement it with a loop, if needed:

int power(int base, int exp) {
    int i, result = 1;
    for(i=1; i<=exp; i++)
        result *= base;
    return result;
}

Then use this function as `power(a, b)` to calculate the exponentiation.
