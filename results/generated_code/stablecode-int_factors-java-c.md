Below is the equivalent C code for finding factors of a given positive integer. 

```c
#include <stdio.h>
#include <stdlib.h>

// Function to find Factors
void factors(long n) {
    printf("%ld ",n);  // always print number itself and 1
    for (long test = n - 1; test >= sqrt(n); test--) {
        if (n % test == 0) {
            printf("%ld ", test); 
            printf("%ld\n", n / test);
        }
    }
}

int main() {
    long n;
    printf("Enter a positive integer: ");
    scanf("%ld", &n);

    factors(n);
    return 0;
}
```
This C program takes a positive integer as input and then prints out the factors of this number. 

The main difference from Java is mainly due to the syntax differences, particularly in function definitions and for loops. Other than these syntactical changes, the logic remains similar to the original Java code.
