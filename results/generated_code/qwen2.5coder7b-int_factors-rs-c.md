Here is your code converted from Rust to C:

```c
#include <stdio.h>
#include <stdlib.h>

void printFactors(int n) {
    int i;

    printf("The factors of %d are: ", n);
    for(i=1; i<=n/2; i++) {
        if(n%i == 0)
            printf("%d ",i);
    }
}

int main() {
    printFactors(100);
    printf("\nThe factors of 101 are: ");
    printFactors(101);

    return 0;
}
```

This code defines a function `printFactors` that prints the factors of a given number. The `main` function tests this behavior with two numbers, 100 and 101.

Unlike Rust's Vec, C doesn't have built-in support for dynamic arrays or vectors, so instead we use simple arrays to hold our factors in C. Since we don't know how many factors a given number will have, I kept it simple by only supporting up to `n/2` factors (since no factor of n can be greater than n/2). If you want to get all the factors of an arbitrary number, a more complex solution would be needed.

The algorithm for finding the factors is similar to Rust's code. It iterates over numbers from 1 to `n/2`, and checks if each one is a factor by using the modulus operator (`%`). If it is, it prints the factor.
