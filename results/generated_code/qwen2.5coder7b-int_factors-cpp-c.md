Sure! Here is the equivalent code in C:

```c
#include <stdio.h>
#include <stdlib.h>

void GenerateFactors(int n) {
    int factors[] = { 1, n };
    int factorCount = 2;

    for (int i = 2; i * i <= n; ++i) {
        if (n % i == 0) {
            factors[factorCount++] = i;
            if (i * i != n)
                factors[factorCount++] = n / i;
        }
    }

    // Sort the factors array
    for (int i = 1; i < factorCount - 1; ++i) {
        for (int j = 0; j < factorCount - i - 1; ++j) {
            if (factors[j] > factors[j + 1]) {
                int temp = factors[j];
                factors[j] = factors[j + 1];
                factors[j + 1] = temp;
            }
        }
    }

    printf("Factors of %d are: ", n);
    for (int i = 0; i < factorCount; ++i) {
        printf("%d ", factors[i]);
    }
    printf("\n");
}

int main() {
    int SampleNumbers[] = { 3135, 45, 60, 81 };
    int sampleSize = sizeof(SampleNumbers) / sizeof(int);

    for (int i = 0; i < sampleSize; ++i) {
        GenerateFactors(SampleNumbers[i]);
    }

    return EXIT_SUCCESS;
}
```

### Explanation:
- **GenerateFactors Function:**
  - The function `GenerateFactors` is similar to the C++ version. It calculates and stores the factors of a given number in an array.
  - After calculating the factors, it sorts them using a simple bubble sort algorithm.

- **Main Function:**
  - The `main` function initializes an array with sample numbers and iterates over each number, calling the `GenerateFactors` function to print the factors.

### Note:
- In C, arrays are used instead of vectors, and manual memory management is handled using pointers.
- Sorting is done in place within the `GenerateFactors` function.
