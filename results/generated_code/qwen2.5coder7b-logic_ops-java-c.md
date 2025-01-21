Here is the equivalent code in C:

```c
#include <stdio.h>

void logic(int a, int b){
    printf("a AND b: %d\n", (a && b));
    printf("a OR b: %d\n", (a || b));
    printf("NOT a: %d\n", (!a));
}

int main() {
    int a = 1;
    int b = 0;

    logic(a, b);

    return 0;
}
```

Note that in C, boolean values are represented by integers. `0` is equivalent to `false` and any non-zero value is equivalent to `true`.
