Here is the equivalent C code:

```c
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>
#include <string.h>
#include <ctype.h>

typedef struct {
    int* factors;
    size_t len;
} FactorVector;

FactorVector generateFactors(int n) 
{
    FactorVector result = {0};
    int* factors = malloc(sizeof(int) * (n + 1));

    for (size_t i = 0; i <= n; ++i)
        factors[i] = 0;

    size_t len = 2;
    factors[0] = 1;
    factors[1] = n;

    for (int i = 2; i * i <= n; ++i) {
        if (n % i == 0) {
            factors[len++] = i;
            factors[len++] = n / i;
        }
    }

    // Sorting the array in ascending order
    qsort(factors, len, sizeof(int), cmpfunc);

    result.factors = factors;
    result.len = len;
    return result;
}

void printFactors(FactorVector vec) 
{
    printf("Factors of ");
    for (size_t i = 0; i < vec.len; ++i)
        printf("%d ", vec.factors[i]);
    printf("\n");
}

int cmpfunc(const void* a, const void* b) {
   return (*(int*)a - *(int*)b);
}

int main() 
{
    int sampleNumbers[] = {3135, 45, 60, 81};

    for (size_t i = 0; i < sizeof(sampleNumbers) / sizeof(int); ++i) 
    {
        FactorVector vec = generateFactors(sampleNumbers[i]);
        printFactors(vec);
    }

    return EXIT_SUCCESS;
}
```

Note that the C standard library does not include the `<algorithm>` and `<iterator>` headers, so some functions like `sort()` and `copy()` are used for sorting and printing arrays respectively. The `qsort()` function is used to sort the array in ascending order. The `generateFactors` function generates and returns a FactorVector struct, which contains an array of factors and its length. The `printFactors` function simply prints the factors of a given number.
