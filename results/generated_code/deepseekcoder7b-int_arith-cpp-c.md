The integer division (a/b) rounds towards zero which is also known as floor division. For example, if we have 9 divided by 4 it would return 2 because there are less than 5 in any number after 9 and thus the quotient should be smaller not larger.

In terms of remainder, its sign matches that of the second operand (b). If b is positive then the remainder will always be non-negative and if b is negative, it might become negative which indicates a loss or surplus in dividing. 

If you want to translate this into C, here's how:
```c
#include <stdio.h>

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    printf("a+b = %d\n", a+b);
    printf("a-b = %d\n", a-b);
    printf("a*b = %d\n", a*b);
    printf("a/b = %d, remainder %d\n", a/b, a%b);
    return 0;
}
```

