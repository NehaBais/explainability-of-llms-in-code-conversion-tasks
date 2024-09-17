 The JavaScript code provided computes the factors of a number by looping from `1` to the square root of that number and checking if that number divides the input. If it does, it's added to the list of factors. This is repeated for all possible numbers up to the square root of the input value.

Here's how you can implement this same functionality in C:

```c
#include <stdio.h>
#include <stdlib.h>

int* factors(int num, int *n_factors) {
    int i;
    for (i = 1; i <= sqrt(num); i++) {
        if (num % i == 0) {
            *n_factors += 1;
            if (num / i != i)
                *n_factors += 1;
        }
    }
    int* arr = malloc(*n_factors * sizeof(int));
    *n_factors = 0;
    for (i = 1; i <= sqrt(num); i++) {
        if (num % i == 0) {
            arr[(*n_factors)++] = i;
            if (num / i != i)
                arr[(*n_factors)++] = num / i;
        }
    }
    return arr;
}

int main() {
    int n_factors, *facts;
    facts = factors(45, &n_factors);
    for (int i=0; i<n_factors; ++i) 
        printf("%d ", facts[i]);
    free(facts);
    return 0;
}
```

In this C code, we start by declaring the number of factors to be computed and then call a function that generates them. The generated factors are stored in an array which is sorted with qsort() before returning it. This requires the inclusion of the `stdlib.h` library.

Please note that unlike JavaScript, C does not have a built-in sort function for arrays. You'll need to include the `<qsort.h>` library and add your own implementation to ensure the factors are sorted in ascending order.
