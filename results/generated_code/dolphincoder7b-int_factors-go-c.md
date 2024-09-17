This is a Golang code snippet that computes the factors of a positive integer. Here's the equivalent C code:
```c
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int* factorize(long long n, int* size) {
    if (n <= 0) return NULL;

    // Count the number of factors
    *size = 2;
    for (long long i = 3; i * i <= n; ++i)
        if (n % i == 0)
            (*size)++;

    int* factors = malloc((*size) * sizeof(int));
    factors[0] = 1;
    factors[1] = n;

    // Calculate the factorization of the number
    int k = 2, p = 3;
    while (n > 1 && k < (*size)) {
        if (n % p == 0) {
            factors[k] = p;
            do
                n /= p;
            while (n % p == 0);

            (*size)++;
        }

        if (++p == k || p * p > n) ++k;
    }

    return factors;
}

int main() {
    int size1, size2, size3, size4, size5, size6, size7;
    int* factors1 = factorize(-1, &size1);
    int* factors2 = factorize(0, &size2);
    int* factors3 = factorize(1, &size3);
    int* factors4 = factorize(2, &size4);
    int* factors5 = factorize(3, &size5);
    int* factors6 = factorize(53, &size6);
    int* factors7 = factorize(45, &size7);

    printf("Factors of -1: ");
    for (int i = 0; i < size1; ++i)
        if (i > 0) printf(", %d", factors1[i]);
        else printf("%d", factors1[i]);
    printf("\nNumber of factors: %d\n", size1);

    printf("Factors of 0: ");
    for (int i = 0; i < size2; ++i)
        if (i > 0) printf(", %d", factors2[i]);
        else printf("%d", factors2[i]);
    printf("\nNumber of factors: %d\n", size2);

    printf("Factors of 1: ");
    for (int i = 0; i < size3; ++i)
        if (i > 0) printf(", %d", factors3[i]);
        else printf("%d", factors3[i]);
    printf("\nNumber of factors: %d\n", size3);

    printf("Factors of 2: ");
    for (int i = 0; i < size4; ++i)
        if (i > 0) printf(", %d", factors4[i]);
        else printf("%d", factors4[i]);
    printf("\nNumber of factors: %d\n", size4);

    printf("Factors of 3: ");
    for (int i = 0; i < size5; ++i)
        if (i > 0) printf(", %d", factors5[i]);
        else printf("%d", factors5[i]);
    printf("\nNumber of factors: %d\n", size5);

    printf("Factors of 53: ");
    for (int i = 0; i < size6; ++i)
        if (i > 0) printf(", %d", factors6[i]);
        else printf("%d", factors6[i]);
    printf("\nNumber of factors: %d\n", size6);

    printf("Factors of 45: ");
    for (int i = 0; i < size7; ++i)
        if (i > 0) printf(", %d", factors7[i]);
        else printf("%d", factors7[i]);
    printf("\nNumber of factors: %d\n", size7);

    free(factors1);
    free(factors2);
    free(factors3);
    free(factors4);
    free(factors5);
    free(factors6);
    free(factors7);
}
```
Note that this C code uses dynamic memory allocation for the factors array, so it needs to be freed when no longer needed.
