The given Golang code is already written in C. However, here is the C version of your Go code for reference:

```c
#include <stdio.h>

void printFactors(int64_t nr) {
    if (nr < 1) {
        printf("
Factors of %ld not computed", nr);
        return;
    }
    printf("
Factors of %ld: ", nr);

    int64_t fs[999999999], n = 1, p, e;
    fs[0] = 1;

    for (p = 2; nr > 1 && p < nr; p++) {
        for (e = 0; nr % p == 0; nr /= p, e++);
        if (e > 0) {
            for(int64_t i = 0; i < n; i++) {
                fs[n + i] = fs[i] * p;
            }
            n += e;
        }
    }

    printf("%ld ", nr);
    if (nr > 1) {
        for(int64_t i = 0; i < n; i++) {
            fs[n + i] = fs[i] * nr;
        }
        n += 1;
    }

    printf("Number of factors = %ld", n);
}

int main() {
    printFactors(-1);
    printFactors(0);
    printFactors(1);
    printFactors(2);
    printFactors(3);
    printFactors(53);
    printFactors(45);
    printFactors(64);
    printFactors(600851475143);
    printFactors(999999999999999989);
}
```

There is one change that needs to be noted. The Go code has the `nr*p` in the inner loop of the function `apf`, which may lead to overflow for large numbers. The corresponding C code uses 64-bit integers (`int64_t`) instead. But, if you want to avoid overflow, you should use a different algorithm that can handle larger numbers efficiently.
