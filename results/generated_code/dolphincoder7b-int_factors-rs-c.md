Sure, here's the equivalent C code:

```c
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    int arr1[] = { 1, 2, 4, 5, 10, 10, 20, 25, 50, 100 };
    int size1 = sizeof(arr1) / sizeof(arr1[0]);

    int arr2[] = { 1, 101 };
    int size2 = sizeof(arr2) / sizeof(arr2[0]);

    assert_equal(computeFactors, factor, arr1, size1);
    assert_equal(computeFactors, factor, arr2, size2);
}

int* computeFactors(int num) {
    int factorsSize = sqrtf((float)num) + 1; // get the upper limit of divisors
    int *factors = (int*)malloc(sizeof(int) * factorsSize * 2);

    for (int i = 0, count = 0; i <= num / 2; ++i) {
        if (num % i == 0) {
            factors[count++] = i;
            factors[count++] = num / i;
        }
    }
    int* sortedFactors = sortArray(factors, factorsSize * 2);
    return sortedFactors;
}

int* factor(int num) {
    int factorsSize = sqrtf((float)num) + 1; // get the upper limit of divisors
    int* factors = (int*)malloc(sizeof(int) * factorsSize * 2);

    for (int i = 0, count = 0; i <= num / 2; ++i) {
        if (num % i == 0) {
            factors[count++] = i;
            factors[count++] = num / i;
        }
    }
    int* sortedFactors = sortArray(factors, factorsSize * 2);
    return sortedFactors;
}
```

Please note that this code does not have any assertion checks. You need to implement an `assert_equal` function to compare the computed factors to the expected output arrays (`arr1` and `arr2`). Also, you need to implement a `sortArray` function to sort the factors array before returning it from `computeFactors`.

