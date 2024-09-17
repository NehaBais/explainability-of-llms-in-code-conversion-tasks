```c
#include <stdio.h>
#include <math.h>

void print_factors(int n) {
    int isqrt_n = sqrt(n);
    printf("%d: factors: ", n);

    for(int x = 1; x <= isqrt_n; x++) {
        if(n % x == 0) {
            printf("%d ", x);
            if (n / x != x)
                printf("%d ", n / x);
        }
    }

    if(isqrt_n * isqrt_n == n && isqrt_n != n) {
        printf("%d", isqrt_n);
    }

    printf("\n");
}

int main() {
    print_factors(45);
    print_factors(53);
    print_factors(64);

    return 0;
}
```
