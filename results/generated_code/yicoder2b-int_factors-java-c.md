Sure, here is the equivalent C code for the given Java program:

```c
#include <stdbool.h>
#include <math.h>
#include <stdlib.h>

// Function to find factors of a number
void factors(long n) {
    if (n <= 0) return; // Error for invalid input
  
    printf("%ld\n", 1); // Always print 1 as factor

    for(long test = n - 1; test >= sqrt(n); test--) {
        if(n % test == 0) {
            printf("%ld\n", test); // Print the first factor
            printf("%ld\n", n / test); // Also print the second (and only for prime numbers) factor
        }
    }
  
    return;
}
```
In C, there is no native method to create a TreeSet like in Java. However, you can use an array or manually track the distinct factors and print them one by one. Also, do not forget to check whether n is positive in the beginning of your function.
