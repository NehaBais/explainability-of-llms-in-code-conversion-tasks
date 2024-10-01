The C language does not have built-in support for scanning variables directly from the console. Also, there is an exponentiation operator in Go but no direct equivalent in C. Here's a basic conversion:

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
    // no exponentiation operator equivalent in C
    return 0;
}
```
