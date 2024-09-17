The given Rust code is already in C language, so it doesn't need conversion. However, here it is again for your convenience:

```c
#include <stdio.h>
#include <math.h>

void factor(int num, int factors[], int *n) {
    for (int i = 1; i <= sqrt(num); i++) {
        if (num % i == 0) {
            factors[(*n)++] = i;
            factors[(*n)++] = num / i;
        }
    }
}

int main() {
    int factors[10];
    int n = 0;
    factor(100, factors, &n);
    for (int i = 0; i < n; i++) {
        printf("%d ", factors[i]);
    }
    printf("\n");
    return 0;
}
```

This C code does the same as your Rust code. It declares a function `factor()` to compute the factors of a positive integer, stores them in an array and count how many factors there are. The `main()` function then calls this function with `100`, prints out all the factors, and returns 0.
