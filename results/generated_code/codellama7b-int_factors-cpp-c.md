 This code uses the Sieve of Eratosthenes algorithm to find all the factors of a given number. The Sieve of Eratosthenes is a simple and efficient method for finding all the prime numbers up to a given number, and it can be used to find the factors of a number by simply dividing it by each prime number in turn.

Here is the converted code from C++ to C:
```
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void GenerateFactors(int n, int factors[]) {
    for (int i = 1; i <= sqrt(n); ++i) {
        if (n % i == 0) {
            factors[factors.length] = i;
            if (i * i != n) {
                factors[factors.length + 1] = n / i;
            }
            ++factors.length;
        }
    }
}

int main() {
    int SampleNumbers[] = { 3135, 45, 60, 81 };
    for (size_t i = 0; i < sizeof(SampleNumbers) / sizeof(int); ++i) {
        int factors[2] = {};
        GenerateFactors(SampleNumbers[i], factors);
        printf("Factors of %d are: ", SampleNumbers[i]);
        for (size_t j = 0; j < factors.length; ++j) {
            printf("%d ", factors[j]);
        }
        printf("\n");
    }
    return EXIT_SUCCESS;
}
```
Note that in C, we don't have the same level of object-oriented programming as in C++, so we need to use functions and arrays to simulate classes and objects. We also need to use `stdlib` for the `EXIT_SUCCESS` constant, which is used to indicate that the program has executed successfully.
