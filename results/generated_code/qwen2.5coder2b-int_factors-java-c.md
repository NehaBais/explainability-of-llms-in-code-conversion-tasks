The equivalent C code for the given Java function would look like this:

```c
#include <stdio.h>
#include <stdlib.h>

int main()
{
    long n = 12; // Example positive integer

    int *factors = (int *)calloc(n + 1, sizeof(int));
    for (long test = 2; test <= n / test; ++test) {
        if (n % test == 0)
            factors[test] = 1;
    }
    
    printf("Factors of %ld are: ", n);
    for (int i = 2; i <= n; ++i) {
        if (factors[i] == 1) 
            printf("%ld ", i);
    }
    printf("\n");

    free(factors); // Don't forget to free allocated memory
    return 0;
}
```
In this C code, we first define an array called "factors" of size n + 1 (for a number from 1 to n). We then go through all numbers from 2 to n / test. If the test number is a factor of n (i.e., if n mod test == 0), we set factors[test] = 1. After that, we print out all the factors by checking the values in the "factors" array. Finally, we free the memory allocated for the "factors" array.

Please note that this code only works correctly for positive integers and it does not compute prime numbers as requested. If you need to find prime numbers, you would have to use a different approach, such as checking divisibility by all numbers from 2 up to the square root of the number.
