Here is the equivalent C code for your Python program:

```C
#include <stdio.h>
#include <math.h>

void factor(int n) {
    int i, x = 1;
    int *factors1 = malloc(n * sizeof(int));
    int *factors2 = malloc(n * sizeof(int));

    while (x < sqrt(n)) {
        if (n % x == 0) {
            factors1[i] = x;
            factors2[i++] = n / x;
        }
        x++;
    }

    if (x * x == n)
        factors1[i++] = x;

    for (; i > 0; i--)
        printf("%d ", factors2[i - 1]);

    free(factors1);
    free(factors2);
}

int main() {
    factor(45);
    printf("\n");
    factor(53);
    printf("\n");
    factor(64);
    return 0;
}
```
Note that the C language doesn't have a built-in function for integer square root, so we use `sqrt` from `math.h`. Also, note that arrays in C need to have their size declared before the array is used.

The factors are stored in two separate arrays (factors1 and factors2) and then reversed when printed. This is because factors2 contains the larger factors while factors1 contains the smaller ones up to sqrt(n).
