```c
#include <stdio.h>
#include <math.h>

void printFactors(long long nr) {
    if (nr < 1) {
        printf("Factors of %lld not computed\n", nr);
        return;
    }
    printf("Factors of %lld: ", nr);
    long long fs[] = {1};
    int size = 1;

    // Factor out 2's
    int exp = 0;
    while (nr % 2 == 0) {
        nr >>= 1;
        exp++;
    }
    for (int i = 0; i < exp; i++) {
        for (int j = 0; j < size; j++) {
            fs[j] *= 2;
        }
        size *= exp;
    }

    // Factor out odd primes
    long long divisor = 3;
    while (nr > 1) {
        int exp = 0;
        while (nr % divisor == 0) {
            nr /= divisor;
            exp++;
        }
        if (exp > 0) {
            for (int i = 0; i < size; i++) {
                fs[i] *= divisor;
            }
            size *= exp;
        }
        divisor += 2;
        if (divisor > sqrt(nr)) {
            divisor = nr;
        }
    }

    for (int i = 0; i < size; i++) {
        printf("%lld ", fs[i]);
    }
    printf("\nNumber of factors = %d\n", size);
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
    return 0;
}
```
