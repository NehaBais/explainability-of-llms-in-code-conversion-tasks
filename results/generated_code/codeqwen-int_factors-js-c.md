Here is the equivalent code in C:

```c
#include <stdio.h>
#include <math.h>

void factors(int num) {
    int n_factors[num], i;
    int count = 0;

    for (i = 1; i <= sqrt(num); i++) {
        if (num % i == 0) {
            n_factors[count] = i;
            count++;
            if (num / i != i) {
                n_factors[count] = num / i;
                count++;
            }
        }
    }

    qsort(n_factors, count, sizeof(int), compare);  // numeric sort

    printf("The factors of %d are: ", num);
    for (i = 0; i < count; i++) {
        if (i > 0)
            printf(", ");
        printf("%d", n_factors[i]);
    }
    printf("\n");
}

int compare(const void * a, const void * B) {
    return (*(int*)A - *(int*)B);
}

int main() {
    factors(45);  // The factors of 45 are: 1, 3, 5, 9, 15, 45
    factors(53);  // The factors of 53 are: 1, 53
    factors(64);  // The factors of 64 are: 1, 2, 4, 8, 16, 32, 64

    return 0;
}
```

In this C code, we create an array 'n_factors' to store the factors of the input number. We also define a function 'compare()' for comparing two integers which is used in the qsort function for numeric sort. In the main() function, we call the 'factors()' function with different inputs and print out the result.
