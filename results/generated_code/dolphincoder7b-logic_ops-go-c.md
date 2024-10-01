```c
#include <stdio.h>

void print_logic(int a, int b);

int main() {
    int a = 1;
    int b = 0;

    print_logic(a, b);

    return 0;
}

void print_logic(int a, int b) {
    printf("a and b is %d\n", a && b);
    printf("a or b is %d\n", a || b);
    printf("not a is %d\n", !a);
}
```

In C, the `&&` operator represents logical "and" and `||` operator represents logical "or". The `!` operator represents logical "not". So, to implement these operations in Golang, we just need to convert them into their respective operators in C. Also, we can't directly assign boolean values of true or false to integers as the truthiness (C equivalent for `bool`) can be 0 or 1 only. Therefore, we initialize variables `a` and `b` with non-zero values in our example.
