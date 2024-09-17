In C, there is no built-in function for sorting arrays and it lacks a standard library for handling lists of variable length. So we must implement the sorting functionality ourselves or use an array with a maximum size defined at compile time. Here's a simple translation that uses `qsort` from `stdlib.h`, which allows us to sort an array in ascending order:

```c
#include <stdio.h>
#include <math.h>
#include <stdlib.h>

// Function for comparing two factors
int compare(const void *a, const void *b) {
    return (*(int*)a - *(int*)b);
}

void factors(int num) {
    int n_factors[1000];  // Define a maximum size here
    int i, count = 0;

    for (i = 1; i <= floor(sqrt(num)); i++) {
        if (num % i == 0) {
            n_factors[count++] = i;
            if (num / i != i)
                n_factors[count++] = num / i;
        }
    }

    qsort(n_factors, count, sizeof(int), compare);  // Sort the factors

    for(i = 0; i < count; ++i) {
      printf("%d ", n_factors[i]);
    }
}

int main() {
    factors(45);
    printf("\n");
    factors(53);
    printf("\n");
    factors(64);

    return 0;
}
```

The function `compare` is used by `qsort` to sort the array of factors in ascending order. The `factors` function takes an integer as input, calculates its factors and stores them in the array `n_factors`. After the factors are calculated and stored, the array is sorted using `qsort`, and then each factor is printed.

Please note that this program only works for numbers up to a certain limit, which is defined by the size of the array `n_factors`. If you need to handle larger numbers, you will have to adjust the code accordingly.
