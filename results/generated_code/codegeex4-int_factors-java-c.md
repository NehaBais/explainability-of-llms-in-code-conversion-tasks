In C, we don't have built-in support for set like in Java. However, we can use an array to store the factors, and since C doesn't know its size at compile time, we should allocate memory dynamically. Here is how you might do it:

```c
#include <stdlib.h>
#include <math.h>

long* factors(long n, int *size) {
    long sqrt_n = (long)sqrt(n);
    *size = 2 + (sqrt_n - 1); // Initialize the size of the array with a reasonable estimate.
    long *factors = malloc(sizeof(long) * (*size));
    if (!factors) return NULL; // Check for allocation failure.

    factors[0] = n;
    factors[1] = 1L;
    int i, j;

    for(i = n - 1; i >= sqrt_n; i--) {
        if(n % i == 0) {
            factors[j++] = i;
            factors[j++] = n / i;
        }
    }

    *size = j; // Update the size of array to the actual number of factors found.
    return factors;
}

int main() {
    int size;
    long* factors = factors(100, &size);
    
    for(int i=0; i<size; i++) {
        printf("%ld ", factors[i]);
    }

    free(factors); // Don't forget to free the allocated memory.

    return 0;
}
```
This C code creates an array of long integers and allocates enough space to store all possible factors. The function returns a pointer to this array, which is then printed out in the main function.

The size of the array is estimated based on sqrt(n) since for every factor f <= sqrt(n), there exists a corresponding factor n/f >= sqrt(n). We also include 1 and n itself as factors, hence the +2. This might be slightly larger than necessary but will not cause an error as long as there are enough elements in the array.

Please remember to free up your memory after usage using `free(factors)`.
