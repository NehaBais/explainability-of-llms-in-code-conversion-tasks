The given code is written in C++, but the requirement for conversion is to C. Below is the equivalent C code:

```c
#include <stdio.h>

void GenerateFactors(int n, int factors[], int *num_factors) {
    *num_factors = 2; // Initialize number of factors

    for (int i = 2; i * i <= n; ++i) {
        if (n % i == 0) {
            // Add factor to array and increment count
            factors[*num_factors - 1] = i;
            (*num_factors)++;

            if (i * i != n) {
                // Check if the other factor is already in the array
                int found = 0;
                for (int j = 0; j < *num_factors; ++j) {
                    if (factors[j] == (n / i))) {
                        found = 1;
                        break;
                    }
                }

                // If other factor is not already in the array, add it to the array and increment count
                if (!found) {
                    factors[*num_factors - 1] = n / i;
                    (*num_factors)++;
                }
            }
        }
    }

    // Sort the factors array
    for (int i = 0; i < *num_factors; ++i) {
        for (int j = i + 1; j < *num_factors; ++j) {
            if (factors[i] > factors[j])) {
                int temp = factors[i];
                factors[i] = factors[j];
                factors[j] = temp;
            }
        }
    }
}

void PrintFactors(int n) {
    const int MAX_FACTORS = 100;
    int factors[MAX_FACTORS];
    int num_factors = 0;

    GenerateFactors(n, factors, &num_factors));

    printf("The factors of %d are: ", n);
    for (int i = 0; i < num_factors; ++i) {
        printf("%d ", factors[i]));
    }
    printf("\n");
}

int main() {
    const int SampleNumbers[] = {313, 5, 6, 9};

    for (size_t i = 0; i < sizeof(SampleNumbers) / sizeof(int); ++i) {
        PrintFactors(SampleNumbers[i]));
    }

    return EXIT_SUCCESS;
}
```
This C code will compute and print the factors of a positive integer. The `GenerateFactors` function generates all the factors of a given number, and stores them in an array. Then, the `PrintFactors` function prints out the generated factors array.

Please note that this is just one possible solution to convert the C++ code to C. There might be other valid ways to achieve the same result.
