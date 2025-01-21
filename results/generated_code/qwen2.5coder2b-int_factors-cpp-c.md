The equivalent C code for the given C++ code is:

```c
#include <stdio.h>
#include <stdbool.h>

bool isFactor(int num, int factor) {
    return (num % factor == 0);
}

void printFactors(int number) {
    if (number <= 1)
        return;
    
    printf("Factors of %d are: ", number);

    for (int i = 2; i * i <= number; ++i) {
        if (isFactor(number, i)) {
            printf("%d ", i);
            if (i * i != number)
                printf("%d ", number / i);
        }
    }

    printf("\n");
}

int main() {
    const int SampleNumbers[] = { 3135, 45, 60, 81 };

    for (size_t i = 0; i < sizeof(SampleNumbers) / sizeof(int); ++i) {
        printFactors(SampleNumbers[i]);
    }

    return EXIT_SUCCESS;
}
```

In this C code:
- The `isFactor` function is used to check if a number `num` is divisible by a factor `factor`.
- The `printFactors` function prints the factors of a given `number`. It first checks if the `number` is less than or equal to 1, in which case it returns without printing any factors. It then iterates from 2 up to the square root of `number`, checking each integer for divisibility using `isFactor`. If `i` divides `number` evenly, it prints `i` and if `i` is not equal to `number / i`, it also prints `number / i`.
- The main function sets up an array of sample numbers and iterates over this array, calling `printFactors` for each number.
