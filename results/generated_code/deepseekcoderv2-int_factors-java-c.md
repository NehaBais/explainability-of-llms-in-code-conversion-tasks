 Here's the equivalent code in C that computes the factors of a positive integer, similar to the Java method you provided:

```c
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// Function to compute the factors of a number
void factors(long n) {
    // TreeSet is not available in C, so we use a dynamic array (list) and sort it later
    int capacity = 10;
    long *factorsArray = malloc(capacity * sizeof(long));
    int size = 0;

    factorsArray[size++] = n;
    factorsArray[size++] = 1L;

    for (long test = n - 1; test >= sqrt(n); test--) {
        if (n % test == 0) {
            factorsArray[size++] = test;
            factorsArray[size++] = n / test;
        }
    }

    // Sort the array before returning the factors
    for (int i = 0; i < size - 1; i++) {
        for (int j = i + 1; j < size; j++) {
            if (factorsArray[i] > factorsArray[j]) {
                long temp = factorsArray[i];
                factorsArray[i] = factorsArray[j];
                factorsArray[j] = temp;
            }
        }
    }

    // Print the sorted factors
    printf("Factors of %ld: ", n);
    for (int i = 0; i < size; i++) {
        printf("%ld ", factorsArray[i]);
    }
    printf("\n");

    free(factorsArray);
}

int main() {
    long number;
    printf("Enter a positive integer: ");
    scanf("%ld", &number);
    factors(number);
    return 0;
}
```

### Explanation:
1. **Function Definition**: The function `factors` takes a single argument `n`, which is the number to be factored.
2. **Dynamic Array for Factors**: Since C does not have a built-in `TreeSet` like Java, we use a dynamically allocated array to store factors and then sort it.
3. **Adding Factors**: We add the number itself and 1 initially. Then, we iterate from `n - 1` down to the square root of `n`, adding both the divisor and the quotient if they are factors.
4. **Sorting the Array**: The array is sorted using a simple bubble sort algorithm.
5. **Printing Factors**: Finally, the sorted list of factors is printed.
6. **Memory Management**: Memory allocated for the array is freed after use to avoid memory leaks.
7. **Main Function**: The `main` function reads an input from the user and calls the `factors` function with that number.
