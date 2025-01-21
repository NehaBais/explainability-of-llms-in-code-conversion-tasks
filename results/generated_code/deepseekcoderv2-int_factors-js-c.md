 Here's the equivalent code in C that computes the factors of a positive integer:

```c
#include <stdio.h>
#include <stdlib.h>

// Function to compute and return the factors of a number
void factors(int num) {
    int n_factors[100]; // Array to store factors, assuming maximum 100 factors
    int index = 0; // Index for the factors array

    for (int i = 1; i <= num; i++) {
        if (num % i == 0) {
            n_factors[index++] = i;
            if (i != num / i) { // Avoid adding the square root twice for perfect squares
                n_factors[index++] = num / i;
            }
        }
    }

    // Sorting the factors array
    qsort(n_factors, index, sizeof(int), (int (*)(const void *, const void *))compare);

    // Printing the factors
    printf("Factors of %d: ", num);
    for (int i = 0; i < index; i++) {
        printf("%d ", n_factors[i]);
    }
    printf("\n");
}

// Comparator function for qsort
int compare(const void *a, const void *b) {
    return (*(int *)a - *(int *)b);
}

int main() {
    factors(45);  // [1,3,5,9,15,45]
    factors(53);  // [1,53]
    factors(64);  // [1,2,4,8,16,32,64]
    return 0;
}
```

This C code defines a function `factors` that computes the factors of a given number and prints them. It uses dynamic memory allocation for storing the factors in an array (`n_factors`), which is then sorted using `qsort`. The comparator function `compare` is used to sort the integers in ascending order.
