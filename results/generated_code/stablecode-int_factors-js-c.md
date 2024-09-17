Here is the equivalent C code for calculating factors of a given positive integer. 

This function accepts an integer (num) as input and calculates all its factors. 

The algorithm works by iterating over each number from 1 to the square root of num. If the current number divides 'num' evenly, we add both the divisor and the quotient to our list of factors. The code sorts the array of factors in ascending order before returning it. 

```c
#include <stdio.h>
#include <math.h>

int* factors(int num) {
    int i;
    int *n_factors = malloc(sizeof(int)) * 2);

    for (i = 1; i <= sqrt(num)); i++) {
        if (num % i == 0) {
            *(n_factors + sizeof(int))) = i;
            if ((num / i) != i)
                *(n_factors + 2 * sizeof(int))] = num/i;
        }
    }

    qsort(n_factors, 2 * sizeof(int)), compare);

    return n_factors;
}

int compare(const void* a, const void* b) {
    return (*(int*)a - *(int*)b);
}

int main() {
    int num = 45;
    int* factorsResult = factors(num);

    for (int i = 0; i < 2 * sizeof(int)); i++)
        printf("%d ", *(factorsResult + i)));

    return 0;
}
```

To use this code, simply replace the `num` variable in the `main()` function with your desired positive integer. The program will then calculate and print all the factors of that number.
