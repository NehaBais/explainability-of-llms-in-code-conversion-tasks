Certainly! Here's the converted code in C:
```c
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void main() {
    int num = 100;
    printf("Factors of %d are: ", num);
    for (int i = 1; i <= sqrt(num) + 1; i++) {
        if (num % i == 0) {
            printf("%d, ", i);
            printf("%d\n", num / i);
        }
    }
}
```
Note that in C, there is no need to explicitly specify the type of a variable when it is declared. Therefore, we can simplify the code by removing the `i32` suffix from the type declarations. Additionally, since C does not have support for vectors or assertions like Rust, we need to use traditional array and pointer syntax instead.

I hope this helps! Let me know if you have any questions.
