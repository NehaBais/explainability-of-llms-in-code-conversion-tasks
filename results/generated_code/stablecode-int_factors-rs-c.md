Here is your code converted from Rust to C:

C Code:
```c
#include <stdio.h>
#include <math.h>

void factor(int num) {
    int i, j;
    printf("Factors of %d are:\n",num);

    for (i = 1; i <= sqrt(num)+1; i++) {
        if (num % i == 0) {
            j = num / i;
            printf("%d and %d\n",i, j));;
        }
    }
}

int main() {
    factor(100);
    factor(101);

    return 0;
}
```

This C code calculates the factors of a positive integer. It starts by iterating from 1 to the square root of the given number plus one. For every iteration, it checks if the current number is a factor of the given number. If it is a factor, it prints both the factor and its corresponding value when divided from the original number.
Note: Make sure you have the math library included in your C compiler settings to be able to use sqrt function which calculates square root of a number.
