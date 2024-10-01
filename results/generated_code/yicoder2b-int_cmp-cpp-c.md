This C++ code can be converted to C as follows:

```c
#include <stdio.h>

int main() {
    int a, b;
    if(scanf("%d %d", &a, &b) != 2) {
        printf("could not read the numbers\n");
        return 1;
    }

    // test for less-than
    if (a < b)
        printf("%d is less than %d\n", a, b);

    // test for equality
    if (a == b)
        printf("%d is equal to %d\n", a, b);

    // test for greater-than
    if (a > b)
        printf("%d is greater than %d\n", a, b);
}
```
