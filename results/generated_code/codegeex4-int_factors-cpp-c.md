Below is the C version of your code:

```c
#include <stdio.h>
#include <stdlib.h>

int* GenerateFactors(int n, int *size) {
    int *factors = (int*)malloc(sizeof(int)*(2));
    factors[0] = 1;
    *size = 1;
    for (int i = 2; i * i <= n; ++i) {
        if (n % i == 0) {
            factors = (int *)realloc(factors, sizeof(int)*((*size)+1));
            factors[*size] = i;
            (*size)++;
            if (i * i != n) {
                factors = (int *)realloc(factors, sizeof(int)*((*size)+1));
                factors[*size] = n / i;
                (*size)++;
            }
        }
    }

    return factors;
}

void printFactors(int *factors, int size) {
    printf("Factors of ");
    printf("%4d are: ", factors[0]);
    for (int i=1; i<size; i++) {
        printf("%d ", factors[i]);
    }
    printf("\n");
}

int main() {
    const int SampleNumbers[] = { 3135, 45, 60, 81 };
    for (size_t i = 0; i < sizeof(SampleNumbers) / sizeof(int); ++i) {
        int size;
        int *factors = GenerateFactors(SampleNumbers[i], &size);
        printFactors(factors, size);
        free(factors);
    }

    return EXIT_SUCCESS;
}
```

This C version of the code uses dynamic memory allocation to store factors for a number. In C++, we could just push elements into a vector, but in C, it's necessary to manually manage memory.

Also note that `std::vector` and many other features (like iterators) from STL are not available in C, so you need to implement these functionalities yourself or use similar workarounds like the ones used here.
