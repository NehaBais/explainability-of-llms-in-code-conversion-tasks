 Sure! Here is the equivalent code in C:

```c
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

// Function to generate factors of a positive integer
void GenerateFactors(int n) {
    int factors[100]; // Array to store factors, assuming the number won't have more than 100 factors
    int factorCount = 0;
    
    for (int i = 1; i * i <= n; ++i) {
        if (n % i == 0) {
            factors[factorCount++] = i;
            if (i * i != n && i != n / i) {
                factors[factorCount++] = n / i;
            }
        }
    }
    
    // Sorting the factors array manually, though it's already sorted due to the loop conditions
    for (int i = 0; i < factorCount - 1; ++i) {
        for (int j = i + 1; j < factorCount; ++j) {
            if (factors[i] > factors[j]) {
                int temp = factors[i];
                factors[i] = factors[j];
                factors[j] = temp;
            }
        }
    }
    
    // Printing the factors
    printf("Factors of %4d are: ", n);
    for (int i = 0; i < factorCount; ++i) {
        printf("%d ", factors[i]);
    }
    printf("\n");
}

int main() {
    const int SampleNumbers[] = { 3135, 45, 60, 81 };
    
    for (size_t i = 0; i < sizeof(SampleNumbers) / sizeof(int); ++i) {
        GenerateFactors(SampleNumbers[i]);
    }
    
    return EXIT_SUCCESS;
}
```

This C code performs the same task as the provided C++ code. It calculates the factors of a positive integer and prints them out. The main difference is in how input, output, and data structures are handled between the two languages.
